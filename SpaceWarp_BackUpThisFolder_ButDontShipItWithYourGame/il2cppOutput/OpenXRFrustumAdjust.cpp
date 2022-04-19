#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1, T2*, T3*, T4, T5*, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3, T4 p4, T5* p5, T6* p6)
	{
		R ret;
		void* params[6] = { &p1, p2, p3, &p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2, T3*, T4*, T5, T6*, T7*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4, T5 p5, T6* p6, T7* p7)
	{
		R ret;
		void* params[7] = { p1, &p2, p3, p4, &p5, p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>
struct Action_2_t38DEBB6BD6AE1CA882236F63F7E1DB3781D38994;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView[]
struct XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143;
// com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust
struct OpenXRFrustumAdjust_tBD45DFAD8F9B955C4F8D953462515C94DAB8F981;
// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper
struct OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrCreateReferenceSpaceFunc
struct _xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A;
// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrDestroySpaceFunc
struct _xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2;
// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrGetInstanceProcFunc
struct _xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4;
// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrLocateViewsFunc
struct _xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral026FB578E376BD80D85CD52FA5506D49EA85F42C;
IL2CPP_EXTERN_C String_t* _stringLiteral2765DDF11A09C6B9B7A20FBBA984B4CD9DA09E01;
IL2CPP_EXTERN_C String_t* _stringLiteral41F26A357BB5E77B9331187AA54CA8757B72A747;
IL2CPP_EXTERN_C String_t* _stringLiteral68AA8D641DB5E5ADCC7FD57F669FF92A819124B6;
IL2CPP_EXTERN_C String_t* _stringLiteral89025404683C8D83F84CF12C3CFA3FF40B793634;
IL2CPP_EXTERN_C String_t* _stringLiteral9335151B7CEF584AB8ABB1427CAAE6C58EECC04E;
IL2CPP_EXTERN_C String_t* _stringLiteral9BFA3EE5B89B5C94F45AFD340D041551A18C92F2;
IL2CPP_EXTERN_C String_t* _stringLiteral9D6A746A95216FC196873EE5123D982E8791D71E;
IL2CPP_EXTERN_C String_t* _stringLiteral9F361C9486B738058D5D3B0207DE17162AD53A84;
IL2CPP_EXTERN_C String_t* _stringLiteralC7CCD0FD63CCE393D0EE7E98E5BA26FD0C4E309D;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA600A570A78482458216C67F6DC4B71331F67D;
IL2CPP_EXTERN_C String_t* _stringLiteralEC42E697C6AF1065672E5961D8D319734DAD1665;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetDelegateForFunctionPointer_Tis_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A_mCF8DB2484A063371C5A87808B9AFE48D0FC61EF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetDelegateForFunctionPointer_Tis_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2_m8AFA3FDADCFAF916BDEF160B3E92C54EB424B8BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetDelegateForFunctionPointer_Tis_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4_mB1D3C793A836BF123F88BF04AEF94EAF46AFC154_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetDelegateForFunctionPointer_Tis_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC_m1ECEE62034D9A704FEC0EBB052B5E7AB2E7F7C29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFrustumAdjust_RenderPipelineManager_beginCameraRendering_m653DA7851D7C483C24947A51E4A60120572A43B1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFC00A57DF5A8485A6F0C4A561141730F53BB7F09 
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;
};

struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrFovf
struct XrFovf_t3605E1E8BCF3365442E0A30FDFABBA2943650F2E 
{
	// System.Single com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrFovf::angleLeft
	float ___angleLeft_0;
	// System.Single com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrFovf::angleRight
	float ___angleRight_1;
	// System.Single com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrFovf::angleUp
	float ___angleUp_2;
	// System.Single com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrFovf::angleDown
	float ___angleDown_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_1;
};

struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ScriptableRenderContext::kRenderTypeTag
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___kRenderTypeTag_0;
};

// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrFrameState
struct XrFrameState_tAE77BD53D366D442C400884C372A047CA5B913FB 
{
	// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrFrameState::type
	int32_t ___type_1;
	// System.IntPtr com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrFrameState::next
	intptr_t ___next_2;
	// System.Int64 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrFrameState::predictedDisplayTime
	int64_t ___predictedDisplayTime_3;
	// System.Int64 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrFrameState::predictedDisplayPeriod
	int64_t ___predictedDisplayPeriod_4;
	// System.UInt32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrFrameState::shouldRender
	uint32_t ___shouldRender_5;
};

// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrPosef
struct XrPosef_tF145E66B686BE80006A0542217CE40F29BB214D7 
{
	// UnityEngine.Quaternion com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrPosef::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_0;
	// UnityEngine.Vector3 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrPosef::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
};

// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewLocateInfo
struct XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB 
{
	// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewLocateInfo::type
	int32_t ___type_1;
	// System.IntPtr com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewLocateInfo::next
	intptr_t ___next_2;
	// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewLocateInfo::viewConfigurationType
	int32_t ___viewConfigurationType_3;
	// System.Int64 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewLocateInfo::displayTime
	int64_t ___displayTime_4;
	// System.UInt64 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewLocateInfo::space
	uint64_t ___space_5;
};

// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewState
struct XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF 
{
	// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewState::type
	int32_t ___type_1;
	// System.IntPtr com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewState::next
	intptr_t ___next_2;
	// System.UInt64 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewState::viewStateFlags
	uint64_t ___viewStateFlags_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrReferenceSpaceCreateInfo
struct XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8 
{
	// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrReferenceSpaceCreateInfo::type
	int32_t ___type_1;
	// System.IntPtr com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrReferenceSpaceCreateInfo::next
	intptr_t ___next_2;
	// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrReferenceSpaceCreateInfo::referenceSpaceType
	int32_t ___referenceSpaceType_3;
	// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrPosef com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrReferenceSpaceCreateInfo::poseInReferenceSpace
	XrPosef_tF145E66B686BE80006A0542217CE40F29BB214D7 ___poseInReferenceSpace_4;
};

// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView
struct XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0 
{
	// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView::type
	int32_t ___type_1;
	// System.IntPtr com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView::next
	intptr_t ___next_2;
	// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrPosef com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView::pose
	XrPosef_tF145E66B686BE80006A0542217CE40F29BB214D7 ___pose_3;
	// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrFovf com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView::fov
	XrFovf_t3605E1E8BCF3365442E0A30FDFABBA2943650F2E ___fov_4;
};

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
};

struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143_StaticFields
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;
};

// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrCreateReferenceSpaceFunc
struct _xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A  : public MulticastDelegate_t
{
};

// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrDestroySpaceFunc
struct _xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2  : public MulticastDelegate_t
{
};

// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrGetInstanceProcFunc
struct _xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4  : public MulticastDelegate_t
{
};

// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrLocateViewsFunc
struct _xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper
struct OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
	// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrGetInstanceProcFunc com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::_xrGetInstanceProcAddr
	_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* ____xrGetInstanceProcAddr_15;
	// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrCreateReferenceSpaceFunc com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::_xrCreateReferenceSpace
	_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* ____xrCreateReferenceSpace_16;
	// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrDestroySpaceFunc com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::_xrDestroySpace
	_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* ____xrDestroySpace_17;
	// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrLocateViewsFunc com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::_xrLocateViews
	_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* ____xrLocateViews_18;
	// System.UInt64 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::xrInstance
	uint64_t ___xrInstance_19;
	// System.UInt64 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::xrSession
	uint64_t ___xrSession_20;
	// System.UInt64 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::xrSpace
	uint64_t ___xrSpace_21;
};

struct OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields
{
	// System.Boolean com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::isInit
	bool ___isInit_22;
	// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView[] com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::views
	XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF* ___views_23;
	// System.Boolean com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::HasConflict
	bool ___HasConflict_24;
};

// com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust
struct OpenXRFrustumAdjust_tBD45DFAD8F9B955C4F8D953462515C94DAB8F981  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust::isCantedFov
	bool ___isCantedFov_4;
	// UnityEngine.Camera com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_5;
	// UnityEngine.Matrix4x4 com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust::projectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projectionMatrix_6;
	// System.Boolean com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust::isInit
	bool ___isInit_7;
	// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust::leftView
	XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0 ___leftView_8;
	// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust::rightView
	XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0 ___rightView_9;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView[]
struct XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF  : public RuntimeArray
{
	ALIGN_FIELD (8) XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0 m_Items[1];

	inline XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0 value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m80999490097638177C6B639CEA321424D5BB0991_gshared (Action_2_t38DEBB6BD6AE1CA882236F63F7E1DB3781D38994* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TDelegate System.Runtime.InteropServices.Marshal::GetDelegateForFunctionPointer<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_GetDelegateForFunctionPointer_TisRuntimeObject_m005B22CF26B9C5130A493791E21EE54B52771614_gshared (intptr_t ___ptr0, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mBEB5B9B513FE305CE98CA8065CC6E6CC0E5A4D51 (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m80999490097638177C6B639CEA321424D5BB0991_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_beginCameraRendering_mF8416C1EB5B9FF130A7F638B842E283CAA83BC2B (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::remove_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_remove_beginCameraRendering_m1612AF680F9518D63562A8AC8C521A326B1C6C71 (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::ResetCullingMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetCullingMatrix_m2262DF26372BA0CCD153EB6E1A342F8D2714BFC1 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_cullingMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMatrix_m3822BAE8953126EE9EF01E4FD9C1F5590EC1269B (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust::OnPreCull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFrustumAdjust_OnPreCull_mDAFFB6F19A07650EAA1680C0D5B3974985D562F6 (OpenXRFrustumAdjust_tBD45DFAD8F9B955C4F8D953462515C94DAB8F981* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.OpenXR.Features.OpenXRFeature::get_xrGetInstanceProcAddr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t OpenXRFeature_get_xrGetInstanceProcAddr_m616F5709A63844DA12D409E8FEF4929EFA9F5B22 (const RuntimeMethod* method) ;
// TDelegate System.Runtime.InteropServices.Marshal::GetDelegateForFunctionPointer<com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrGetInstanceProcFunc>(System.IntPtr)
inline _xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* Marshal_GetDelegateForFunctionPointer_Tis_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4_mB1D3C793A836BF123F88BF04AEF94EAF46AFC154 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	return ((  _xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* (*) (intptr_t, const RuntimeMethod*))Marshal_GetDelegateForFunctionPointer_TisRuntimeObject_m005B22CF26B9C5130A493791E21EE54B52771614_gshared)(___ptr0, method);
}
// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrGetInstanceProcFunc::Invoke(System.UInt64,System.String,System.IntPtr&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9_inline (_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___addr2, const RuntimeMethod* method) ;
// TDelegate System.Runtime.InteropServices.Marshal::GetDelegateForFunctionPointer<com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrDestroySpaceFunc>(System.IntPtr)
inline _xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* Marshal_GetDelegateForFunctionPointer_Tis_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2_m8AFA3FDADCFAF916BDEF160B3E92C54EB424B8BD (intptr_t ___ptr0, const RuntimeMethod* method)
{
	return ((  _xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* (*) (intptr_t, const RuntimeMethod*))Marshal_GetDelegateForFunctionPointer_TisRuntimeObject_m005B22CF26B9C5130A493791E21EE54B52771614_gshared)(___ptr0, method);
}
// TDelegate System.Runtime.InteropServices.Marshal::GetDelegateForFunctionPointer<com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrCreateReferenceSpaceFunc>(System.IntPtr)
inline _xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* Marshal_GetDelegateForFunctionPointer_Tis_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A_mCF8DB2484A063371C5A87808B9AFE48D0FC61EF2 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	return ((  _xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* (*) (intptr_t, const RuntimeMethod*))Marshal_GetDelegateForFunctionPointer_TisRuntimeObject_m005B22CF26B9C5130A493791E21EE54B52771614_gshared)(___ptr0, method);
}
// TDelegate System.Runtime.InteropServices.Marshal::GetDelegateForFunctionPointer<com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrLocateViewsFunc>(System.IntPtr)
inline _xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* Marshal_GetDelegateForFunctionPointer_Tis_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC_m1ECEE62034D9A704FEC0EBB052B5E7AB2E7F7C29 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	return ((  _xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* (*) (intptr_t, const RuntimeMethod*))Marshal_GetDelegateForFunctionPointer_TisRuntimeObject_m005B22CF26B9C5130A493791E21EE54B52771614_gshared)(___ptr0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRNativeWrapper_Init_m4856E4F5E7D3B188711F04D46CCAEA6D9B744A21 (OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrCreateReferenceSpaceFunc::Invoke(System.UInt64,com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrReferenceSpaceCreateInfo& modreq(System.Runtime.InteropServices.InAttribute),System.UInt64&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _xrCreateReferenceSpaceFunc_Invoke_m759EB0B16D6286C6630E9C1FC1F7E58F9FADA443_inline (_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* __this, uint64_t ___session0, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8* ___createInfo1, uint64_t* ___space2, const RuntimeMethod* method) ;
// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrLocateViewsFunc::Invoke(System.UInt64,com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewLocateInfo& modreq(System.Runtime.InteropServices.InAttribute),com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewState&,System.Int32,System.Int32&,com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _xrLocateViewsFunc_Invoke_m46D24074DBEC24E3B68A369BE826FA0BA9266497_inline (_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* __this, uint64_t ___session0, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB* ___viewLocateInfo1, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF* ___viewState2, int32_t ___viewCapacityInput3, int32_t* ___viewCountOutput4, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* ___views5, const RuntimeMethod* method) ;
// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrDestroySpaceFunc::Invoke(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _xrDestroySpaceFunc_Invoke_m25145AE7F50B512C61E86A5BBF27C19527676A6A_inline (_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* __this, uint64_t ___space0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFrustumAdjust_OnEnable_mA5BEB4FC0986E4E55F381EA0CC5DC5B2CF57C695 (OpenXRFrustumAdjust_tBD45DFAD8F9B955C4F8D953462515C94DAB8F981* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Camera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___m_Camera_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Camera_5), (void*)L_0);
		// isInit = false; //when reenabling, do init again
		__this->___isInit_7 = (bool)0;
		// }
		return;
	}
}
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFrustumAdjust_Update_mFBB6EFC81D6549F31BC7E80B55F7556E49EDD8D3 (OpenXRFrustumAdjust_tBD45DFAD8F9B955C4F8D953462515C94DAB8F981* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFrustumAdjust_RenderPipelineManager_beginCameraRendering_m653DA7851D7C483C24947A51E4A60120572A43B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// if( OpenXRNativeWrapper.HasConflict )
		il2cpp_codegen_runtime_class_init_inline(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var);
		bool L_0 = ((OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var))->___HasConflict_24;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if(!isInit && OpenXRNativeWrapper.isInit)
		bool L_1 = __this->___isInit_7;
		if (L_1)
		{
			goto IL_0249;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var);
		bool L_2 = ((OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var))->___isInit_22;
		if (!L_2)
		{
			goto IL_0249;
		}
	}
	{
		// RenderPipelineManager.beginCameraRendering += RenderPipelineManager_beginCameraRendering;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_3 = (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)il2cpp_codegen_object_new(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_mBEB5B9B513FE305CE98CA8065CC6E6CC0E5A4D51(L_3, __this, (intptr_t)((void*)OpenXRFrustumAdjust_RenderPipelineManager_beginCameraRendering_m653DA7851D7C483C24947A51E4A60120572A43B1_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_add_beginCameraRendering_mF8416C1EB5B9FF130A7F638B842E283CAA83BC2B(L_3, NULL);
		// leftView = OpenXRNativeWrapper.views[0];
		il2cpp_codegen_runtime_class_init_inline(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var);
		XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF* L_4 = ((OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var))->___views_23;
		NullCheck(L_4);
		int32_t L_5 = 0;
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0 L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___leftView_8 = L_6;
		// rightView = OpenXRNativeWrapper.views[1];
		XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF* L_7 = ((OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var))->___views_23;
		NullCheck(L_7);
		int32_t L_8 = 1;
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0 L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___rightView_9 = L_9;
		// Vector3 leftRot = leftView.pose.orientation.eulerAngles;    //take note this is in a right-handed coord system
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* L_10 = (&__this->___leftView_8);
		XrPosef_tF145E66B686BE80006A0542217CE40F29BB214D7* L_11 = (&L_10->___pose_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_12 = (&L_11->___orientation_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_12, NULL);
		V_0 = L_13;
		// if (leftRot.y > 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = L_14.___y_3;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_023b;
		}
	}
	{
		// isCantedFov = true;
		__this->___isCantedFov_4 = (bool)1;
		// Vector2 halfFov = new Vector2(
		//     Mathf.Max(-leftView.fov.angleLeft, leftView.fov.angleRight, -rightView.fov.angleLeft, rightView.fov.angleRight),
		//     Mathf.Max(leftView.fov.angleUp, -leftView.fov.angleDown, rightView.fov.angleUp, -rightView.fov.angleDown)
		// );
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = L_16;
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* L_18 = (&__this->___leftView_8);
		XrFovf_t3605E1E8BCF3365442E0A30FDFABBA2943650F2E* L_19 = (&L_18->___fov_4);
		float L_20 = L_19->___angleLeft_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((-L_20)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = L_17;
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* L_22 = (&__this->___leftView_8);
		XrFovf_t3605E1E8BCF3365442E0A30FDFABBA2943650F2E* L_23 = (&L_22->___fov_4);
		float L_24 = L_23->___angleRight_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_24);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = L_21;
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* L_26 = (&__this->___rightView_9);
		XrFovf_t3605E1E8BCF3365442E0A30FDFABBA2943650F2E* L_27 = (&L_26->___fov_4);
		float L_28 = L_27->___angleLeft_0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((-L_28)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = L_25;
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* L_30 = (&__this->___rightView_9);
		XrFovf_t3605E1E8BCF3365442E0A30FDFABBA2943650F2E* L_31 = (&L_30->___fov_4);
		float L_32 = L_31->___angleRight_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_32);
		float L_33;
		L_33 = Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline(L_29, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = L_34;
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* L_36 = (&__this->___leftView_8);
		XrFovf_t3605E1E8BCF3365442E0A30FDFABBA2943650F2E* L_37 = (&L_36->___fov_4);
		float L_38 = L_37->___angleUp_2;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_38);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = L_35;
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* L_40 = (&__this->___leftView_8);
		XrFovf_t3605E1E8BCF3365442E0A30FDFABBA2943650F2E* L_41 = (&L_40->___fov_4);
		float L_42 = L_41->___angleDown_3;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((-L_42)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_43 = L_39;
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* L_44 = (&__this->___rightView_9);
		XrFovf_t3605E1E8BCF3365442E0A30FDFABBA2943650F2E* L_45 = (&L_44->___fov_4);
		float L_46 = L_45->___angleUp_2;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_46);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47 = L_43;
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* L_48 = (&__this->___rightView_9);
		XrFovf_t3605E1E8BCF3365442E0A30FDFABBA2943650F2E* L_49 = (&L_48->___fov_4);
		float L_50 = L_49->___angleDown_3;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)((-L_50)));
		float L_51;
		L_51 = Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline(L_47, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), L_33, L_51, /*hidden argument*/NULL);
		// float eyeYawAngle = leftRot.y * Mathf.Deg2Rad;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_0;
		float L_54 = L_53.___y_3;
		V_1 = ((float)il2cpp_codegen_multiply(L_54, (0.0174532924f)));
		// float eyeHalfFov = halfFov.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = L_52;
		float L_56 = L_55.___x_0;
		V_2 = L_56;
		// float tanCorrectedEyeHalfFovH = Mathf.Tan(eyeYawAngle + eyeHalfFov);
		float L_57 = V_1;
		float L_58 = V_2;
		float L_59;
		L_59 = tanf(((float)il2cpp_codegen_add(L_57, L_58)));
		V_3 = L_59;
		// projectionMatrix.m00 = 1 / tanCorrectedEyeHalfFovH;  //m00 = 0.1737 for Pimax
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_60 = (&__this->___projectionMatrix_6);
		float L_61 = V_3;
		L_60->___m00_0 = ((float)((1.0f)/L_61));
		// float eyeFovLeft = -leftView.fov.angleLeft;
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* L_62 = (&__this->___leftView_8);
		XrFovf_t3605E1E8BCF3365442E0A30FDFABBA2943650F2E* L_63 = (&L_62->___fov_4);
		float L_64 = L_63->___angleLeft_0;
		V_4 = ((-L_64));
		// float tanCorrectedEyeHalfFovV = Mathf.Tan(halfFov.y) * Mathf.Cos(eyeFovLeft) / Mathf.Cos(eyeFovLeft + eyeYawAngle);
		float L_65 = L_55.___y_1;
		float L_66;
		L_66 = tanf(L_65);
		float L_67 = V_4;
		float L_68;
		L_68 = cosf(L_67);
		float L_69 = V_4;
		float L_70 = V_1;
		float L_71;
		L_71 = cosf(((float)il2cpp_codegen_add(L_69, L_70)));
		V_5 = ((float)(((float)il2cpp_codegen_multiply(L_66, L_68))/L_71));
		// projectionMatrix.m11 = 1 / tanCorrectedEyeHalfFovV;   //m11 = 0.3969 for Pimax
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_72 = (&__this->___projectionMatrix_6);
		float L_73 = V_5;
		L_72->___m11_5 = ((float)((1.0f)/L_73));
		// projectionMatrix.m22 = -(m_Camera.farClipPlane + m_Camera.nearClipPlane) / (m_Camera.farClipPlane - m_Camera.nearClipPlane);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_74 = (&__this->___projectionMatrix_6);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_75 = __this->___m_Camera_5;
		NullCheck(L_75);
		float L_76;
		L_76 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_75, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_77 = __this->___m_Camera_5;
		NullCheck(L_77);
		float L_78;
		L_78 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_77, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_79 = __this->___m_Camera_5;
		NullCheck(L_79);
		float L_80;
		L_80 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_79, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_81 = __this->___m_Camera_5;
		NullCheck(L_81);
		float L_82;
		L_82 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_81, NULL);
		L_74->___m22_10 = ((float)(((-((float)il2cpp_codegen_add(L_76, L_78))))/((float)il2cpp_codegen_subtract(L_80, L_82))));
		// projectionMatrix.m23 = -2 * m_Camera.farClipPlane * m_Camera.nearClipPlane / (m_Camera.farClipPlane - m_Camera.nearClipPlane);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_83 = (&__this->___projectionMatrix_6);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_84 = __this->___m_Camera_5;
		NullCheck(L_84);
		float L_85;
		L_85 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_84, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_86 = __this->___m_Camera_5;
		NullCheck(L_86);
		float L_87;
		L_87 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_86, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_88 = __this->___m_Camera_5;
		NullCheck(L_88);
		float L_89;
		L_89 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_88, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_90 = __this->___m_Camera_5;
		NullCheck(L_90);
		float L_91;
		L_91 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_90, NULL);
		L_83->___m23_14 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_85)), L_87))/((float)il2cpp_codegen_subtract(L_89, L_91))));
		// projectionMatrix.m32 = -1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_92 = (&__this->___projectionMatrix_6);
		L_92->___m32_11 = (-1.0f);
		goto IL_0242;
	}

IL_023b:
	{
		// isCantedFov = false;
		__this->___isCantedFov_4 = (bool)0;
	}

IL_0242:
	{
		// isInit = true;
		__this->___isInit_7 = (bool)1;
	}

IL_0249:
	{
		// }
		return;
	}
}
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFrustumAdjust_OnDisable_mA896971A1F2C3BB30D272BDCF5D0B5541294E662 (OpenXRFrustumAdjust_tBD45DFAD8F9B955C4F8D953462515C94DAB8F981* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFrustumAdjust_RenderPipelineManager_beginCameraRendering_m653DA7851D7C483C24947A51E4A60120572A43B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RenderPipelineManager.beginCameraRendering -= RenderPipelineManager_beginCameraRendering;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_0 = (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)il2cpp_codegen_object_new(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_2__ctor_mBEB5B9B513FE305CE98CA8065CC6E6CC0E5A4D51(L_0, __this, (intptr_t)((void*)OpenXRFrustumAdjust_RenderPipelineManager_beginCameraRendering_m653DA7851D7C483C24947A51E4A60120572A43B1_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_remove_beginCameraRendering_m1612AF680F9518D63562A8AC8C521A326B1C6C71(L_0, NULL);
		// if (isCantedFov)
		bool L_1 = __this->___isCantedFov_4;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// isCantedFov = false;
		__this->___isCantedFov_4 = (bool)0;
		// m_Camera.ResetCullingMatrix();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_5;
		NullCheck(L_2);
		Camera_ResetCullingMatrix_m2262DF26372BA0CCD153EB6E1A342F8D2714BFC1(L_2, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust::OnPreCull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFrustumAdjust_OnPreCull_mDAFFB6F19A07650EAA1680C0D5B3974985D562F6 (OpenXRFrustumAdjust_tBD45DFAD8F9B955C4F8D953462515C94DAB8F981* __this, const RuntimeMethod* method) 
{
	{
		// if (isCantedFov)
		bool L_0 = __this->___isCantedFov_4;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Camera.cullingMatrix = projectionMatrix * m_Camera.worldToCameraMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___m_Camera_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = __this->___projectionMatrix_6;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___m_Camera_5;
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_3, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_2, L_4, NULL);
		NullCheck(L_1);
		Camera_set_cullingMatrix_m3822BAE8953126EE9EF01E4FD9C1F5590EC1269B(L_1, L_5, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust::RenderPipelineManager_beginCameraRendering(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFrustumAdjust_RenderPipelineManager_beginCameraRendering_m653DA7851D7C483C24947A51E4A60120572A43B1 (OpenXRFrustumAdjust_tBD45DFAD8F9B955C4F8D953462515C94DAB8F981* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, const RuntimeMethod* method) 
{
	{
		// OnPreCull();
		OpenXRFrustumAdjust_OnPreCull_mDAFFB6F19A07650EAA1680C0D5B3974985D562F6(__this, NULL);
		// }
		return;
	}
}
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRFrustumAdjust::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFrustumAdjust__ctor_mB72CDFD89865E557EE8C951554D9A559D21464F4 (OpenXRFrustumAdjust_tBD45DFAD8F9B955C4F8D953462515C94DAB8F981* __this, const RuntimeMethod* method) 
{
	{
		// private Matrix4x4 projectionMatrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0;
		L_0 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
		__this->___projectionMatrix_6 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRNativeWrapper_OnInstanceCreate_m2BB2A1BABCF3AA38349E3F8F11AD554B1A1157AA (OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536* __this, uint64_t ___xrInstance0, const RuntimeMethod* method) 
{
	{
		// this.xrInstance = xrInstance;
		uint64_t L_0 = ___xrInstance0;
		__this->___xrInstance_19 = L_0;
		// return true;
		return (bool)1;
	}
}
// System.Boolean com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRNativeWrapper_Init_m4856E4F5E7D3B188711F04D46CCAEA6D9B744A21 (OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetDelegateForFunctionPointer_Tis_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A_mCF8DB2484A063371C5A87808B9AFE48D0FC61EF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetDelegateForFunctionPointer_Tis_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2_m8AFA3FDADCFAF916BDEF160B3E92C54EB424B8BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetDelegateForFunctionPointer_Tis_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4_mB1D3C793A836BF123F88BF04AEF94EAF46AFC154_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetDelegateForFunctionPointer_Tis_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC_m1ECEE62034D9A704FEC0EBB052B5E7AB2E7F7C29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68AA8D641DB5E5ADCC7FD57F669FF92A819124B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9335151B7CEF584AB8ABB1427CAAE6C58EECC04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BFA3EE5B89B5C94F45AFD340D041551A18C92F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7CCD0FD63CCE393D0EE7E98E5BA26FD0C4E309D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDA600A570A78482458216C67F6DC4B71331F67D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC42E697C6AF1065672E5961D8D319734DAD1665);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// _xrGetInstanceProcAddr = Marshal.GetDelegateForFunctionPointer<_xrGetInstanceProcFunc>(xrGetInstanceProcAddr);
		intptr_t L_0;
		L_0 = OpenXRFeature_get_xrGetInstanceProcAddr_m616F5709A63844DA12D409E8FEF4929EFA9F5B22(NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* L_1;
		L_1 = Marshal_GetDelegateForFunctionPointer_Tis_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4_mB1D3C793A836BF123F88BF04AEF94EAF46AFC154(L_0, Marshal_GetDelegateForFunctionPointer_Tis_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4_mB1D3C793A836BF123F88BF04AEF94EAF46AFC154_RuntimeMethod_var);
		__this->____xrGetInstanceProcAddr_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xrGetInstanceProcAddr_15), (void*)L_1);
		// res1 = _xrGetInstanceProcAddr(xrInstance, "xrDestroySpace", out newProcAddr);
		_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* L_2 = __this->____xrGetInstanceProcAddr_15;
		uint64_t L_3 = __this->___xrInstance_19;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = _xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9_inline(L_2, L_3, _stringLiteralCDA600A570A78482458216C67F6DC4B71331F67D, (&V_3), NULL);
		V_0 = L_4;
		// _xrDestroySpace = Marshal.GetDelegateForFunctionPointer<_xrDestroySpaceFunc>(newProcAddr);
		intptr_t L_5 = V_3;
		_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* L_6;
		L_6 = Marshal_GetDelegateForFunctionPointer_Tis_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2_m8AFA3FDADCFAF916BDEF160B3E92C54EB424B8BD(L_5, Marshal_GetDelegateForFunctionPointer_Tis_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2_m8AFA3FDADCFAF916BDEF160B3E92C54EB424B8BD_RuntimeMethod_var);
		__this->____xrDestroySpace_17 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xrDestroySpace_17), (void*)L_6);
		// res2 = _xrGetInstanceProcAddr(xrInstance, "xrCreateReferenceSpace", out newProcAddr);
		_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* L_7 = __this->____xrGetInstanceProcAddr_15;
		uint64_t L_8 = __this->___xrInstance_19;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = _xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9_inline(L_7, L_8, _stringLiteral9335151B7CEF584AB8ABB1427CAAE6C58EECC04E, (&V_3), NULL);
		V_1 = L_9;
		// _xrCreateReferenceSpace = Marshal.GetDelegateForFunctionPointer<_xrCreateReferenceSpaceFunc>(newProcAddr);
		intptr_t L_10 = V_3;
		_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* L_11;
		L_11 = Marshal_GetDelegateForFunctionPointer_Tis_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A_mCF8DB2484A063371C5A87808B9AFE48D0FC61EF2(L_10, Marshal_GetDelegateForFunctionPointer_Tis_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A_mCF8DB2484A063371C5A87808B9AFE48D0FC61EF2_RuntimeMethod_var);
		__this->____xrCreateReferenceSpace_16 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xrCreateReferenceSpace_16), (void*)L_11);
		// res3 = _xrGetInstanceProcAddr(xrInstance, "xrLocateViews", out newProcAddr);
		_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* L_12 = __this->____xrGetInstanceProcAddr_15;
		uint64_t L_13 = __this->___xrInstance_19;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = _xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9_inline(L_12, L_13, _stringLiteral68AA8D641DB5E5ADCC7FD57F669FF92A819124B6, (&V_3), NULL);
		V_2 = L_14;
		// _xrLocateViews = Marshal.GetDelegateForFunctionPointer<_xrLocateViewsFunc>(newProcAddr);
		intptr_t L_15 = V_3;
		_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* L_16;
		L_16 = Marshal_GetDelegateForFunctionPointer_Tis_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC_m1ECEE62034D9A704FEC0EBB052B5E7AB2E7F7C29(L_15, Marshal_GetDelegateForFunctionPointer_Tis_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC_m1ECEE62034D9A704FEC0EBB052B5E7AB2E7F7C29_RuntimeMethod_var);
		__this->____xrLocateViews_18 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xrLocateViews_18), (void*)L_16);
		// if( res1 != 0 ) Debug.Log("[OpenXRNativeWrapper] bad res at xrDestroySpace ret code = " + res1 );
		int32_t L_17 = V_0;
		if (!L_17)
		{
			goto IL_0098;
		}
	}
	{
		// if( res1 != 0 ) Debug.Log("[OpenXRNativeWrapper] bad res at xrDestroySpace ret code = " + res1 );
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_19;
		L_19 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC7CCD0FD63CCE393D0EE7E98E5BA26FD0C4E309D, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_19, NULL);
	}

IL_0098:
	{
		// if( res2 != 0 ) Debug.Log("[OpenXRNativeWrapper] bad res at xrCreateReferenceSpace ret code = " + res2 );
		int32_t L_20 = V_1;
		if (!L_20)
		{
			goto IL_00b1;
		}
	}
	{
		// if( res2 != 0 ) Debug.Log("[OpenXRNativeWrapper] bad res at xrCreateReferenceSpace ret code = " + res2 );
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_22;
		L_22 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9BFA3EE5B89B5C94F45AFD340D041551A18C92F2, L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_22, NULL);
	}

IL_00b1:
	{
		// if( res3 != 0 ) Debug.Log("[OpenXRNativeWrapper] bad res at xrLocateViews ret code = " + res3 );
		int32_t L_23 = V_2;
		if (!L_23)
		{
			goto IL_00ca;
		}
	}
	{
		// if( res3 != 0 ) Debug.Log("[OpenXRNativeWrapper] bad res at xrLocateViews ret code = " + res3 );
		String_t* L_24;
		L_24 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_25;
		L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralEC42E697C6AF1065672E5961D8D319734DAD1665, L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_25, NULL);
	}

IL_00ca:
	{
		// return res1 == 0 && res1 == res2 && res2 == res3;
		int32_t L_26 = V_0;
		if (L_26)
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_27 = V_0;
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		return (bool)((((int32_t)L_29) == ((int32_t)L_30))? 1 : 0);
	}

IL_00d6:
	{
		return (bool)0;
	}
}
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::OnSessionBegin(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRNativeWrapper_OnSessionBegin_m373DF50298A9311F15F899B1900B188F4FEE7A65 (OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536* __this, uint64_t ___xrSession0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral026FB578E376BD80D85CD52FA5506D49EA85F42C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2765DDF11A09C6B9B7A20FBBA984B4CD9DA09E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F26A357BB5E77B9331187AA54CA8757B72A747);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89025404683C8D83F84CF12C3CFA3FF40B793634);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6A746A95216FC196873EE5123D982E8791D71E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F361C9486B738058D5D3B0207DE17162AD53A84);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	XrPosef_tF145E66B686BE80006A0542217CE40F29BB214D7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8 V_5;
	memset((&V_5), 0, sizeof(V_5));
	XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB V_6;
	memset((&V_6), 0, sizeof(V_6));
	XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF V_7;
	memset((&V_7), 0, sizeof(V_7));
	XrPosef_tF145E66B686BE80006A0542217CE40F29BB214D7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t G_B5_0 = 0;
	{
		// if( ! Init() )
		bool L_0;
		L_0 = OpenXRNativeWrapper_Init_m4856E4F5E7D3B188711F04D46CCAEA6D9B744A21(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// HasConflict = true;
		il2cpp_codegen_runtime_class_init_inline(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var);
		((OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var))->___HasConflict_24 = (bool)1;
		// return;
		return;
	}

IL_000f:
	{
		// Debug.Log("[OpenXRNativeWrapper] Init complete" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9F361C9486B738058D5D3B0207DE17162AD53A84, NULL);
		// this.xrSession = xrSession;
		uint64_t L_1 = ___xrSession0;
		__this->___xrSession_20 = L_1;
		// XrPosef xrPose = new XrPosef { orientation = Quaternion.identity, position = Vector3.zero };
		il2cpp_codegen_initobj((&V_8), sizeof(XrPosef_tF145E66B686BE80006A0542217CE40F29BB214D7));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		(&V_8)->___orientation_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		(&V_8)->___position_1 = L_3;
		XrPosef_tF145E66B686BE80006A0542217CE40F29BB214D7 L_4 = V_8;
		V_4 = L_4;
		// XrReferenceSpaceCreateInfo createInfo = new XrReferenceSpaceCreateInfo { type = XrReferenceSpaceCreateInfo.TYPE, next = IntPtr.Zero, referenceSpaceType = 1, poseInReferenceSpace = xrPose };
		il2cpp_codegen_initobj((&V_9), sizeof(XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8));
		(&V_9)->___type_1 = ((int32_t)37);
		(&V_9)->___next_2 = (0);
		(&V_9)->___referenceSpaceType_3 = 1;
		XrPosef_tF145E66B686BE80006A0542217CE40F29BB214D7 L_5 = V_4;
		(&V_9)->___poseInReferenceSpace_4 = L_5;
		XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8 L_6 = V_9;
		V_5 = L_6;
		// r_res = _xrCreateReferenceSpace(xrSession, in createInfo, out xrSpace);
		_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* L_7 = __this->____xrCreateReferenceSpace_16;
		uint64_t L_8 = ___xrSession0;
		uint64_t* L_9 = (&__this->___xrSpace_21);
		NullCheck(L_7);
		int32_t L_10;
		L_10 = _xrCreateReferenceSpaceFunc_Invoke_m759EB0B16D6286C6630E9C1FC1F7E58F9FADA443_inline(L_7, L_8, (&V_5), L_9, NULL);
		V_1 = L_10;
		// XrViewLocateInfo viewLocateInfo = new XrViewLocateInfo { type = XrViewLocateInfo.TYPE, next = IntPtr.Zero, viewConfigurationType = 2, displayTime = 0, space = xrSpace };
		il2cpp_codegen_initobj((&V_10), sizeof(XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB));
		(&V_10)->___type_1 = 6;
		(&V_10)->___next_2 = (0);
		(&V_10)->___viewConfigurationType_3 = 2;
		(&V_10)->___displayTime_4 = ((int64_t)0);
		uint64_t L_11 = __this->___xrSpace_21;
		(&V_10)->___space_5 = L_11;
		XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB L_12 = V_10;
		V_6 = L_12;
		// v_res = _xrLocateViews(xrSession, in viewLocateInfo, out viewState, views.Length, out viewOutputN, ref views[0] );
		_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* L_13 = __this->____xrLocateViews_18;
		uint64_t L_14 = ___xrSession0;
		il2cpp_codegen_runtime_class_init_inline(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var);
		XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF* L_15 = ((OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var))->___views_23;
		NullCheck(L_15);
		XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF* L_16 = ((OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var))->___views_23;
		NullCheck(L_16);
		NullCheck(L_13);
		int32_t L_17;
		L_17 = _xrLocateViewsFunc_Invoke_m46D24074DBEC24E3B68A369BE826FA0BA9266497_inline(L_13, L_14, (&V_6), (&V_7), ((int32_t)(((RuntimeArray*)L_15)->max_length)), (&V_3), ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		V_0 = L_17;
		// isInit = (v_res == 0 && viewOutputN == 2);
		int32_t L_18 = V_0;
		if (L_18)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_19 = V_3;
		G_B5_0 = ((((int32_t)L_19) == ((int32_t)2))? 1 : 0);
		goto IL_00f8;
	}

IL_00f7:
	{
		G_B5_0 = 0;
	}

IL_00f8:
	{
		il2cpp_codegen_runtime_class_init_inline(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var);
		((OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var))->___isInit_22 = (bool)G_B5_0;
		// d_res = _xrDestroySpace(xrSpace);
		_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* L_20 = __this->____xrDestroySpace_17;
		uint64_t L_21 = __this->___xrSpace_21;
		NullCheck(L_20);
		int32_t L_22;
		L_22 = _xrDestroySpaceFunc_Invoke_m25145AE7F50B512C61E86A5BBF27C19527676A6A_inline(L_20, L_21, NULL);
		V_2 = L_22;
		// if( r_res != 0 )                      Debug.Log("[OpenXRNativeWrapper] bad res at _xrCreateReferenceSpace ret code = " + r_res );
		int32_t L_23 = V_1;
		if (!L_23)
		{
			goto IL_0128;
		}
	}
	{
		// if( r_res != 0 )                      Debug.Log("[OpenXRNativeWrapper] bad res at _xrCreateReferenceSpace ret code = " + r_res );
		String_t* L_24;
		L_24 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_25;
		L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral41F26A357BB5E77B9331187AA54CA8757B72A747, L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_25, NULL);
	}

IL_0128:
	{
		// if( v_res != 0 )                      Debug.Log("[OpenXRNativeWrapper] Can't locate views, ret code: " + v_res );
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0141;
		}
	}
	{
		// if( v_res != 0 )                      Debug.Log("[OpenXRNativeWrapper] Can't locate views, ret code: " + v_res );
		String_t* L_27;
		L_27 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_28;
		L_28 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9D6A746A95216FC196873EE5123D982E8791D71E, L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_28, NULL);
	}

IL_0141:
	{
		// if( v_res == 0 && viewOutputN != 2 )  Debug.Log("[OpenXRNativeWrapper] Wrong output N count = " + viewOutputN );
		int32_t L_29 = V_0;
		if (L_29)
		{
			goto IL_015e;
		}
	}
	{
		int32_t L_30 = V_3;
		if ((((int32_t)L_30) == ((int32_t)2)))
		{
			goto IL_015e;
		}
	}
	{
		// if( v_res == 0 && viewOutputN != 2 )  Debug.Log("[OpenXRNativeWrapper] Wrong output N count = " + viewOutputN );
		String_t* L_31;
		L_31 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_32;
		L_32 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral026FB578E376BD80D85CD52FA5506D49EA85F42C, L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_32, NULL);
	}

IL_015e:
	{
		// if( d_res != 0 )                      Debug.Log("[OpenXRNativeWrapper] Can't destroy xr space, ret code: " + d_res );
		int32_t L_33 = V_2;
		if (!L_33)
		{
			goto IL_0177;
		}
	}
	{
		// if( d_res != 0 )                      Debug.Log("[OpenXRNativeWrapper] Can't destroy xr space, ret code: " + d_res );
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_35;
		L_35 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2765DDF11A09C6B9B7A20FBBA984B4CD9DA09E01, L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_35, NULL);
	}

IL_0177:
	{
		// if( isInit )                          Debug.Log("[OpenXRNativeWrapper] Session Ready");
		il2cpp_codegen_runtime_class_init_inline(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var);
		bool L_36 = ((OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var))->___isInit_22;
		if (!L_36)
		{
			goto IL_0189;
		}
	}
	{
		// if( isInit )                          Debug.Log("[OpenXRNativeWrapper] Session Ready");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral89025404683C8D83F84CF12C3CFA3FF40B793634, NULL);
		return;
	}

IL_0189:
	{
		// else HasConflict = true;
		il2cpp_codegen_runtime_class_init_inline(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var);
		((OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var))->___HasConflict_24 = (bool)1;
		// }
		return;
	}
}
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRNativeWrapper__ctor_m2F3B3C5DC4E3C9175C56CF278F686E9549FC89AE (OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536* __this, const RuntimeMethod* method) 
{
	{
		OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852(__this, NULL);
		return;
	}
}
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRNativeWrapper__cctor_m56D1DB7CAB814DD682934D59054A9D5F53181D87 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static XrView[] views = new XrView[] { new XrView { type = XrView.TYPE }, new XrView { type = XrView.TYPE } };
		XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF* L_0 = (XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF*)(XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF*)SZArrayNew(XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF_il2cpp_TypeInfo_var, (uint32_t)2);
		XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF* L_1 = L_0;
		il2cpp_codegen_initobj((&V_0), sizeof(XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0));
		(&V_0)->___type_1 = 7;
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0 L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0)L_2);
		XrViewU5BU5D_t2A49EBA4EA66C32D73C98908ED85F344092889CF* L_3 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0));
		(&V_0)->___type_1 = 7;
		XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0 L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0)L_4);
		((OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var))->___views_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var))->___views_23), (void*)L_3);
		// public static bool HasConflict = false;
		((OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRNativeWrapper_tCF90CD2C00CFFB669BFB576DDC425E19B10EC536_il2cpp_TypeInfo_var))->___HasConflict_24 = (bool)0;
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
int32_t _xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9_Multicast(_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___addr2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* currentDelegate = reinterpret_cast<_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, String_t*, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___instance0, ___name1, ___addr2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9_Open(_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___addr2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, String_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___instance0, ___name1, ___addr2, method);
}
int32_t _xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9_OpenStaticInvoker(_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___addr2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t, String_t*, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___instance0, ___name1, ___addr2);
}
int32_t _xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9_ClosedStaticInvoker(_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___addr2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t, String_t*, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___instance0, ___name1, ___addr2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4 (_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___addr2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t, char*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___instance0, ____name1_marshaled, ___addr2);

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

	return returnValue;
}
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrGetInstanceProcFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _xrGetInstanceProcFunc__ctor_m5CF9FC04446F534A22894C8B76515FD795A0CC96 (_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9_Multicast;
}
// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrGetInstanceProcFunc::Invoke(System.UInt64,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9 (_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___addr2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, String_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___instance0, ___name1, ___addr2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrGetInstanceProcFunc::BeginInvoke(System.UInt64,System.String,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _xrGetInstanceProcFunc_BeginInvoke_mACD5029E4466F9E5A900778A91E07CDD53901313 (_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___addr2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___instance0);
	__d_args[1] = ___name1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___addr2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrGetInstanceProcFunc::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _xrGetInstanceProcFunc_EndInvoke_m0322EA24F80890C183515BD40777315C064F55A7 (_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* __this, intptr_t* ___addr0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___addr0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _xrCreateReferenceSpaceFunc_Invoke_m759EB0B16D6286C6630E9C1FC1F7E58F9FADA443_Multicast(_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* __this, uint64_t ___session0, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8* ___createInfo1, uint64_t* ___space2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* currentDelegate = reinterpret_cast<_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8*, uint64_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___session0, ___createInfo1, ___space2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _xrCreateReferenceSpaceFunc_Invoke_m759EB0B16D6286C6630E9C1FC1F7E58F9FADA443_Open(_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* __this, uint64_t ___session0, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8* ___createInfo1, uint64_t* ___space2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___session0, ___createInfo1, ___space2, method);
}
int32_t _xrCreateReferenceSpaceFunc_Invoke_m759EB0B16D6286C6630E9C1FC1F7E58F9FADA443_OpenStaticInvoker(_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* __this, uint64_t ___session0, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8* ___createInfo1, uint64_t* ___space2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8*, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___session0, ___createInfo1, ___space2);
}
int32_t _xrCreateReferenceSpaceFunc_Invoke_m759EB0B16D6286C6630E9C1FC1F7E58F9FADA443_ClosedStaticInvoker(_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* __this, uint64_t ___session0, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8* ___createInfo1, uint64_t* ___space2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8*, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___session0, ___createInfo1, ___space2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A (_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* __this, uint64_t ___session0, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8* ___createInfo1, uint64_t* ___space2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8*, uint64_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___session0, ___createInfo1, ___space2);

	return returnValue;
}
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrCreateReferenceSpaceFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _xrCreateReferenceSpaceFunc__ctor_m06BCB2E06B6327A6026F85BB66B9CF09D19D79A5 (_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_xrCreateReferenceSpaceFunc_Invoke_m759EB0B16D6286C6630E9C1FC1F7E58F9FADA443_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_xrCreateReferenceSpaceFunc_Invoke_m759EB0B16D6286C6630E9C1FC1F7E58F9FADA443_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_xrCreateReferenceSpaceFunc_Invoke_m759EB0B16D6286C6630E9C1FC1F7E58F9FADA443_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_xrCreateReferenceSpaceFunc_Invoke_m759EB0B16D6286C6630E9C1FC1F7E58F9FADA443_Multicast;
}
// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrCreateReferenceSpaceFunc::Invoke(System.UInt64,com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrReferenceSpaceCreateInfo& modreq(System.Runtime.InteropServices.InAttribute),System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _xrCreateReferenceSpaceFunc_Invoke_m759EB0B16D6286C6630E9C1FC1F7E58F9FADA443 (_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* __this, uint64_t ___session0, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8* ___createInfo1, uint64_t* ___space2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___session0, ___createInfo1, ___space2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrCreateReferenceSpaceFunc::BeginInvoke(System.UInt64,com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrReferenceSpaceCreateInfo& modreq(System.Runtime.InteropServices.InAttribute),System.UInt64&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _xrCreateReferenceSpaceFunc_BeginInvoke_m4BD9F033B0AAFE809796FE5A89FCBAE0802CCAFB (_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* __this, uint64_t ___session0, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8* ___createInfo1, uint64_t* ___space2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___session0);
	__d_args[1] = Box(XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8_il2cpp_TypeInfo_var, &*___createInfo1);
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___space2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrCreateReferenceSpaceFunc::EndInvoke(com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrReferenceSpaceCreateInfo& modreq(System.Runtime.InteropServices.InAttribute),System.UInt64&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _xrCreateReferenceSpaceFunc_EndInvoke_m0A191B0E3D32C25BC532CB9A5FE041FFDCCC8873 (_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* __this, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8* ___createInfo0, uint64_t* ___space1, RuntimeObject* ___result2, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___space1,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _xrDestroySpaceFunc_Invoke_m25145AE7F50B512C61E86A5BBF27C19527676A6A_Multicast(_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* __this, uint64_t ___space0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* currentDelegate = reinterpret_cast<_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___space0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _xrDestroySpaceFunc_Invoke_m25145AE7F50B512C61E86A5BBF27C19527676A6A_Open(_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* __this, uint64_t ___space0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___space0, method);
}
int32_t _xrDestroySpaceFunc_Invoke_m25145AE7F50B512C61E86A5BBF27C19527676A6A_OpenStaticInvoker(_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* __this, uint64_t ___space0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___space0);
}
int32_t _xrDestroySpaceFunc_Invoke_m25145AE7F50B512C61E86A5BBF27C19527676A6A_ClosedStaticInvoker(_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* __this, uint64_t ___space0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___space0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2 (_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* __this, uint64_t ___space0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___space0);

	return returnValue;
}
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrDestroySpaceFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _xrDestroySpaceFunc__ctor_mD18788A80477F87880543B9AA9EED2854BB5DCA9 (_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_xrDestroySpaceFunc_Invoke_m25145AE7F50B512C61E86A5BBF27C19527676A6A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_xrDestroySpaceFunc_Invoke_m25145AE7F50B512C61E86A5BBF27C19527676A6A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_xrDestroySpaceFunc_Invoke_m25145AE7F50B512C61E86A5BBF27C19527676A6A_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_xrDestroySpaceFunc_Invoke_m25145AE7F50B512C61E86A5BBF27C19527676A6A_Multicast;
}
// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrDestroySpaceFunc::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _xrDestroySpaceFunc_Invoke_m25145AE7F50B512C61E86A5BBF27C19527676A6A (_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* __this, uint64_t ___space0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___space0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrDestroySpaceFunc::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _xrDestroySpaceFunc_BeginInvoke_m2968F28BE23A8197AFB35D7CB3AD64E8883C2453 (_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* __this, uint64_t ___space0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___space0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrDestroySpaceFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _xrDestroySpaceFunc_EndInvoke_m70671796E1D805B88BE982664510E232B975E1EF (_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _xrLocateViewsFunc_Invoke_m46D24074DBEC24E3B68A369BE826FA0BA9266497_Multicast(_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* __this, uint64_t ___session0, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB* ___viewLocateInfo1, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF* ___viewState2, int32_t ___viewCapacityInput3, int32_t* ___viewCountOutput4, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* ___views5, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* currentDelegate = reinterpret_cast<_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB*, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF*, int32_t, int32_t*, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___session0, ___viewLocateInfo1, ___viewState2, ___viewCapacityInput3, ___viewCountOutput4, ___views5, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _xrLocateViewsFunc_Invoke_m46D24074DBEC24E3B68A369BE826FA0BA9266497_Open(_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* __this, uint64_t ___session0, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB* ___viewLocateInfo1, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF* ___viewState2, int32_t ___viewCapacityInput3, int32_t* ___viewCountOutput4, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* ___views5, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB*, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF*, int32_t, int32_t*, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___session0, ___viewLocateInfo1, ___viewState2, ___viewCapacityInput3, ___viewCountOutput4, ___views5, method);
}
int32_t _xrLocateViewsFunc_Invoke_m46D24074DBEC24E3B68A369BE826FA0BA9266497_OpenStaticInvoker(_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* __this, uint64_t ___session0, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB* ___viewLocateInfo1, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF* ___viewState2, int32_t ___viewCapacityInput3, int32_t* ___viewCountOutput4, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* ___views5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< int32_t, uint64_t, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB*, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF*, int32_t, int32_t*, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* >::Invoke(__this->___method_ptr_0, method, NULL, ___session0, ___viewLocateInfo1, ___viewState2, ___viewCapacityInput3, ___viewCountOutput4, ___views5);
}
int32_t _xrLocateViewsFunc_Invoke_m46D24074DBEC24E3B68A369BE826FA0BA9266497_ClosedStaticInvoker(_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* __this, uint64_t ___session0, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB* ___viewLocateInfo1, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF* ___viewState2, int32_t ___viewCapacityInput3, int32_t* ___viewCountOutput4, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* ___views5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< int32_t, RuntimeObject*, uint64_t, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB*, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF*, int32_t, int32_t*, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___session0, ___viewLocateInfo1, ___viewState2, ___viewCapacityInput3, ___viewCountOutput4, ___views5);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC (_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* __this, uint64_t ___session0, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB* ___viewLocateInfo1, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF* ___viewState2, int32_t ___viewCapacityInput3, int32_t* ___viewCountOutput4, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* ___views5, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB*, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF*, int32_t, int32_t*, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___session0, ___viewLocateInfo1, ___viewState2, ___viewCapacityInput3, ___viewCountOutput4, ___views5);

	return returnValue;
}
// System.Void com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrLocateViewsFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _xrLocateViewsFunc__ctor_m099FF67ADAD002FBB2AB6297D8D196EE2DF1EEC9 (_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_xrLocateViewsFunc_Invoke_m46D24074DBEC24E3B68A369BE826FA0BA9266497_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_xrLocateViewsFunc_Invoke_m46D24074DBEC24E3B68A369BE826FA0BA9266497_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_xrLocateViewsFunc_Invoke_m46D24074DBEC24E3B68A369BE826FA0BA9266497_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_xrLocateViewsFunc_Invoke_m46D24074DBEC24E3B68A369BE826FA0BA9266497_Multicast;
}
// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrLocateViewsFunc::Invoke(System.UInt64,com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewLocateInfo& modreq(System.Runtime.InteropServices.InAttribute),com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewState&,System.Int32,System.Int32&,com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _xrLocateViewsFunc_Invoke_m46D24074DBEC24E3B68A369BE826FA0BA9266497 (_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* __this, uint64_t ___session0, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB* ___viewLocateInfo1, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF* ___viewState2, int32_t ___viewCapacityInput3, int32_t* ___viewCountOutput4, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* ___views5, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB*, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF*, int32_t, int32_t*, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___session0, ___viewLocateInfo1, ___viewState2, ___viewCapacityInput3, ___viewCountOutput4, ___views5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrLocateViewsFunc::BeginInvoke(System.UInt64,com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewLocateInfo& modreq(System.Runtime.InteropServices.InAttribute),com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewState&,System.Int32,System.Int32&,com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _xrLocateViewsFunc_BeginInvoke_m3D7C0A9F2AACE02205BFFD4D8FF0875329BB8DAC (_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* __this, uint64_t ___session0, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB* ___viewLocateInfo1, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF* ___viewState2, int32_t ___viewCapacityInput3, int32_t* ___viewCountOutput4, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* ___views5, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback6, RuntimeObject* ___object7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___session0);
	__d_args[1] = Box(XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB_il2cpp_TypeInfo_var, &*___viewLocateInfo1);
	__d_args[2] = Box(XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF_il2cpp_TypeInfo_var, &*___viewState2);
	__d_args[3] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___viewCapacityInput3);
	__d_args[4] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &*___viewCountOutput4);
	__d_args[5] = Box(XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0_il2cpp_TypeInfo_var, &*___views5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// System.Int32 com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/_xrLocateViewsFunc::EndInvoke(com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewLocateInfo& modreq(System.Runtime.InteropServices.InAttribute),com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrViewState&,System.Int32&,com.koochyrat.OpenXRFrustumAdjust.OpenXRNativeWrapper/XrView&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _xrLocateViewsFunc_EndInvoke_m9DEF8179F894E1EB0E652C4024F35581766F72E3 (_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* __this, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB* ___viewLocateInfo0, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF* ___viewState1, int32_t* ___viewCountOutput2, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* ___views3, RuntimeObject* ___result4, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___viewState1,
	___viewCountOutput2,
	___views3,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result4, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___values0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) > ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___values0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _xrGetInstanceProcFunc_Invoke_m0C6504F6CF232BC7B67B0A8BA1545735685236A9_inline (_xrGetInstanceProcFunc_tFBCF898650BA5E3F7F2DCC6493F6FE2ABEE777B4* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___addr2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, String_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___instance0, ___name1, ___addr2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _xrCreateReferenceSpaceFunc_Invoke_m759EB0B16D6286C6630E9C1FC1F7E58F9FADA443_inline (_xrCreateReferenceSpaceFunc_t37A3FA08F79716BA058DA545C5246A456555B75A* __this, uint64_t ___session0, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8* ___createInfo1, uint64_t* ___space2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrReferenceSpaceCreateInfo_tBBCA9E39DA549AEFFC5C9407EA3A0FB59EE44FE8*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___session0, ___createInfo1, ___space2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _xrLocateViewsFunc_Invoke_m46D24074DBEC24E3B68A369BE826FA0BA9266497_inline (_xrLocateViewsFunc_tB50991E4B072508DA50383B553215BEA3E0D67FC* __this, uint64_t ___session0, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB* ___viewLocateInfo1, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF* ___viewState2, int32_t ___viewCapacityInput3, int32_t* ___viewCountOutput4, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0* ___views5, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrViewLocateInfo_t794856F5879BF022868ACA6EEFB9177F5DC5FFFB*, XrViewState_t0D7D5F250172D8C0E143635CA7F010F9A6CCFBFF*, int32_t, int32_t*, XrView_t090576EADF875E4F7335C8A894FBAB7D43C001F0*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___session0, ___viewLocateInfo1, ___viewState2, ___viewCapacityInput3, ___viewCountOutput4, ___views5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _xrDestroySpaceFunc_Invoke_m25145AE7F50B512C61E86A5BBF27C19527676A6A_inline (_xrDestroySpaceFunc_tF05FE2339A7AB208A90DC6687E2FC6CDA43D3FC2* __this, uint64_t ___space0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___space0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
