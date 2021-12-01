#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// Pathfinding.Ionic.Zlib.DeflateManager/Config[]
struct ConfigU5BU5D_tA9AE536A92C9A0005D7F15D8390061A901FEE50F;
// Pathfinding.Ionic.Zip.AddProgressEventArgs
struct AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Pathfinding.Ionic.Zip.BadCrcException
struct BadCrcException_t0D22C7711389274B7E523CD05751C94751048F24;
// Pathfinding.Ionic.Zip.BadPasswordException
struct BadPasswordException_t144E72EEB37B9C4FB1AAA9ECBF6E8A145F71C960;
// Pathfinding.Ionic.Zip.BadReadException
struct BadReadException_t0071DB16D260B1C7EE8CE63483D2B985E0369038;
// Pathfinding.Ionic.Zip.BadStateException
struct BadStateException_tEA711E725F0B46CBC5EDC38F6FF00DDC39925434;
// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C;
// Pathfinding.Ionic.Zip.CloseDelegate
struct CloseDelegate_t197F69FB43210433EE489E0E6040E388F16FD992;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// Pathfinding.Ionic.Zip.CountingStream
struct CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF;
// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// Pathfinding.Ionic.Zlib.DeflateManager
struct DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF;
// Pathfinding.Ionic.Zlib.DeflateStream
struct DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// Pathfinding.Ionic.Zip.ExtractProgressEventArgs
struct ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C;
// Pathfinding.Ionic.Zlib.GZipStream
struct GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Pathfinding.Ionic.Zlib.InfTree
struct InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF;
// Pathfinding.Ionic.Zlib.InflateBlocks
struct InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB;
// Pathfinding.Ionic.Zlib.InflateCodes
struct InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD;
// Pathfinding.Ionic.Zlib.InflateManager
struct InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// Pathfinding.Ionic.Zip.OpenDelegate
struct OpenDelegate_t4FD73AF931B565F95888C2D3FE60F83302DC0B3E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01;
// Pathfinding.Ionic.Zlib.StaticTree
struct StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// Pathfinding.Ionic.Zlib.Tree
struct Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Pathfinding.Ionic.Zip.WriteDelegate
struct WriteDelegate_t677A3857696D3DC5B0EEA8FF57EFE7BC77C9F724;
// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_t7F1BF50F08858ADF2C7979A2BE953EB09EBC4E41;
// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t788C8ABE5C64BB7812E5905890E8F18907D46961;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D;
// Pathfinding.Ionic.Zip.ZipException
struct ZipException_t556A13023BFC2A9CF345731D3D7FACFC435B960F;
// Pathfinding.Ionic.Zip.ZipProgressEventArgs
struct ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861;
// Pathfinding.Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27;
// Pathfinding.Ionic.Zlib.ZlibException
struct ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58;
// Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc
struct CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E;
// Pathfinding.Ionic.Zlib.DeflateManager/Config
struct Config_tC68F920487AC05FF8321319B93D3B73EEF943750;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Config_tC68F920487AC05FF8321319B93D3B73EEF943750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D5_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D6_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D7_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D8_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D9_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2DA_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2DB_7_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0659AF070440111C5138C5C2CF237FE1D199797C;
IL2CPP_EXTERN_C String_t* _stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40;
IL2CPP_EXTERN_C String_t* _stringLiteral098F0638BDC57D742FE5CA5D04E3A6767104F5B2;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral10970F72C2D0D7F199946EF78672994F037BA021;
IL2CPP_EXTERN_C String_t* _stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94;
IL2CPP_EXTERN_C String_t* _stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43;
IL2CPP_EXTERN_C String_t* _stringLiteral31F5FB1C38A44C5FB3A50E292D89F851681E4A86;
IL2CPP_EXTERN_C String_t* _stringLiteral31FF32DD49EB95324AC3BBB26903BDBBB3D9DE53;
IL2CPP_EXTERN_C String_t* _stringLiteral3301E1AE1BCA5C134551471AB287F2443E658618;
IL2CPP_EXTERN_C String_t* _stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384;
IL2CPP_EXTERN_C String_t* _stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D;
IL2CPP_EXTERN_C String_t* _stringLiteral4DE4583466E161AC08D14AD37D8B70B8580B3627;
IL2CPP_EXTERN_C String_t* _stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0;
IL2CPP_EXTERN_C String_t* _stringLiteral540BFF2B585F6DE7F5AA022B07C05975323EFD0E;
IL2CPP_EXTERN_C String_t* _stringLiteral5882879161B7C9D56B5A1120EF8EF366916857FF;
IL2CPP_EXTERN_C String_t* _stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE;
IL2CPP_EXTERN_C String_t* _stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766;
IL2CPP_EXTERN_C String_t* _stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6;
IL2CPP_EXTERN_C String_t* _stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417;
IL2CPP_EXTERN_C String_t* _stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8;
IL2CPP_EXTERN_C String_t* _stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5;
IL2CPP_EXTERN_C String_t* _stringLiteral7897EC9A2D8A7F35E69F42F0A932E1E9320CB2DA;
IL2CPP_EXTERN_C String_t* _stringLiteral796754270F9B2AB25ACA5093B84CF8EAF55BA1AE;
IL2CPP_EXTERN_C String_t* _stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4;
IL2CPP_EXTERN_C String_t* _stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16;
IL2CPP_EXTERN_C String_t* _stringLiteral988F3366E12D654A4876B3640459880EFD9315D1;
IL2CPP_EXTERN_C String_t* _stringLiteral9A538D87C765D16B9229A517D7D588C30AF3D5AE;
IL2CPP_EXTERN_C String_t* _stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06;
IL2CPP_EXTERN_C String_t* _stringLiteral9FC4F45EF48BB08BC4D6C5BC2A71B64139E0FEE4;
IL2CPP_EXTERN_C String_t* _stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB6E4583683A19BA1CBC201CAD5FFABF027A5B94A;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948;
IL2CPP_EXTERN_C String_t* _stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113;
IL2CPP_EXTERN_C String_t* _stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E;
IL2CPP_EXTERN_C String_t* _stringLiteralD94DFA59855436FE4E964729609DFFE5BDFF64A0;
IL2CPP_EXTERN_C String_t* _stringLiteralE577106AF74D4E432DDB4785DA3B2BE486F67838;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4;
IL2CPP_EXTERN_C String_t* _stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0;
IL2CPP_EXTERN_C String_t* _stringLiteralF4950B3758A114DEB554BDFD7BE0362389271888;
IL2CPP_EXTERN_C const RuntimeMethod* CRC32_GetCrc32AndCopy_mE59DCE5DA155878951536A398C7F96A5A9F5B0EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CRC32_SlurpBlock_mB193D4D19FA19A265050E35AF1503FE420F9F841_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CountingStream_Adjust_m32D38833594F06256EA99DC32B437BEC51F12659_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrcCalculatorStream_Seek_m5C4E467B2300DBD522B7BD63AE01C70436B5AB4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrcCalculatorStream_SetLength_m911646958C80BEDB29B4B72554D0EB597A0BB2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrcCalculatorStream__ctor_m8F6367DBA649F67D99E209E347CFA48E4065B3B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrcCalculatorStream_set_Position_m43CB45E8A50E2E8E1DF5172203F4B3FB4ABB3173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_DeflateFast_m581DC29E70B25483D32715B437E9C78645F13A88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_DeflateNone_m4ADD4D81644AB170760CD10278CB7AB755FE30DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_DeflateSlow_mBDE310D1679649CCDA75FC4265B29F8C03A58137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_Deflate_m7AE6047796DA4D2D682E871641C784B932406E2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_Initialize_mCC58D9403AA146B374F74CC47BB42D11109281F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Flush_m383897913A2F5C2FEDB967C25ED6AE20B9687C81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Read_m34B5CA2E2A76E35CEEC5C4BD000564B05A3CDE84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Seek_m00F1AD98D01048CB9089A2942915D69C0A4B19C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_SetLength_m770CCC9600C21228DD24DFC88EC15C6A5BD03752_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Write_m20796F10EA31CA767E5CB938E6BCEA62C66AD9C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_CanRead_mC50338B3882D1143A33C12F073EB04E0F8EED951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_CanWrite_m639184A38EF770267272BB304D2B227574347617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Length_m81952064A6E67B5DF1DE811CAE7908F43F10E23B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_BufferSize_mBFE4A583A9CF6781BC043FDA31691B401392F6FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Position_m05FCE777B02D2CAD223BFC7CDF62AD143BA39962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Strategy_mEC54F37788973D6B9E2FC0B2DB6AE6DE3CE2CAED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Flush_m38A859489B8A7689795C215D087D93DBAE2807A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Read_m620416245929A9DC7C9BAC61200BFD0292FC5477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Seek_m1EE10B8AC98F52423C5F27D52A21D370801CC470_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_SetLength_m2EDEF961754C706AD959AE4893928801DDE92D45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Write_mF61D298E2F37945196DE23D33B26A34E994130D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_CanRead_m9A0436364A7B476355E605476E7C7B485FEEE0F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_CanWrite_mF9B02A9B6FD41BCF6DA6755BF522C0DC51A0DBA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Length_m2EF07CFF61C76C77107C0700D028667CBB7DFDE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_Comment_m8B41963F317D29651C733C1BE6981A0FCBA7994D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_FileName_mF7F67442CFAF08D147006A6A9A944FB3ACBC73E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_Position_m84D7558360EB5D90039606D3812C33E65E447609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflateManager_Inflate_mB5DF4C3E1ACF1B475A4C22F51A92C133B8DABFC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflateManager_Initialize_m52A306A9BB15601ED56BCC4425CF3A63BAFC5B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t958DEF4290EB984279C6462F699239BFA77C73B6 
{
public:

public:
};


// System.Object


// Pathfinding.Ionic.Zlib.Adler
struct Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985  : public RuntimeObject
{
public:

public:
};

struct Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_StaticFields
{
public:
	// System.UInt32 Pathfinding.Ionic.Zlib.Adler::BASE
	uint32_t ___BASE_0;
	// System.Int32 Pathfinding.Ionic.Zlib.Adler::NMAX
	int32_t ___NMAX_1;

public:
	inline static int32_t get_offset_of_BASE_0() { return static_cast<int32_t>(offsetof(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_StaticFields, ___BASE_0)); }
	inline uint32_t get_BASE_0() const { return ___BASE_0; }
	inline uint32_t* get_address_of_BASE_0() { return &___BASE_0; }
	inline void set_BASE_0(uint32_t value)
	{
		___BASE_0 = value;
	}

	inline static int32_t get_offset_of_NMAX_1() { return static_cast<int32_t>(offsetof(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_StaticFields, ___NMAX_1)); }
	inline int32_t get_NMAX_1() const { return ___NMAX_1; }
	inline int32_t* get_address_of_NMAX_1() { return &___NMAX_1; }
	inline void set_NMAX_1(int32_t value)
	{
		___NMAX_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.UInt32 Pathfinding.Ionic.Crc.CRC32::dwPolynomial
	uint32_t ___dwPolynomial_0;
	// System.Int64 Pathfinding.Ionic.Crc.CRC32::_TotalBytesRead
	int64_t ____TotalBytesRead_1;
	// System.Boolean Pathfinding.Ionic.Crc.CRC32::reverseBits
	bool ___reverseBits_2;
	// System.UInt32[] Pathfinding.Ionic.Crc.CRC32::crc32Table
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___crc32Table_3;
	// System.UInt32 Pathfinding.Ionic.Crc.CRC32::_register
	uint32_t ____register_4;

public:
	inline static int32_t get_offset_of_dwPolynomial_0() { return static_cast<int32_t>(offsetof(CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C, ___dwPolynomial_0)); }
	inline uint32_t get_dwPolynomial_0() const { return ___dwPolynomial_0; }
	inline uint32_t* get_address_of_dwPolynomial_0() { return &___dwPolynomial_0; }
	inline void set_dwPolynomial_0(uint32_t value)
	{
		___dwPolynomial_0 = value;
	}

	inline static int32_t get_offset_of__TotalBytesRead_1() { return static_cast<int32_t>(offsetof(CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C, ____TotalBytesRead_1)); }
	inline int64_t get__TotalBytesRead_1() const { return ____TotalBytesRead_1; }
	inline int64_t* get_address_of__TotalBytesRead_1() { return &____TotalBytesRead_1; }
	inline void set__TotalBytesRead_1(int64_t value)
	{
		____TotalBytesRead_1 = value;
	}

	inline static int32_t get_offset_of_reverseBits_2() { return static_cast<int32_t>(offsetof(CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C, ___reverseBits_2)); }
	inline bool get_reverseBits_2() const { return ___reverseBits_2; }
	inline bool* get_address_of_reverseBits_2() { return &___reverseBits_2; }
	inline void set_reverseBits_2(bool value)
	{
		___reverseBits_2 = value;
	}

	inline static int32_t get_offset_of_crc32Table_3() { return static_cast<int32_t>(offsetof(CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C, ___crc32Table_3)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_crc32Table_3() const { return ___crc32Table_3; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_crc32Table_3() { return &___crc32Table_3; }
	inline void set_crc32Table_3(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___crc32Table_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crc32Table_3), (void*)value);
	}

	inline static int32_t get_offset_of__register_4() { return static_cast<int32_t>(offsetof(CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C, ____register_4)); }
	inline uint32_t get__register_4() const { return ____register_4; }
	inline uint32_t* get_address_of__register_4() { return &____register_4; }
	inline void set__register_4(uint32_t value)
	{
		____register_4 = value;
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Pathfinding.Ionic.Zlib.InfTree
struct InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF  : public RuntimeObject
{
public:
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::hn
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hn_6;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::v
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___v_7;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::c
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c_8;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::r
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___r_9;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::u
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___u_10;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::x
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___x_11;

public:
	inline static int32_t get_offset_of_hn_6() { return static_cast<int32_t>(offsetof(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF, ___hn_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_hn_6() const { return ___hn_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_hn_6() { return &___hn_6; }
	inline void set_hn_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___hn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hn_6), (void*)value);
	}

	inline static int32_t get_offset_of_v_7() { return static_cast<int32_t>(offsetof(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF, ___v_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_v_7() const { return ___v_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_v_7() { return &___v_7; }
	inline void set_v_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___v_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___v_7), (void*)value);
	}

	inline static int32_t get_offset_of_c_8() { return static_cast<int32_t>(offsetof(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF, ___c_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_c_8() const { return ___c_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_c_8() { return &___c_8; }
	inline void set_c_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___c_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_8), (void*)value);
	}

	inline static int32_t get_offset_of_r_9() { return static_cast<int32_t>(offsetof(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF, ___r_9)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_r_9() const { return ___r_9; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_r_9() { return &___r_9; }
	inline void set_r_9(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___r_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___r_9), (void*)value);
	}

	inline static int32_t get_offset_of_u_10() { return static_cast<int32_t>(offsetof(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF, ___u_10)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_u_10() const { return ___u_10; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_u_10() { return &___u_10; }
	inline void set_u_10(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___u_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___u_10), (void*)value);
	}

	inline static int32_t get_offset_of_x_11() { return static_cast<int32_t>(offsetof(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF, ___x_11)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_x_11() const { return ___x_11; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_x_11() { return &___x_11; }
	inline void set_x_11(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___x_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_11), (void*)value);
	}
};

struct InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields
{
public:
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::fixed_tl
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___fixed_tl_0;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::fixed_td
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___fixed_td_1;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::cplens
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cplens_2;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::cplext
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cplext_3;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::cpdist
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cpdist_4;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::cpdext
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cpdext_5;

public:
	inline static int32_t get_offset_of_fixed_tl_0() { return static_cast<int32_t>(offsetof(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields, ___fixed_tl_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_fixed_tl_0() const { return ___fixed_tl_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_fixed_tl_0() { return &___fixed_tl_0; }
	inline void set_fixed_tl_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___fixed_tl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixed_tl_0), (void*)value);
	}

	inline static int32_t get_offset_of_fixed_td_1() { return static_cast<int32_t>(offsetof(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields, ___fixed_td_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_fixed_td_1() const { return ___fixed_td_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_fixed_td_1() { return &___fixed_td_1; }
	inline void set_fixed_td_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___fixed_td_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixed_td_1), (void*)value);
	}

	inline static int32_t get_offset_of_cplens_2() { return static_cast<int32_t>(offsetof(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields, ___cplens_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cplens_2() const { return ___cplens_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cplens_2() { return &___cplens_2; }
	inline void set_cplens_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cplens_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cplens_2), (void*)value);
	}

	inline static int32_t get_offset_of_cplext_3() { return static_cast<int32_t>(offsetof(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields, ___cplext_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cplext_3() const { return ___cplext_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cplext_3() { return &___cplext_3; }
	inline void set_cplext_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cplext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cplext_3), (void*)value);
	}

	inline static int32_t get_offset_of_cpdist_4() { return static_cast<int32_t>(offsetof(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields, ___cpdist_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cpdist_4() const { return ___cpdist_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cpdist_4() { return &___cpdist_4; }
	inline void set_cpdist_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cpdist_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpdist_4), (void*)value);
	}

	inline static int32_t get_offset_of_cpdext_5() { return static_cast<int32_t>(offsetof(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields, ___cpdext_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cpdext_5() const { return ___cpdext_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cpdext_5() { return &___cpdext_5; }
	inline void set_cpdext_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cpdext_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpdext_5), (void*)value);
	}
};


// Pathfinding.Ionic.Zlib.InflateCodes
struct InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD  : public RuntimeObject
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::mode
	int32_t ___mode_0;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::len
	int32_t ___len_1;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateCodes::tree
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tree_2;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::tree_index
	int32_t ___tree_index_3;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::need
	int32_t ___need_4;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::lit
	int32_t ___lit_5;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::bitsToGet
	int32_t ___bitsToGet_6;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::dist
	int32_t ___dist_7;
	// System.Byte Pathfinding.Ionic.Zlib.InflateCodes::lbits
	uint8_t ___lbits_8;
	// System.Byte Pathfinding.Ionic.Zlib.InflateCodes::dbits
	uint8_t ___dbits_9;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateCodes::ltree
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ltree_10;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::ltree_index
	int32_t ___ltree_index_11;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateCodes::dtree
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___dtree_12;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::dtree_index
	int32_t ___dtree_index_13;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_len_1() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___len_1)); }
	inline int32_t get_len_1() const { return ___len_1; }
	inline int32_t* get_address_of_len_1() { return &___len_1; }
	inline void set_len_1(int32_t value)
	{
		___len_1 = value;
	}

	inline static int32_t get_offset_of_tree_2() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___tree_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_tree_2() const { return ___tree_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_tree_2() { return &___tree_2; }
	inline void set_tree_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___tree_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tree_2), (void*)value);
	}

	inline static int32_t get_offset_of_tree_index_3() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___tree_index_3)); }
	inline int32_t get_tree_index_3() const { return ___tree_index_3; }
	inline int32_t* get_address_of_tree_index_3() { return &___tree_index_3; }
	inline void set_tree_index_3(int32_t value)
	{
		___tree_index_3 = value;
	}

	inline static int32_t get_offset_of_need_4() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___need_4)); }
	inline int32_t get_need_4() const { return ___need_4; }
	inline int32_t* get_address_of_need_4() { return &___need_4; }
	inline void set_need_4(int32_t value)
	{
		___need_4 = value;
	}

	inline static int32_t get_offset_of_lit_5() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___lit_5)); }
	inline int32_t get_lit_5() const { return ___lit_5; }
	inline int32_t* get_address_of_lit_5() { return &___lit_5; }
	inline void set_lit_5(int32_t value)
	{
		___lit_5 = value;
	}

	inline static int32_t get_offset_of_bitsToGet_6() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___bitsToGet_6)); }
	inline int32_t get_bitsToGet_6() const { return ___bitsToGet_6; }
	inline int32_t* get_address_of_bitsToGet_6() { return &___bitsToGet_6; }
	inline void set_bitsToGet_6(int32_t value)
	{
		___bitsToGet_6 = value;
	}

	inline static int32_t get_offset_of_dist_7() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___dist_7)); }
	inline int32_t get_dist_7() const { return ___dist_7; }
	inline int32_t* get_address_of_dist_7() { return &___dist_7; }
	inline void set_dist_7(int32_t value)
	{
		___dist_7 = value;
	}

	inline static int32_t get_offset_of_lbits_8() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___lbits_8)); }
	inline uint8_t get_lbits_8() const { return ___lbits_8; }
	inline uint8_t* get_address_of_lbits_8() { return &___lbits_8; }
	inline void set_lbits_8(uint8_t value)
	{
		___lbits_8 = value;
	}

	inline static int32_t get_offset_of_dbits_9() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___dbits_9)); }
	inline uint8_t get_dbits_9() const { return ___dbits_9; }
	inline uint8_t* get_address_of_dbits_9() { return &___dbits_9; }
	inline void set_dbits_9(uint8_t value)
	{
		___dbits_9 = value;
	}

	inline static int32_t get_offset_of_ltree_10() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___ltree_10)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ltree_10() const { return ___ltree_10; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ltree_10() { return &___ltree_10; }
	inline void set_ltree_10(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ltree_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ltree_10), (void*)value);
	}

	inline static int32_t get_offset_of_ltree_index_11() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___ltree_index_11)); }
	inline int32_t get_ltree_index_11() const { return ___ltree_index_11; }
	inline int32_t* get_address_of_ltree_index_11() { return &___ltree_index_11; }
	inline void set_ltree_index_11(int32_t value)
	{
		___ltree_index_11 = value;
	}

	inline static int32_t get_offset_of_dtree_12() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___dtree_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_dtree_12() const { return ___dtree_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_dtree_12() { return &___dtree_12; }
	inline void set_dtree_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___dtree_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dtree_12), (void*)value);
	}

	inline static int32_t get_offset_of_dtree_index_13() { return static_cast<int32_t>(offsetof(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD, ___dtree_index_13)); }
	inline int32_t get_dtree_index_13() const { return ___dtree_index_13; }
	inline int32_t* get_address_of_dtree_index_13() { return &___dtree_index_13; }
	inline void set_dtree_index_13(int32_t value)
	{
		___dtree_index_13 = value;
	}
};


// Pathfinding.Ionic.Zlib.InternalConstants
struct InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D  : public RuntimeObject
{
public:

public:
};

struct InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::MAX_BITS
	int32_t ___MAX_BITS_0;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::BL_CODES
	int32_t ___BL_CODES_1;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::D_CODES
	int32_t ___D_CODES_2;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::LITERALS
	int32_t ___LITERALS_3;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::LENGTH_CODES
	int32_t ___LENGTH_CODES_4;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::L_CODES
	int32_t ___L_CODES_5;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::MAX_BL_BITS
	int32_t ___MAX_BL_BITS_6;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::REP_3_6
	int32_t ___REP_3_6_7;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::REPZ_3_10
	int32_t ___REPZ_3_10_8;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::REPZ_11_138
	int32_t ___REPZ_11_138_9;

public:
	inline static int32_t get_offset_of_MAX_BITS_0() { return static_cast<int32_t>(offsetof(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields, ___MAX_BITS_0)); }
	inline int32_t get_MAX_BITS_0() const { return ___MAX_BITS_0; }
	inline int32_t* get_address_of_MAX_BITS_0() { return &___MAX_BITS_0; }
	inline void set_MAX_BITS_0(int32_t value)
	{
		___MAX_BITS_0 = value;
	}

	inline static int32_t get_offset_of_BL_CODES_1() { return static_cast<int32_t>(offsetof(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields, ___BL_CODES_1)); }
	inline int32_t get_BL_CODES_1() const { return ___BL_CODES_1; }
	inline int32_t* get_address_of_BL_CODES_1() { return &___BL_CODES_1; }
	inline void set_BL_CODES_1(int32_t value)
	{
		___BL_CODES_1 = value;
	}

	inline static int32_t get_offset_of_D_CODES_2() { return static_cast<int32_t>(offsetof(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields, ___D_CODES_2)); }
	inline int32_t get_D_CODES_2() const { return ___D_CODES_2; }
	inline int32_t* get_address_of_D_CODES_2() { return &___D_CODES_2; }
	inline void set_D_CODES_2(int32_t value)
	{
		___D_CODES_2 = value;
	}

	inline static int32_t get_offset_of_LITERALS_3() { return static_cast<int32_t>(offsetof(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields, ___LITERALS_3)); }
	inline int32_t get_LITERALS_3() const { return ___LITERALS_3; }
	inline int32_t* get_address_of_LITERALS_3() { return &___LITERALS_3; }
	inline void set_LITERALS_3(int32_t value)
	{
		___LITERALS_3 = value;
	}

	inline static int32_t get_offset_of_LENGTH_CODES_4() { return static_cast<int32_t>(offsetof(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields, ___LENGTH_CODES_4)); }
	inline int32_t get_LENGTH_CODES_4() const { return ___LENGTH_CODES_4; }
	inline int32_t* get_address_of_LENGTH_CODES_4() { return &___LENGTH_CODES_4; }
	inline void set_LENGTH_CODES_4(int32_t value)
	{
		___LENGTH_CODES_4 = value;
	}

	inline static int32_t get_offset_of_L_CODES_5() { return static_cast<int32_t>(offsetof(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields, ___L_CODES_5)); }
	inline int32_t get_L_CODES_5() const { return ___L_CODES_5; }
	inline int32_t* get_address_of_L_CODES_5() { return &___L_CODES_5; }
	inline void set_L_CODES_5(int32_t value)
	{
		___L_CODES_5 = value;
	}

	inline static int32_t get_offset_of_MAX_BL_BITS_6() { return static_cast<int32_t>(offsetof(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields, ___MAX_BL_BITS_6)); }
	inline int32_t get_MAX_BL_BITS_6() const { return ___MAX_BL_BITS_6; }
	inline int32_t* get_address_of_MAX_BL_BITS_6() { return &___MAX_BL_BITS_6; }
	inline void set_MAX_BL_BITS_6(int32_t value)
	{
		___MAX_BL_BITS_6 = value;
	}

	inline static int32_t get_offset_of_REP_3_6_7() { return static_cast<int32_t>(offsetof(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields, ___REP_3_6_7)); }
	inline int32_t get_REP_3_6_7() const { return ___REP_3_6_7; }
	inline int32_t* get_address_of_REP_3_6_7() { return &___REP_3_6_7; }
	inline void set_REP_3_6_7(int32_t value)
	{
		___REP_3_6_7 = value;
	}

	inline static int32_t get_offset_of_REPZ_3_10_8() { return static_cast<int32_t>(offsetof(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields, ___REPZ_3_10_8)); }
	inline int32_t get_REPZ_3_10_8() const { return ___REPZ_3_10_8; }
	inline int32_t* get_address_of_REPZ_3_10_8() { return &___REPZ_3_10_8; }
	inline void set_REPZ_3_10_8(int32_t value)
	{
		___REPZ_3_10_8 = value;
	}

	inline static int32_t get_offset_of_REPZ_11_138_9() { return static_cast<int32_t>(offsetof(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields, ___REPZ_11_138_9)); }
	inline int32_t get_REPZ_11_138_9() const { return ___REPZ_11_138_9; }
	inline int32_t* get_address_of_REPZ_11_138_9() { return &___REPZ_11_138_9; }
	inline void set_REPZ_11_138_9(int32_t value)
	{
		___REPZ_11_138_9 = value;
	}
};


// Pathfinding.Ionic.Zlib.InternalInflateConstants
struct InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6  : public RuntimeObject
{
public:

public:
};

struct InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields
{
public:
	// System.Int32[] Pathfinding.Ionic.Zlib.InternalInflateConstants::InflateMask
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___InflateMask_0;

public:
	inline static int32_t get_offset_of_InflateMask_0() { return static_cast<int32_t>(offsetof(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields, ___InflateMask_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_InflateMask_0() const { return ___InflateMask_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_InflateMask_0() { return &___InflateMask_0; }
	inline void set_InflateMask_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___InflateMask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InflateMask_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
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

// Pathfinding.Ionic.Zlib.StaticTree
struct StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84  : public RuntimeObject
{
public:
	// System.Int16[] Pathfinding.Ionic.Zlib.StaticTree::treeCodes
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___treeCodes_5;
	// System.Int32[] Pathfinding.Ionic.Zlib.StaticTree::extraBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___extraBits_6;
	// System.Int32 Pathfinding.Ionic.Zlib.StaticTree::extraBase
	int32_t ___extraBase_7;
	// System.Int32 Pathfinding.Ionic.Zlib.StaticTree::elems
	int32_t ___elems_8;
	// System.Int32 Pathfinding.Ionic.Zlib.StaticTree::maxLength
	int32_t ___maxLength_9;

public:
	inline static int32_t get_offset_of_treeCodes_5() { return static_cast<int32_t>(offsetof(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84, ___treeCodes_5)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_treeCodes_5() const { return ___treeCodes_5; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_treeCodes_5() { return &___treeCodes_5; }
	inline void set_treeCodes_5(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___treeCodes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeCodes_5), (void*)value);
	}

	inline static int32_t get_offset_of_extraBits_6() { return static_cast<int32_t>(offsetof(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84, ___extraBits_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_extraBits_6() const { return ___extraBits_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_extraBits_6() { return &___extraBits_6; }
	inline void set_extraBits_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___extraBits_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extraBits_6), (void*)value);
	}

	inline static int32_t get_offset_of_extraBase_7() { return static_cast<int32_t>(offsetof(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84, ___extraBase_7)); }
	inline int32_t get_extraBase_7() const { return ___extraBase_7; }
	inline int32_t* get_address_of_extraBase_7() { return &___extraBase_7; }
	inline void set_extraBase_7(int32_t value)
	{
		___extraBase_7 = value;
	}

	inline static int32_t get_offset_of_elems_8() { return static_cast<int32_t>(offsetof(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84, ___elems_8)); }
	inline int32_t get_elems_8() const { return ___elems_8; }
	inline int32_t* get_address_of_elems_8() { return &___elems_8; }
	inline void set_elems_8(int32_t value)
	{
		___elems_8 = value;
	}

	inline static int32_t get_offset_of_maxLength_9() { return static_cast<int32_t>(offsetof(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84, ___maxLength_9)); }
	inline int32_t get_maxLength_9() const { return ___maxLength_9; }
	inline int32_t* get_address_of_maxLength_9() { return &___maxLength_9; }
	inline void set_maxLength_9(int32_t value)
	{
		___maxLength_9 = value;
	}
};

struct StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_StaticFields
{
public:
	// System.Int16[] Pathfinding.Ionic.Zlib.StaticTree::lengthAndLiteralsTreeCodes
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___lengthAndLiteralsTreeCodes_0;
	// System.Int16[] Pathfinding.Ionic.Zlib.StaticTree::distTreeCodes
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___distTreeCodes_1;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.StaticTree::Literals
	StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * ___Literals_2;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.StaticTree::Distances
	StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * ___Distances_3;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.StaticTree::BitLengths
	StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * ___BitLengths_4;

public:
	inline static int32_t get_offset_of_lengthAndLiteralsTreeCodes_0() { return static_cast<int32_t>(offsetof(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_StaticFields, ___lengthAndLiteralsTreeCodes_0)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_lengthAndLiteralsTreeCodes_0() const { return ___lengthAndLiteralsTreeCodes_0; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_lengthAndLiteralsTreeCodes_0() { return &___lengthAndLiteralsTreeCodes_0; }
	inline void set_lengthAndLiteralsTreeCodes_0(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___lengthAndLiteralsTreeCodes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lengthAndLiteralsTreeCodes_0), (void*)value);
	}

	inline static int32_t get_offset_of_distTreeCodes_1() { return static_cast<int32_t>(offsetof(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_StaticFields, ___distTreeCodes_1)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_distTreeCodes_1() const { return ___distTreeCodes_1; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_distTreeCodes_1() { return &___distTreeCodes_1; }
	inline void set_distTreeCodes_1(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___distTreeCodes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___distTreeCodes_1), (void*)value);
	}

	inline static int32_t get_offset_of_Literals_2() { return static_cast<int32_t>(offsetof(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_StaticFields, ___Literals_2)); }
	inline StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * get_Literals_2() const { return ___Literals_2; }
	inline StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 ** get_address_of_Literals_2() { return &___Literals_2; }
	inline void set_Literals_2(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * value)
	{
		___Literals_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Literals_2), (void*)value);
	}

	inline static int32_t get_offset_of_Distances_3() { return static_cast<int32_t>(offsetof(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_StaticFields, ___Distances_3)); }
	inline StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * get_Distances_3() const { return ___Distances_3; }
	inline StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 ** get_address_of_Distances_3() { return &___Distances_3; }
	inline void set_Distances_3(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * value)
	{
		___Distances_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Distances_3), (void*)value);
	}

	inline static int32_t get_offset_of_BitLengths_4() { return static_cast<int32_t>(offsetof(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_StaticFields, ___BitLengths_4)); }
	inline StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * get_BitLengths_4() const { return ___BitLengths_4; }
	inline StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 ** get_address_of_BitLengths_4() { return &___BitLengths_4; }
	inline void set_BitLengths_4(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * value)
	{
		___BitLengths_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BitLengths_4), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// Pathfinding.Ionic.Zlib.Tree
struct Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79  : public RuntimeObject
{
public:
	// System.Int16[] Pathfinding.Ionic.Zlib.Tree::dyn_tree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dyn_tree_9;
	// System.Int32 Pathfinding.Ionic.Zlib.Tree::max_code
	int32_t ___max_code_10;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.Tree::staticTree
	StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * ___staticTree_11;

public:
	inline static int32_t get_offset_of_dyn_tree_9() { return static_cast<int32_t>(offsetof(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79, ___dyn_tree_9)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_dyn_tree_9() const { return ___dyn_tree_9; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_dyn_tree_9() { return &___dyn_tree_9; }
	inline void set_dyn_tree_9(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___dyn_tree_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_tree_9), (void*)value);
	}

	inline static int32_t get_offset_of_max_code_10() { return static_cast<int32_t>(offsetof(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79, ___max_code_10)); }
	inline int32_t get_max_code_10() const { return ___max_code_10; }
	inline int32_t* get_address_of_max_code_10() { return &___max_code_10; }
	inline void set_max_code_10(int32_t value)
	{
		___max_code_10 = value;
	}

	inline static int32_t get_offset_of_staticTree_11() { return static_cast<int32_t>(offsetof(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79, ___staticTree_11)); }
	inline StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * get_staticTree_11() const { return ___staticTree_11; }
	inline StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 ** get_address_of_staticTree_11() { return &___staticTree_11; }
	inline void set_staticTree_11(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * value)
	{
		___staticTree_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticTree_11), (void*)value);
	}
};

struct Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.Tree::HEAP_SIZE
	int32_t ___HEAP_SIZE_0;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::ExtraLengthBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ExtraLengthBits_1;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::ExtraDistanceBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ExtraDistanceBits_2;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::extra_blbits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___extra_blbits_3;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::bl_order
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___bl_order_4;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::_dist_code
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ____dist_code_5;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::LengthCode
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___LengthCode_6;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::LengthBase
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___LengthBase_7;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::DistanceBase
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DistanceBase_8;

public:
	inline static int32_t get_offset_of_HEAP_SIZE_0() { return static_cast<int32_t>(offsetof(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields, ___HEAP_SIZE_0)); }
	inline int32_t get_HEAP_SIZE_0() const { return ___HEAP_SIZE_0; }
	inline int32_t* get_address_of_HEAP_SIZE_0() { return &___HEAP_SIZE_0; }
	inline void set_HEAP_SIZE_0(int32_t value)
	{
		___HEAP_SIZE_0 = value;
	}

	inline static int32_t get_offset_of_ExtraLengthBits_1() { return static_cast<int32_t>(offsetof(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields, ___ExtraLengthBits_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ExtraLengthBits_1() const { return ___ExtraLengthBits_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ExtraLengthBits_1() { return &___ExtraLengthBits_1; }
	inline void set_ExtraLengthBits_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ExtraLengthBits_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExtraLengthBits_1), (void*)value);
	}

	inline static int32_t get_offset_of_ExtraDistanceBits_2() { return static_cast<int32_t>(offsetof(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields, ___ExtraDistanceBits_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ExtraDistanceBits_2() const { return ___ExtraDistanceBits_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ExtraDistanceBits_2() { return &___ExtraDistanceBits_2; }
	inline void set_ExtraDistanceBits_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ExtraDistanceBits_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExtraDistanceBits_2), (void*)value);
	}

	inline static int32_t get_offset_of_extra_blbits_3() { return static_cast<int32_t>(offsetof(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields, ___extra_blbits_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_extra_blbits_3() const { return ___extra_blbits_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_extra_blbits_3() { return &___extra_blbits_3; }
	inline void set_extra_blbits_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___extra_blbits_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extra_blbits_3), (void*)value);
	}

	inline static int32_t get_offset_of_bl_order_4() { return static_cast<int32_t>(offsetof(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields, ___bl_order_4)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_bl_order_4() const { return ___bl_order_4; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_bl_order_4() { return &___bl_order_4; }
	inline void set_bl_order_4(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___bl_order_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_order_4), (void*)value);
	}

	inline static int32_t get_offset_of__dist_code_5() { return static_cast<int32_t>(offsetof(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields, ____dist_code_5)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get__dist_code_5() const { return ____dist_code_5; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of__dist_code_5() { return &____dist_code_5; }
	inline void set__dist_code_5(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		____dist_code_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dist_code_5), (void*)value);
	}

	inline static int32_t get_offset_of_LengthCode_6() { return static_cast<int32_t>(offsetof(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields, ___LengthCode_6)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_LengthCode_6() const { return ___LengthCode_6; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_LengthCode_6() { return &___LengthCode_6; }
	inline void set_LengthCode_6(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___LengthCode_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LengthCode_6), (void*)value);
	}

	inline static int32_t get_offset_of_LengthBase_7() { return static_cast<int32_t>(offsetof(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields, ___LengthBase_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_LengthBase_7() const { return ___LengthBase_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_LengthBase_7() { return &___LengthBase_7; }
	inline void set_LengthBase_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___LengthBase_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LengthBase_7), (void*)value);
	}

	inline static int32_t get_offset_of_DistanceBase_8() { return static_cast<int32_t>(offsetof(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields, ___DistanceBase_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DistanceBase_8() const { return ___DistanceBase_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DistanceBase_8() { return &___DistanceBase_8; }
	inline void set_DistanceBase_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DistanceBase_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DistanceBase_8), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int64>
struct Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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
struct IntPtr_t 
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


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
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
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
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
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=1152
struct U24ArrayTypeU3D1152_t324580C4EEB631B5AFBD444F925D44622B7F199D 
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
		uint8_t U24ArrayTypeU3D1152_t324580C4EEB631B5AFBD444F925D44622B7F199D__padding[1152];
	};

public:
};


// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=116
struct U24ArrayTypeU3D116_t390E4EE50DB7966C6EFB152710426C9E03721072 
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
		uint8_t U24ArrayTypeU3D116_t390E4EE50DB7966C6EFB152710426C9E03721072__padding[116];
	};

public:
};


// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=12
struct U24ArrayTypeU3D12_tBE30C29893D1CDB7F3B17A644EAAD650F1019B60 
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
		uint8_t U24ArrayTypeU3D12_tBE30C29893D1CDB7F3B17A644EAAD650F1019B60__padding[12];
	};

public:
};


// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=120
struct U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D 
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
		uint8_t U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D__padding[120];
	};

public:
};


// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=124
struct U24ArrayTypeU3D124_tC970C344DB4BEB5F746F634CB1B6C0C3B0A41D52 
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
		uint8_t U24ArrayTypeU3D124_tC970C344DB4BEB5F746F634CB1B6C0C3B0A41D52__padding[124];
	};

public:
};


// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=20
struct U24ArrayTypeU3D20_tB3856BB611F4B410DF01E9CF660326A1EFC0FBBF 
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
		uint8_t U24ArrayTypeU3D20_tB3856BB611F4B410DF01E9CF660326A1EFC0FBBF__padding[20];
	};

public:
};


// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=256
struct U24ArrayTypeU3D256_tAF56A8B3ABFED99D9BCFFA946D20A1023359BA5F 
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
		uint8_t U24ArrayTypeU3D256_tAF56A8B3ABFED99D9BCFFA946D20A1023359BA5F__padding[256];
	};

public:
};


// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=384
struct U24ArrayTypeU3D384_t0A977385C2328236E760A36654F1954D4162D8A2 
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
		uint8_t U24ArrayTypeU3D384_t0A977385C2328236E760A36654F1954D4162D8A2__padding[384];
	};

public:
};


// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=512
struct U24ArrayTypeU3D512_t207ED47B54764DDD9B045F9736A0FE29DD64499F 
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
		uint8_t U24ArrayTypeU3D512_t207ED47B54764DDD9B045F9736A0FE29DD64499F__padding[512];
	};

public:
};


// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=6144
struct U24ArrayTypeU3D6144_tCD4A178127727153941644EDBA5EE8A801F998BF 
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
		uint8_t U24ArrayTypeU3D6144_tCD4A178127727153941644EDBA5EE8A801F998BF__padding[6144];
	};

public:
};


// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=68
struct U24ArrayTypeU3D68_t46287AD4A782463B25320330E6F0AF1DEC190D0B 
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
		uint8_t U24ArrayTypeU3D68_t46287AD4A782463B25320330E6F0AF1DEC190D0B__padding[68];
	};

public:
};


// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=76
struct U24ArrayTypeU3D76_tFAE71AE70B5FC4E862048A99AF498BC9931F55E1 
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
		uint8_t U24ArrayTypeU3D76_tFAE71AE70B5FC4E862048A99AF498BC9931F55E1__padding[76];
	};

public:
};


// System.Nullable`1<System.DateTime>
struct Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D 
{
public:
	// T System.Nullable`1::value
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___value_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_value_0() const { return ___value_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}
struct U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields
{
public:
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=12 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-0
	U24ArrayTypeU3D12_tBE30C29893D1CDB7F3B17A644EAAD650F1019B60  ___U24fieldU2D0_0;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=6144 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-5
	U24ArrayTypeU3D6144_tCD4A178127727153941644EDBA5EE8A801F998BF  ___U24fieldU2D5_1;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=384 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-6
	U24ArrayTypeU3D384_t0A977385C2328236E760A36654F1954D4162D8A2  ___U24fieldU2D6_2;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=124 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-7
	U24ArrayTypeU3D124_tC970C344DB4BEB5F746F634CB1B6C0C3B0A41D52  ___U24fieldU2D7_3;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=124 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-8
	U24ArrayTypeU3D124_tC970C344DB4BEB5F746F634CB1B6C0C3B0A41D52  ___U24fieldU2D8_4;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=120 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-9
	U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  ___U24fieldU2D9_5;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=120 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-A
	U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  ___U24fieldU2DA_6;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=76 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-B
	U24ArrayTypeU3D76_tFAE71AE70B5FC4E862048A99AF498BC9931F55E1  ___U24fieldU2DB_7;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=68 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-C
	U24ArrayTypeU3D68_t46287AD4A782463B25320330E6F0AF1DEC190D0B  ___U24fieldU2DC_8;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=116 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-D
	U24ArrayTypeU3D116_t390E4EE50DB7966C6EFB152710426C9E03721072  ___U24fieldU2DD_9;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=120 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-E
	U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  ___U24fieldU2DE_10;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=76 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-F
	U24ArrayTypeU3D76_tFAE71AE70B5FC4E862048A99AF498BC9931F55E1  ___U24fieldU2DF_11;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=20 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-10
	U24ArrayTypeU3D20_tB3856BB611F4B410DF01E9CF660326A1EFC0FBBF  ___U24fieldU2D10_12;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=512 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-11
	U24ArrayTypeU3D512_t207ED47B54764DDD9B045F9736A0FE29DD64499F  ___U24fieldU2D11_13;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=256 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-12
	U24ArrayTypeU3D256_tAF56A8B3ABFED99D9BCFFA946D20A1023359BA5F  ___U24fieldU2D12_14;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=116 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-13
	U24ArrayTypeU3D116_t390E4EE50DB7966C6EFB152710426C9E03721072  ___U24fieldU2D13_15;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=120 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-14
	U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  ___U24fieldU2D14_16;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=1152 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-15
	U24ArrayTypeU3D1152_t324580C4EEB631B5AFBD444F925D44622B7F199D  ___U24fieldU2D15_17;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=120 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-16
	U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  ___U24fieldU2D16_18;

public:
	inline static int32_t get_offset_of_U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2D0_0)); }
	inline U24ArrayTypeU3D12_tBE30C29893D1CDB7F3B17A644EAAD650F1019B60  get_U24fieldU2D0_0() const { return ___U24fieldU2D0_0; }
	inline U24ArrayTypeU3D12_tBE30C29893D1CDB7F3B17A644EAAD650F1019B60 * get_address_of_U24fieldU2D0_0() { return &___U24fieldU2D0_0; }
	inline void set_U24fieldU2D0_0(U24ArrayTypeU3D12_tBE30C29893D1CDB7F3B17A644EAAD650F1019B60  value)
	{
		___U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D5_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2D5_1)); }
	inline U24ArrayTypeU3D6144_tCD4A178127727153941644EDBA5EE8A801F998BF  get_U24fieldU2D5_1() const { return ___U24fieldU2D5_1; }
	inline U24ArrayTypeU3D6144_tCD4A178127727153941644EDBA5EE8A801F998BF * get_address_of_U24fieldU2D5_1() { return &___U24fieldU2D5_1; }
	inline void set_U24fieldU2D5_1(U24ArrayTypeU3D6144_tCD4A178127727153941644EDBA5EE8A801F998BF  value)
	{
		___U24fieldU2D5_1 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2D6_2)); }
	inline U24ArrayTypeU3D384_t0A977385C2328236E760A36654F1954D4162D8A2  get_U24fieldU2D6_2() const { return ___U24fieldU2D6_2; }
	inline U24ArrayTypeU3D384_t0A977385C2328236E760A36654F1954D4162D8A2 * get_address_of_U24fieldU2D6_2() { return &___U24fieldU2D6_2; }
	inline void set_U24fieldU2D6_2(U24ArrayTypeU3D384_t0A977385C2328236E760A36654F1954D4162D8A2  value)
	{
		___U24fieldU2D6_2 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D7_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2D7_3)); }
	inline U24ArrayTypeU3D124_tC970C344DB4BEB5F746F634CB1B6C0C3B0A41D52  get_U24fieldU2D7_3() const { return ___U24fieldU2D7_3; }
	inline U24ArrayTypeU3D124_tC970C344DB4BEB5F746F634CB1B6C0C3B0A41D52 * get_address_of_U24fieldU2D7_3() { return &___U24fieldU2D7_3; }
	inline void set_U24fieldU2D7_3(U24ArrayTypeU3D124_tC970C344DB4BEB5F746F634CB1B6C0C3B0A41D52  value)
	{
		___U24fieldU2D7_3 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2D8_4)); }
	inline U24ArrayTypeU3D124_tC970C344DB4BEB5F746F634CB1B6C0C3B0A41D52  get_U24fieldU2D8_4() const { return ___U24fieldU2D8_4; }
	inline U24ArrayTypeU3D124_tC970C344DB4BEB5F746F634CB1B6C0C3B0A41D52 * get_address_of_U24fieldU2D8_4() { return &___U24fieldU2D8_4; }
	inline void set_U24fieldU2D8_4(U24ArrayTypeU3D124_tC970C344DB4BEB5F746F634CB1B6C0C3B0A41D52  value)
	{
		___U24fieldU2D8_4 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D9_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2D9_5)); }
	inline U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  get_U24fieldU2D9_5() const { return ___U24fieldU2D9_5; }
	inline U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D * get_address_of_U24fieldU2D9_5() { return &___U24fieldU2D9_5; }
	inline void set_U24fieldU2D9_5(U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  value)
	{
		___U24fieldU2D9_5 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DA_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2DA_6)); }
	inline U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  get_U24fieldU2DA_6() const { return ___U24fieldU2DA_6; }
	inline U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D * get_address_of_U24fieldU2DA_6() { return &___U24fieldU2DA_6; }
	inline void set_U24fieldU2DA_6(U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  value)
	{
		___U24fieldU2DA_6 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DB_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2DB_7)); }
	inline U24ArrayTypeU3D76_tFAE71AE70B5FC4E862048A99AF498BC9931F55E1  get_U24fieldU2DB_7() const { return ___U24fieldU2DB_7; }
	inline U24ArrayTypeU3D76_tFAE71AE70B5FC4E862048A99AF498BC9931F55E1 * get_address_of_U24fieldU2DB_7() { return &___U24fieldU2DB_7; }
	inline void set_U24fieldU2DB_7(U24ArrayTypeU3D76_tFAE71AE70B5FC4E862048A99AF498BC9931F55E1  value)
	{
		___U24fieldU2DB_7 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2DC_8)); }
	inline U24ArrayTypeU3D68_t46287AD4A782463B25320330E6F0AF1DEC190D0B  get_U24fieldU2DC_8() const { return ___U24fieldU2DC_8; }
	inline U24ArrayTypeU3D68_t46287AD4A782463B25320330E6F0AF1DEC190D0B * get_address_of_U24fieldU2DC_8() { return &___U24fieldU2DC_8; }
	inline void set_U24fieldU2DC_8(U24ArrayTypeU3D68_t46287AD4A782463B25320330E6F0AF1DEC190D0B  value)
	{
		___U24fieldU2DC_8 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2DD_9)); }
	inline U24ArrayTypeU3D116_t390E4EE50DB7966C6EFB152710426C9E03721072  get_U24fieldU2DD_9() const { return ___U24fieldU2DD_9; }
	inline U24ArrayTypeU3D116_t390E4EE50DB7966C6EFB152710426C9E03721072 * get_address_of_U24fieldU2DD_9() { return &___U24fieldU2DD_9; }
	inline void set_U24fieldU2DD_9(U24ArrayTypeU3D116_t390E4EE50DB7966C6EFB152710426C9E03721072  value)
	{
		___U24fieldU2DD_9 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DE_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2DE_10)); }
	inline U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  get_U24fieldU2DE_10() const { return ___U24fieldU2DE_10; }
	inline U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D * get_address_of_U24fieldU2DE_10() { return &___U24fieldU2DE_10; }
	inline void set_U24fieldU2DE_10(U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  value)
	{
		___U24fieldU2DE_10 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2DF_11)); }
	inline U24ArrayTypeU3D76_tFAE71AE70B5FC4E862048A99AF498BC9931F55E1  get_U24fieldU2DF_11() const { return ___U24fieldU2DF_11; }
	inline U24ArrayTypeU3D76_tFAE71AE70B5FC4E862048A99AF498BC9931F55E1 * get_address_of_U24fieldU2DF_11() { return &___U24fieldU2DF_11; }
	inline void set_U24fieldU2DF_11(U24ArrayTypeU3D76_tFAE71AE70B5FC4E862048A99AF498BC9931F55E1  value)
	{
		___U24fieldU2DF_11 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D10_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2D10_12)); }
	inline U24ArrayTypeU3D20_tB3856BB611F4B410DF01E9CF660326A1EFC0FBBF  get_U24fieldU2D10_12() const { return ___U24fieldU2D10_12; }
	inline U24ArrayTypeU3D20_tB3856BB611F4B410DF01E9CF660326A1EFC0FBBF * get_address_of_U24fieldU2D10_12() { return &___U24fieldU2D10_12; }
	inline void set_U24fieldU2D10_12(U24ArrayTypeU3D20_tB3856BB611F4B410DF01E9CF660326A1EFC0FBBF  value)
	{
		___U24fieldU2D10_12 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D11_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2D11_13)); }
	inline U24ArrayTypeU3D512_t207ED47B54764DDD9B045F9736A0FE29DD64499F  get_U24fieldU2D11_13() const { return ___U24fieldU2D11_13; }
	inline U24ArrayTypeU3D512_t207ED47B54764DDD9B045F9736A0FE29DD64499F * get_address_of_U24fieldU2D11_13() { return &___U24fieldU2D11_13; }
	inline void set_U24fieldU2D11_13(U24ArrayTypeU3D512_t207ED47B54764DDD9B045F9736A0FE29DD64499F  value)
	{
		___U24fieldU2D11_13 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D12_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2D12_14)); }
	inline U24ArrayTypeU3D256_tAF56A8B3ABFED99D9BCFFA946D20A1023359BA5F  get_U24fieldU2D12_14() const { return ___U24fieldU2D12_14; }
	inline U24ArrayTypeU3D256_tAF56A8B3ABFED99D9BCFFA946D20A1023359BA5F * get_address_of_U24fieldU2D12_14() { return &___U24fieldU2D12_14; }
	inline void set_U24fieldU2D12_14(U24ArrayTypeU3D256_tAF56A8B3ABFED99D9BCFFA946D20A1023359BA5F  value)
	{
		___U24fieldU2D12_14 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D13_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2D13_15)); }
	inline U24ArrayTypeU3D116_t390E4EE50DB7966C6EFB152710426C9E03721072  get_U24fieldU2D13_15() const { return ___U24fieldU2D13_15; }
	inline U24ArrayTypeU3D116_t390E4EE50DB7966C6EFB152710426C9E03721072 * get_address_of_U24fieldU2D13_15() { return &___U24fieldU2D13_15; }
	inline void set_U24fieldU2D13_15(U24ArrayTypeU3D116_t390E4EE50DB7966C6EFB152710426C9E03721072  value)
	{
		___U24fieldU2D13_15 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D14_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2D14_16)); }
	inline U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  get_U24fieldU2D14_16() const { return ___U24fieldU2D14_16; }
	inline U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D * get_address_of_U24fieldU2D14_16() { return &___U24fieldU2D14_16; }
	inline void set_U24fieldU2D14_16(U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  value)
	{
		___U24fieldU2D14_16 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D15_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2D15_17)); }
	inline U24ArrayTypeU3D1152_t324580C4EEB631B5AFBD444F925D44622B7F199D  get_U24fieldU2D15_17() const { return ___U24fieldU2D15_17; }
	inline U24ArrayTypeU3D1152_t324580C4EEB631B5AFBD444F925D44622B7F199D * get_address_of_U24fieldU2D15_17() { return &___U24fieldU2D15_17; }
	inline void set_U24fieldU2D15_17(U24ArrayTypeU3D1152_t324580C4EEB631B5AFBD444F925D44622B7F199D  value)
	{
		___U24fieldU2D15_17 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D16_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4_StaticFields, ___U24fieldU2D16_18)); }
	inline U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  get_U24fieldU2D16_18() const { return ___U24fieldU2D16_18; }
	inline U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D * get_address_of_U24fieldU2D16_18() { return &___U24fieldU2D16_18; }
	inline void set_U24fieldU2D16_18(U24ArrayTypeU3D120_tE5765A58DB76CA613D2E13DFF98ACF60A422709D  value)
	{
		___U24fieldU2D16_18 = value;
	}
};


// Pathfinding.Ionic.Zlib.BlockState
struct BlockState_tBB2D66F9467ED56323455E5CF9C5381CA44182F7 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.BlockState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlockState_tBB2D66F9467ED56323455E5CF9C5381CA44182F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zlib.CompressionLevel
struct CompressionLevel_tCC7A2DAEE11253B4955C3B94AA9A7FFFF77EDE1D 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.CompressionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionLevel_tCC7A2DAEE11253B4955C3B94AA9A7FFFF77EDE1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zip.CompressionMethod
struct CompressionMethod_t7CBDB5C1B9E92CABC68244C14299798274A23D15 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.CompressionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMethod_t7CBDB5C1B9E92CABC68244C14299798274A23D15, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zlib.CompressionMode
struct CompressionMode_t1CF74F19DF08DFFAB3BC930571C8F9882FA07192 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.CompressionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMode_t1CF74F19DF08DFFAB3BC930571C8F9882FA07192, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zlib.CompressionStrategy
struct CompressionStrategy_t05E580398CA4DCBF9B80FA4F86CD08FAD9241A4C 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.CompressionStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionStrategy_t05E580398CA4DCBF9B80FA4F86CD08FAD9241A4C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zip.CountingStream
struct CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.IO.Stream Pathfinding.Ionic.Zip.CountingStream::_s
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____s_4;
	// System.Int64 Pathfinding.Ionic.Zip.CountingStream::_bytesWritten
	int64_t ____bytesWritten_5;
	// System.Int64 Pathfinding.Ionic.Zip.CountingStream::_bytesRead
	int64_t ____bytesRead_6;
	// System.Int64 Pathfinding.Ionic.Zip.CountingStream::_initialOffset
	int64_t ____initialOffset_7;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF, ____s_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__s_4() const { return ____s_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__bytesWritten_5() { return static_cast<int32_t>(offsetof(CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF, ____bytesWritten_5)); }
	inline int64_t get__bytesWritten_5() const { return ____bytesWritten_5; }
	inline int64_t* get_address_of__bytesWritten_5() { return &____bytesWritten_5; }
	inline void set__bytesWritten_5(int64_t value)
	{
		____bytesWritten_5 = value;
	}

	inline static int32_t get_offset_of__bytesRead_6() { return static_cast<int32_t>(offsetof(CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF, ____bytesRead_6)); }
	inline int64_t get__bytesRead_6() const { return ____bytesRead_6; }
	inline int64_t* get_address_of__bytesRead_6() { return &____bytesRead_6; }
	inline void set__bytesRead_6(int64_t value)
	{
		____bytesRead_6 = value;
	}

	inline static int32_t get_offset_of__initialOffset_7() { return static_cast<int32_t>(offsetof(CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF, ____initialOffset_7)); }
	inline int64_t get__initialOffset_7() const { return ____initialOffset_7; }
	inline int64_t* get_address_of__initialOffset_7() { return &____initialOffset_7; }
	inline void set__initialOffset_7(int64_t value)
	{
		____initialOffset_7 = value;
	}
};


// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.IO.Stream Pathfinding.Ionic.Crc.CrcCalculatorStream::_innerStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____innerStream_5;
	// Pathfinding.Ionic.Crc.CRC32 Pathfinding.Ionic.Crc.CrcCalculatorStream::_Crc32
	CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * ____Crc32_6;
	// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::_lengthLimit
	int64_t ____lengthLimit_7;
	// System.Boolean Pathfinding.Ionic.Crc.CrcCalculatorStream::_leaveOpen
	bool ____leaveOpen_8;

public:
	inline static int32_t get_offset_of__innerStream_5() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371, ____innerStream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__innerStream_5() const { return ____innerStream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__innerStream_5() { return &____innerStream_5; }
	inline void set__innerStream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____innerStream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerStream_5), (void*)value);
	}

	inline static int32_t get_offset_of__Crc32_6() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371, ____Crc32_6)); }
	inline CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * get__Crc32_6() const { return ____Crc32_6; }
	inline CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C ** get_address_of__Crc32_6() { return &____Crc32_6; }
	inline void set__Crc32_6(CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * value)
	{
		____Crc32_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Crc32_6), (void*)value);
	}

	inline static int32_t get_offset_of__lengthLimit_7() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371, ____lengthLimit_7)); }
	inline int64_t get__lengthLimit_7() const { return ____lengthLimit_7; }
	inline int64_t* get_address_of__lengthLimit_7() { return &____lengthLimit_7; }
	inline void set__lengthLimit_7(int64_t value)
	{
		____lengthLimit_7 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_8() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371, ____leaveOpen_8)); }
	inline bool get__leaveOpen_8() const { return ____leaveOpen_8; }
	inline bool* get_address_of__leaveOpen_8() { return &____leaveOpen_8; }
	inline void set__leaveOpen_8(bool value)
	{
		____leaveOpen_8 = value;
	}
};

struct CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_StaticFields
{
public:
	// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::UnsetLengthLimit
	int64_t ___UnsetLengthLimit_4;

public:
	inline static int32_t get_offset_of_UnsetLengthLimit_4() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_StaticFields, ___UnsetLengthLimit_4)); }
	inline int64_t get_UnsetLengthLimit_4() const { return ___UnsetLengthLimit_4; }
	inline int64_t* get_address_of_UnsetLengthLimit_4() { return &___UnsetLengthLimit_4; }
	inline void set_UnsetLengthLimit_4(int64_t value)
	{
		___UnsetLengthLimit_4 = value;
	}
};


// Pathfinding.Ionic.Zip.CryptoMode
struct CryptoMode_tF805A0CF079FB20D1F5B5809C7B39E82DD87AC82 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.CryptoMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CryptoMode_tF805A0CF079FB20D1F5B5809C7B39E82DD87AC82, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeKind
struct DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zlib.DeflateFlavor
struct DeflateFlavor_tFAB5898F61BAB0B317353EC295D91E65B80E08CA 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateFlavor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeflateFlavor_tFAB5898F61BAB0B317353EC295D91E65B80E08CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zlib.DeflateStream
struct DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// Pathfinding.Ionic.Zlib.ZlibBaseStream Pathfinding.Ionic.Zlib.DeflateStream::_baseStream
	ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * ____baseStream_4;
	// System.IO.Stream Pathfinding.Ionic.Zlib.DeflateStream::_innerStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____innerStream_5;
	// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::_disposed
	bool ____disposed_6;

public:
	inline static int32_t get_offset_of__baseStream_4() { return static_cast<int32_t>(offsetof(DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D, ____baseStream_4)); }
	inline ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * get__baseStream_4() const { return ____baseStream_4; }
	inline ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 ** get_address_of__baseStream_4() { return &____baseStream_4; }
	inline void set__baseStream_4(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * value)
	{
		____baseStream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseStream_4), (void*)value);
	}

	inline static int32_t get_offset_of__innerStream_5() { return static_cast<int32_t>(offsetof(DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D, ____innerStream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__innerStream_5() const { return ____innerStream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__innerStream_5() { return &____innerStream_5; }
	inline void set__innerStream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____innerStream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerStream_5), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// Pathfinding.Ionic.Zip.EncryptionAlgorithm
struct EncryptionAlgorithm_t8DA3B19513A83C39CB34BC43F4F28A04F0E569D1 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.EncryptionAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncryptionAlgorithm_t8DA3B19513A83C39CB34BC43F4F28A04F0E569D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
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

// Pathfinding.Ionic.Zip.ExtractExistingFileAction
struct ExtractExistingFileAction_tA89C5303097D7E82FA67CD23D8A41D13C9EF22D2 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ExtractExistingFileAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExtractExistingFileAction_tA89C5303097D7E82FA67CD23D8A41D13C9EF22D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zlib.FlushType
struct FlushType_t2B671B98EAB77B1676A30983B13410DCF826AC7B 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.FlushType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FlushType_t2B671B98EAB77B1676A30983B13410DCF826AC7B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.IO.SeekOrigin
struct SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
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


// Pathfinding.Ionic.Zip.ZipEntrySource
struct ZipEntrySource_t28AD0134FDA042DECABA5689D6EDB22355BD52F0 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntrySource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipEntrySource_t28AD0134FDA042DECABA5689D6EDB22355BD52F0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zip.ZipEntryTimestamp
struct ZipEntryTimestamp_tA595C96B5C438102628B5CFA0AA316E0F018AF6A 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntryTimestamp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipEntryTimestamp_tA595C96B5C438102628B5CFA0AA316E0F018AF6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zip.ZipErrorAction
struct ZipErrorAction_t31A39B00A5663F87C951256174C1D6D9E4432BD2 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipErrorAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipErrorAction_t31A39B00A5663F87C951256174C1D6D9E4432BD2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zip.ZipOption
struct ZipOption_t50593DD7D40FE9F66358F92714F32DD722835A67 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipOption_t50593DD7D40FE9F66358F92714F32DD722835A67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zip.ZipProgressEventType
struct ZipProgressEventType_t55466F2826C02748F48A5EC9ACC163E56807A9C6 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipProgressEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipProgressEventType_t55466F2826C02748F48A5EC9ACC163E56807A9C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zlib.ZlibStreamFlavor
struct ZlibStreamFlavor_t0F74706FE9E12ABC2B65801D366C2E8445F54B56 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibStreamFlavor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZlibStreamFlavor_t0F74706FE9E12ABC2B65801D366C2E8445F54B56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode
struct InflateBlockMode_t1D2B862716E97B4C3DE0F87A7FD51FAAAD7F58FB 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InflateBlockMode_t1D2B862716E97B4C3DE0F87A7FD51FAAAD7F58FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zlib.InflateManager/InflateManagerMode
struct InflateManagerMode_tF682C7DCEB35BB9FE8D8CB40273CEDC01A647A49 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager/InflateManagerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InflateManagerMode_tF682C7DCEB35BB9FE8D8CB40273CEDC01A647A49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode
struct StreamMode_tDCB8470E4B7160EEAA547DD2A3094BD11C1CA24B 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamMode_tDCB8470E4B7160EEAA547DD2A3094BD11C1CA24B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zlib.DeflateManager
struct DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF  : public RuntimeObject
{
public:
	// Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc Pathfinding.Ionic.Zlib.DeflateManager::DeflateFunction
	CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E * ___DeflateFunction_2;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.DeflateManager::_codec
	ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ____codec_21;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::status
	int32_t ___status_22;
	// System.Byte[] Pathfinding.Ionic.Zlib.DeflateManager::pending
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___pending_23;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::nextPending
	int32_t ___nextPending_24;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::pendingCount
	int32_t ___pendingCount_25;
	// System.SByte Pathfinding.Ionic.Zlib.DeflateManager::data_type
	int8_t ___data_type_26;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::last_flush
	int32_t ___last_flush_27;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::w_size
	int32_t ___w_size_28;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::w_bits
	int32_t ___w_bits_29;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::w_mask
	int32_t ___w_mask_30;
	// System.Byte[] Pathfinding.Ionic.Zlib.DeflateManager::window
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___window_31;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::window_size
	int32_t ___window_size_32;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::prev
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___prev_33;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::head
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___head_34;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::ins_h
	int32_t ___ins_h_35;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_size
	int32_t ___hash_size_36;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_bits
	int32_t ___hash_bits_37;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_mask
	int32_t ___hash_mask_38;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_shift
	int32_t ___hash_shift_39;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::block_start
	int32_t ___block_start_40;
	// Pathfinding.Ionic.Zlib.DeflateManager/Config Pathfinding.Ionic.Zlib.DeflateManager::config
	Config_tC68F920487AC05FF8321319B93D3B73EEF943750 * ___config_41;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::match_length
	int32_t ___match_length_42;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::prev_match
	int32_t ___prev_match_43;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::match_available
	int32_t ___match_available_44;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::strstart
	int32_t ___strstart_45;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::match_start
	int32_t ___match_start_46;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::lookahead
	int32_t ___lookahead_47;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::prev_length
	int32_t ___prev_length_48;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.DeflateManager::compressionLevel
	int32_t ___compressionLevel_49;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.DeflateManager::compressionStrategy
	int32_t ___compressionStrategy_50;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::dyn_ltree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dyn_ltree_51;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::dyn_dtree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dyn_dtree_52;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::bl_tree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___bl_tree_53;
	// Pathfinding.Ionic.Zlib.Tree Pathfinding.Ionic.Zlib.DeflateManager::treeLiterals
	Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * ___treeLiterals_54;
	// Pathfinding.Ionic.Zlib.Tree Pathfinding.Ionic.Zlib.DeflateManager::treeDistances
	Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * ___treeDistances_55;
	// Pathfinding.Ionic.Zlib.Tree Pathfinding.Ionic.Zlib.DeflateManager::treeBitLengths
	Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * ___treeBitLengths_56;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::bl_count
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___bl_count_57;
	// System.Int32[] Pathfinding.Ionic.Zlib.DeflateManager::heap
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___heap_58;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::heap_len
	int32_t ___heap_len_59;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::heap_max
	int32_t ___heap_max_60;
	// System.SByte[] Pathfinding.Ionic.Zlib.DeflateManager::depth
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___depth_61;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::_lengthOffset
	int32_t ____lengthOffset_62;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::lit_bufsize
	int32_t ___lit_bufsize_63;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::last_lit
	int32_t ___last_lit_64;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::_distanceOffset
	int32_t ____distanceOffset_65;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::opt_len
	int32_t ___opt_len_66;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::static_len
	int32_t ___static_len_67;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::matches
	int32_t ___matches_68;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::last_eob_len
	int32_t ___last_eob_len_69;
	// System.Int16 Pathfinding.Ionic.Zlib.DeflateManager::bi_buf
	int16_t ___bi_buf_70;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::bi_valid
	int32_t ___bi_valid_71;
	// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::Rfc1950BytesEmitted
	bool ___Rfc1950BytesEmitted_72;
	// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_WantRfc1950HeaderBytes
	bool ____WantRfc1950HeaderBytes_73;

public:
	inline static int32_t get_offset_of_DeflateFunction_2() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___DeflateFunction_2)); }
	inline CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E * get_DeflateFunction_2() const { return ___DeflateFunction_2; }
	inline CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E ** get_address_of_DeflateFunction_2() { return &___DeflateFunction_2; }
	inline void set_DeflateFunction_2(CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E * value)
	{
		___DeflateFunction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeflateFunction_2), (void*)value);
	}

	inline static int32_t get_offset_of__codec_21() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ____codec_21)); }
	inline ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * get__codec_21() const { return ____codec_21; }
	inline ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 ** get_address_of__codec_21() { return &____codec_21; }
	inline void set__codec_21(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * value)
	{
		____codec_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____codec_21), (void*)value);
	}

	inline static int32_t get_offset_of_status_22() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___status_22)); }
	inline int32_t get_status_22() const { return ___status_22; }
	inline int32_t* get_address_of_status_22() { return &___status_22; }
	inline void set_status_22(int32_t value)
	{
		___status_22 = value;
	}

	inline static int32_t get_offset_of_pending_23() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___pending_23)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_pending_23() const { return ___pending_23; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_pending_23() { return &___pending_23; }
	inline void set_pending_23(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___pending_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_23), (void*)value);
	}

	inline static int32_t get_offset_of_nextPending_24() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___nextPending_24)); }
	inline int32_t get_nextPending_24() const { return ___nextPending_24; }
	inline int32_t* get_address_of_nextPending_24() { return &___nextPending_24; }
	inline void set_nextPending_24(int32_t value)
	{
		___nextPending_24 = value;
	}

	inline static int32_t get_offset_of_pendingCount_25() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___pendingCount_25)); }
	inline int32_t get_pendingCount_25() const { return ___pendingCount_25; }
	inline int32_t* get_address_of_pendingCount_25() { return &___pendingCount_25; }
	inline void set_pendingCount_25(int32_t value)
	{
		___pendingCount_25 = value;
	}

	inline static int32_t get_offset_of_data_type_26() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___data_type_26)); }
	inline int8_t get_data_type_26() const { return ___data_type_26; }
	inline int8_t* get_address_of_data_type_26() { return &___data_type_26; }
	inline void set_data_type_26(int8_t value)
	{
		___data_type_26 = value;
	}

	inline static int32_t get_offset_of_last_flush_27() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___last_flush_27)); }
	inline int32_t get_last_flush_27() const { return ___last_flush_27; }
	inline int32_t* get_address_of_last_flush_27() { return &___last_flush_27; }
	inline void set_last_flush_27(int32_t value)
	{
		___last_flush_27 = value;
	}

	inline static int32_t get_offset_of_w_size_28() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___w_size_28)); }
	inline int32_t get_w_size_28() const { return ___w_size_28; }
	inline int32_t* get_address_of_w_size_28() { return &___w_size_28; }
	inline void set_w_size_28(int32_t value)
	{
		___w_size_28 = value;
	}

	inline static int32_t get_offset_of_w_bits_29() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___w_bits_29)); }
	inline int32_t get_w_bits_29() const { return ___w_bits_29; }
	inline int32_t* get_address_of_w_bits_29() { return &___w_bits_29; }
	inline void set_w_bits_29(int32_t value)
	{
		___w_bits_29 = value;
	}

	inline static int32_t get_offset_of_w_mask_30() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___w_mask_30)); }
	inline int32_t get_w_mask_30() const { return ___w_mask_30; }
	inline int32_t* get_address_of_w_mask_30() { return &___w_mask_30; }
	inline void set_w_mask_30(int32_t value)
	{
		___w_mask_30 = value;
	}

	inline static int32_t get_offset_of_window_31() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___window_31)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_window_31() const { return ___window_31; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_window_31() { return &___window_31; }
	inline void set_window_31(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___window_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_31), (void*)value);
	}

	inline static int32_t get_offset_of_window_size_32() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___window_size_32)); }
	inline int32_t get_window_size_32() const { return ___window_size_32; }
	inline int32_t* get_address_of_window_size_32() { return &___window_size_32; }
	inline void set_window_size_32(int32_t value)
	{
		___window_size_32 = value;
	}

	inline static int32_t get_offset_of_prev_33() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___prev_33)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_prev_33() const { return ___prev_33; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_prev_33() { return &___prev_33; }
	inline void set_prev_33(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___prev_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_33), (void*)value);
	}

	inline static int32_t get_offset_of_head_34() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___head_34)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_head_34() const { return ___head_34; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_head_34() { return &___head_34; }
	inline void set_head_34(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___head_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_34), (void*)value);
	}

	inline static int32_t get_offset_of_ins_h_35() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___ins_h_35)); }
	inline int32_t get_ins_h_35() const { return ___ins_h_35; }
	inline int32_t* get_address_of_ins_h_35() { return &___ins_h_35; }
	inline void set_ins_h_35(int32_t value)
	{
		___ins_h_35 = value;
	}

	inline static int32_t get_offset_of_hash_size_36() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___hash_size_36)); }
	inline int32_t get_hash_size_36() const { return ___hash_size_36; }
	inline int32_t* get_address_of_hash_size_36() { return &___hash_size_36; }
	inline void set_hash_size_36(int32_t value)
	{
		___hash_size_36 = value;
	}

	inline static int32_t get_offset_of_hash_bits_37() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___hash_bits_37)); }
	inline int32_t get_hash_bits_37() const { return ___hash_bits_37; }
	inline int32_t* get_address_of_hash_bits_37() { return &___hash_bits_37; }
	inline void set_hash_bits_37(int32_t value)
	{
		___hash_bits_37 = value;
	}

	inline static int32_t get_offset_of_hash_mask_38() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___hash_mask_38)); }
	inline int32_t get_hash_mask_38() const { return ___hash_mask_38; }
	inline int32_t* get_address_of_hash_mask_38() { return &___hash_mask_38; }
	inline void set_hash_mask_38(int32_t value)
	{
		___hash_mask_38 = value;
	}

	inline static int32_t get_offset_of_hash_shift_39() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___hash_shift_39)); }
	inline int32_t get_hash_shift_39() const { return ___hash_shift_39; }
	inline int32_t* get_address_of_hash_shift_39() { return &___hash_shift_39; }
	inline void set_hash_shift_39(int32_t value)
	{
		___hash_shift_39 = value;
	}

	inline static int32_t get_offset_of_block_start_40() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___block_start_40)); }
	inline int32_t get_block_start_40() const { return ___block_start_40; }
	inline int32_t* get_address_of_block_start_40() { return &___block_start_40; }
	inline void set_block_start_40(int32_t value)
	{
		___block_start_40 = value;
	}

	inline static int32_t get_offset_of_config_41() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___config_41)); }
	inline Config_tC68F920487AC05FF8321319B93D3B73EEF943750 * get_config_41() const { return ___config_41; }
	inline Config_tC68F920487AC05FF8321319B93D3B73EEF943750 ** get_address_of_config_41() { return &___config_41; }
	inline void set_config_41(Config_tC68F920487AC05FF8321319B93D3B73EEF943750 * value)
	{
		___config_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_41), (void*)value);
	}

	inline static int32_t get_offset_of_match_length_42() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___match_length_42)); }
	inline int32_t get_match_length_42() const { return ___match_length_42; }
	inline int32_t* get_address_of_match_length_42() { return &___match_length_42; }
	inline void set_match_length_42(int32_t value)
	{
		___match_length_42 = value;
	}

	inline static int32_t get_offset_of_prev_match_43() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___prev_match_43)); }
	inline int32_t get_prev_match_43() const { return ___prev_match_43; }
	inline int32_t* get_address_of_prev_match_43() { return &___prev_match_43; }
	inline void set_prev_match_43(int32_t value)
	{
		___prev_match_43 = value;
	}

	inline static int32_t get_offset_of_match_available_44() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___match_available_44)); }
	inline int32_t get_match_available_44() const { return ___match_available_44; }
	inline int32_t* get_address_of_match_available_44() { return &___match_available_44; }
	inline void set_match_available_44(int32_t value)
	{
		___match_available_44 = value;
	}

	inline static int32_t get_offset_of_strstart_45() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___strstart_45)); }
	inline int32_t get_strstart_45() const { return ___strstart_45; }
	inline int32_t* get_address_of_strstart_45() { return &___strstart_45; }
	inline void set_strstart_45(int32_t value)
	{
		___strstart_45 = value;
	}

	inline static int32_t get_offset_of_match_start_46() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___match_start_46)); }
	inline int32_t get_match_start_46() const { return ___match_start_46; }
	inline int32_t* get_address_of_match_start_46() { return &___match_start_46; }
	inline void set_match_start_46(int32_t value)
	{
		___match_start_46 = value;
	}

	inline static int32_t get_offset_of_lookahead_47() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___lookahead_47)); }
	inline int32_t get_lookahead_47() const { return ___lookahead_47; }
	inline int32_t* get_address_of_lookahead_47() { return &___lookahead_47; }
	inline void set_lookahead_47(int32_t value)
	{
		___lookahead_47 = value;
	}

	inline static int32_t get_offset_of_prev_length_48() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___prev_length_48)); }
	inline int32_t get_prev_length_48() const { return ___prev_length_48; }
	inline int32_t* get_address_of_prev_length_48() { return &___prev_length_48; }
	inline void set_prev_length_48(int32_t value)
	{
		___prev_length_48 = value;
	}

	inline static int32_t get_offset_of_compressionLevel_49() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___compressionLevel_49)); }
	inline int32_t get_compressionLevel_49() const { return ___compressionLevel_49; }
	inline int32_t* get_address_of_compressionLevel_49() { return &___compressionLevel_49; }
	inline void set_compressionLevel_49(int32_t value)
	{
		___compressionLevel_49 = value;
	}

	inline static int32_t get_offset_of_compressionStrategy_50() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___compressionStrategy_50)); }
	inline int32_t get_compressionStrategy_50() const { return ___compressionStrategy_50; }
	inline int32_t* get_address_of_compressionStrategy_50() { return &___compressionStrategy_50; }
	inline void set_compressionStrategy_50(int32_t value)
	{
		___compressionStrategy_50 = value;
	}

	inline static int32_t get_offset_of_dyn_ltree_51() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___dyn_ltree_51)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_dyn_ltree_51() const { return ___dyn_ltree_51; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_dyn_ltree_51() { return &___dyn_ltree_51; }
	inline void set_dyn_ltree_51(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___dyn_ltree_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_ltree_51), (void*)value);
	}

	inline static int32_t get_offset_of_dyn_dtree_52() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___dyn_dtree_52)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_dyn_dtree_52() const { return ___dyn_dtree_52; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_dyn_dtree_52() { return &___dyn_dtree_52; }
	inline void set_dyn_dtree_52(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___dyn_dtree_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_dtree_52), (void*)value);
	}

	inline static int32_t get_offset_of_bl_tree_53() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___bl_tree_53)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_bl_tree_53() const { return ___bl_tree_53; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_bl_tree_53() { return &___bl_tree_53; }
	inline void set_bl_tree_53(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___bl_tree_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_tree_53), (void*)value);
	}

	inline static int32_t get_offset_of_treeLiterals_54() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___treeLiterals_54)); }
	inline Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * get_treeLiterals_54() const { return ___treeLiterals_54; }
	inline Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 ** get_address_of_treeLiterals_54() { return &___treeLiterals_54; }
	inline void set_treeLiterals_54(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * value)
	{
		___treeLiterals_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeLiterals_54), (void*)value);
	}

	inline static int32_t get_offset_of_treeDistances_55() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___treeDistances_55)); }
	inline Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * get_treeDistances_55() const { return ___treeDistances_55; }
	inline Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 ** get_address_of_treeDistances_55() { return &___treeDistances_55; }
	inline void set_treeDistances_55(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * value)
	{
		___treeDistances_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeDistances_55), (void*)value);
	}

	inline static int32_t get_offset_of_treeBitLengths_56() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___treeBitLengths_56)); }
	inline Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * get_treeBitLengths_56() const { return ___treeBitLengths_56; }
	inline Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 ** get_address_of_treeBitLengths_56() { return &___treeBitLengths_56; }
	inline void set_treeBitLengths_56(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * value)
	{
		___treeBitLengths_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeBitLengths_56), (void*)value);
	}

	inline static int32_t get_offset_of_bl_count_57() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___bl_count_57)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_bl_count_57() const { return ___bl_count_57; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_bl_count_57() { return &___bl_count_57; }
	inline void set_bl_count_57(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___bl_count_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_count_57), (void*)value);
	}

	inline static int32_t get_offset_of_heap_58() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___heap_58)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_heap_58() const { return ___heap_58; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_heap_58() { return &___heap_58; }
	inline void set_heap_58(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___heap_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heap_58), (void*)value);
	}

	inline static int32_t get_offset_of_heap_len_59() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___heap_len_59)); }
	inline int32_t get_heap_len_59() const { return ___heap_len_59; }
	inline int32_t* get_address_of_heap_len_59() { return &___heap_len_59; }
	inline void set_heap_len_59(int32_t value)
	{
		___heap_len_59 = value;
	}

	inline static int32_t get_offset_of_heap_max_60() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___heap_max_60)); }
	inline int32_t get_heap_max_60() const { return ___heap_max_60; }
	inline int32_t* get_address_of_heap_max_60() { return &___heap_max_60; }
	inline void set_heap_max_60(int32_t value)
	{
		___heap_max_60 = value;
	}

	inline static int32_t get_offset_of_depth_61() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___depth_61)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_depth_61() const { return ___depth_61; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_depth_61() { return &___depth_61; }
	inline void set_depth_61(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___depth_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depth_61), (void*)value);
	}

	inline static int32_t get_offset_of__lengthOffset_62() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ____lengthOffset_62)); }
	inline int32_t get__lengthOffset_62() const { return ____lengthOffset_62; }
	inline int32_t* get_address_of__lengthOffset_62() { return &____lengthOffset_62; }
	inline void set__lengthOffset_62(int32_t value)
	{
		____lengthOffset_62 = value;
	}

	inline static int32_t get_offset_of_lit_bufsize_63() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___lit_bufsize_63)); }
	inline int32_t get_lit_bufsize_63() const { return ___lit_bufsize_63; }
	inline int32_t* get_address_of_lit_bufsize_63() { return &___lit_bufsize_63; }
	inline void set_lit_bufsize_63(int32_t value)
	{
		___lit_bufsize_63 = value;
	}

	inline static int32_t get_offset_of_last_lit_64() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___last_lit_64)); }
	inline int32_t get_last_lit_64() const { return ___last_lit_64; }
	inline int32_t* get_address_of_last_lit_64() { return &___last_lit_64; }
	inline void set_last_lit_64(int32_t value)
	{
		___last_lit_64 = value;
	}

	inline static int32_t get_offset_of__distanceOffset_65() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ____distanceOffset_65)); }
	inline int32_t get__distanceOffset_65() const { return ____distanceOffset_65; }
	inline int32_t* get_address_of__distanceOffset_65() { return &____distanceOffset_65; }
	inline void set__distanceOffset_65(int32_t value)
	{
		____distanceOffset_65 = value;
	}

	inline static int32_t get_offset_of_opt_len_66() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___opt_len_66)); }
	inline int32_t get_opt_len_66() const { return ___opt_len_66; }
	inline int32_t* get_address_of_opt_len_66() { return &___opt_len_66; }
	inline void set_opt_len_66(int32_t value)
	{
		___opt_len_66 = value;
	}

	inline static int32_t get_offset_of_static_len_67() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___static_len_67)); }
	inline int32_t get_static_len_67() const { return ___static_len_67; }
	inline int32_t* get_address_of_static_len_67() { return &___static_len_67; }
	inline void set_static_len_67(int32_t value)
	{
		___static_len_67 = value;
	}

	inline static int32_t get_offset_of_matches_68() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___matches_68)); }
	inline int32_t get_matches_68() const { return ___matches_68; }
	inline int32_t* get_address_of_matches_68() { return &___matches_68; }
	inline void set_matches_68(int32_t value)
	{
		___matches_68 = value;
	}

	inline static int32_t get_offset_of_last_eob_len_69() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___last_eob_len_69)); }
	inline int32_t get_last_eob_len_69() const { return ___last_eob_len_69; }
	inline int32_t* get_address_of_last_eob_len_69() { return &___last_eob_len_69; }
	inline void set_last_eob_len_69(int32_t value)
	{
		___last_eob_len_69 = value;
	}

	inline static int32_t get_offset_of_bi_buf_70() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___bi_buf_70)); }
	inline int16_t get_bi_buf_70() const { return ___bi_buf_70; }
	inline int16_t* get_address_of_bi_buf_70() { return &___bi_buf_70; }
	inline void set_bi_buf_70(int16_t value)
	{
		___bi_buf_70 = value;
	}

	inline static int32_t get_offset_of_bi_valid_71() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___bi_valid_71)); }
	inline int32_t get_bi_valid_71() const { return ___bi_valid_71; }
	inline int32_t* get_address_of_bi_valid_71() { return &___bi_valid_71; }
	inline void set_bi_valid_71(int32_t value)
	{
		___bi_valid_71 = value;
	}

	inline static int32_t get_offset_of_Rfc1950BytesEmitted_72() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ___Rfc1950BytesEmitted_72)); }
	inline bool get_Rfc1950BytesEmitted_72() const { return ___Rfc1950BytesEmitted_72; }
	inline bool* get_address_of_Rfc1950BytesEmitted_72() { return &___Rfc1950BytesEmitted_72; }
	inline void set_Rfc1950BytesEmitted_72(bool value)
	{
		___Rfc1950BytesEmitted_72 = value;
	}

	inline static int32_t get_offset_of__WantRfc1950HeaderBytes_73() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF, ____WantRfc1950HeaderBytes_73)); }
	inline bool get__WantRfc1950HeaderBytes_73() const { return ____WantRfc1950HeaderBytes_73; }
	inline bool* get_address_of__WantRfc1950HeaderBytes_73() { return &____WantRfc1950HeaderBytes_73; }
	inline void set__WantRfc1950HeaderBytes_73(bool value)
	{
		____WantRfc1950HeaderBytes_73 = value;
	}
};

struct DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MEM_LEVEL_MAX
	int32_t ___MEM_LEVEL_MAX_0;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MEM_LEVEL_DEFAULT
	int32_t ___MEM_LEVEL_DEFAULT_1;
	// System.String[] Pathfinding.Ionic.Zlib.DeflateManager::_ErrorMessage
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____ErrorMessage_3;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::PRESET_DICT
	int32_t ___PRESET_DICT_4;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::INIT_STATE
	int32_t ___INIT_STATE_5;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::BUSY_STATE
	int32_t ___BUSY_STATE_6;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::FINISH_STATE
	int32_t ___FINISH_STATE_7;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_DEFLATED
	int32_t ___Z_DEFLATED_8;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::STORED_BLOCK
	int32_t ___STORED_BLOCK_9;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::STATIC_TREES
	int32_t ___STATIC_TREES_10;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::DYN_TREES
	int32_t ___DYN_TREES_11;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_BINARY
	int32_t ___Z_BINARY_12;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_ASCII
	int32_t ___Z_ASCII_13;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_UNKNOWN
	int32_t ___Z_UNKNOWN_14;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Buf_size
	int32_t ___Buf_size_15;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MIN_MATCH
	int32_t ___MIN_MATCH_16;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MAX_MATCH
	int32_t ___MAX_MATCH_17;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MIN_LOOKAHEAD
	int32_t ___MIN_LOOKAHEAD_18;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::HEAP_SIZE
	int32_t ___HEAP_SIZE_19;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::END_BLOCK
	int32_t ___END_BLOCK_20;

public:
	inline static int32_t get_offset_of_MEM_LEVEL_MAX_0() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___MEM_LEVEL_MAX_0)); }
	inline int32_t get_MEM_LEVEL_MAX_0() const { return ___MEM_LEVEL_MAX_0; }
	inline int32_t* get_address_of_MEM_LEVEL_MAX_0() { return &___MEM_LEVEL_MAX_0; }
	inline void set_MEM_LEVEL_MAX_0(int32_t value)
	{
		___MEM_LEVEL_MAX_0 = value;
	}

	inline static int32_t get_offset_of_MEM_LEVEL_DEFAULT_1() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___MEM_LEVEL_DEFAULT_1)); }
	inline int32_t get_MEM_LEVEL_DEFAULT_1() const { return ___MEM_LEVEL_DEFAULT_1; }
	inline int32_t* get_address_of_MEM_LEVEL_DEFAULT_1() { return &___MEM_LEVEL_DEFAULT_1; }
	inline void set_MEM_LEVEL_DEFAULT_1(int32_t value)
	{
		___MEM_LEVEL_DEFAULT_1 = value;
	}

	inline static int32_t get_offset_of__ErrorMessage_3() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ____ErrorMessage_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__ErrorMessage_3() const { return ____ErrorMessage_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__ErrorMessage_3() { return &____ErrorMessage_3; }
	inline void set__ErrorMessage_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____ErrorMessage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ErrorMessage_3), (void*)value);
	}

	inline static int32_t get_offset_of_PRESET_DICT_4() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___PRESET_DICT_4)); }
	inline int32_t get_PRESET_DICT_4() const { return ___PRESET_DICT_4; }
	inline int32_t* get_address_of_PRESET_DICT_4() { return &___PRESET_DICT_4; }
	inline void set_PRESET_DICT_4(int32_t value)
	{
		___PRESET_DICT_4 = value;
	}

	inline static int32_t get_offset_of_INIT_STATE_5() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___INIT_STATE_5)); }
	inline int32_t get_INIT_STATE_5() const { return ___INIT_STATE_5; }
	inline int32_t* get_address_of_INIT_STATE_5() { return &___INIT_STATE_5; }
	inline void set_INIT_STATE_5(int32_t value)
	{
		___INIT_STATE_5 = value;
	}

	inline static int32_t get_offset_of_BUSY_STATE_6() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___BUSY_STATE_6)); }
	inline int32_t get_BUSY_STATE_6() const { return ___BUSY_STATE_6; }
	inline int32_t* get_address_of_BUSY_STATE_6() { return &___BUSY_STATE_6; }
	inline void set_BUSY_STATE_6(int32_t value)
	{
		___BUSY_STATE_6 = value;
	}

	inline static int32_t get_offset_of_FINISH_STATE_7() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___FINISH_STATE_7)); }
	inline int32_t get_FINISH_STATE_7() const { return ___FINISH_STATE_7; }
	inline int32_t* get_address_of_FINISH_STATE_7() { return &___FINISH_STATE_7; }
	inline void set_FINISH_STATE_7(int32_t value)
	{
		___FINISH_STATE_7 = value;
	}

	inline static int32_t get_offset_of_Z_DEFLATED_8() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___Z_DEFLATED_8)); }
	inline int32_t get_Z_DEFLATED_8() const { return ___Z_DEFLATED_8; }
	inline int32_t* get_address_of_Z_DEFLATED_8() { return &___Z_DEFLATED_8; }
	inline void set_Z_DEFLATED_8(int32_t value)
	{
		___Z_DEFLATED_8 = value;
	}

	inline static int32_t get_offset_of_STORED_BLOCK_9() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___STORED_BLOCK_9)); }
	inline int32_t get_STORED_BLOCK_9() const { return ___STORED_BLOCK_9; }
	inline int32_t* get_address_of_STORED_BLOCK_9() { return &___STORED_BLOCK_9; }
	inline void set_STORED_BLOCK_9(int32_t value)
	{
		___STORED_BLOCK_9 = value;
	}

	inline static int32_t get_offset_of_STATIC_TREES_10() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___STATIC_TREES_10)); }
	inline int32_t get_STATIC_TREES_10() const { return ___STATIC_TREES_10; }
	inline int32_t* get_address_of_STATIC_TREES_10() { return &___STATIC_TREES_10; }
	inline void set_STATIC_TREES_10(int32_t value)
	{
		___STATIC_TREES_10 = value;
	}

	inline static int32_t get_offset_of_DYN_TREES_11() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___DYN_TREES_11)); }
	inline int32_t get_DYN_TREES_11() const { return ___DYN_TREES_11; }
	inline int32_t* get_address_of_DYN_TREES_11() { return &___DYN_TREES_11; }
	inline void set_DYN_TREES_11(int32_t value)
	{
		___DYN_TREES_11 = value;
	}

	inline static int32_t get_offset_of_Z_BINARY_12() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___Z_BINARY_12)); }
	inline int32_t get_Z_BINARY_12() const { return ___Z_BINARY_12; }
	inline int32_t* get_address_of_Z_BINARY_12() { return &___Z_BINARY_12; }
	inline void set_Z_BINARY_12(int32_t value)
	{
		___Z_BINARY_12 = value;
	}

	inline static int32_t get_offset_of_Z_ASCII_13() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___Z_ASCII_13)); }
	inline int32_t get_Z_ASCII_13() const { return ___Z_ASCII_13; }
	inline int32_t* get_address_of_Z_ASCII_13() { return &___Z_ASCII_13; }
	inline void set_Z_ASCII_13(int32_t value)
	{
		___Z_ASCII_13 = value;
	}

	inline static int32_t get_offset_of_Z_UNKNOWN_14() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___Z_UNKNOWN_14)); }
	inline int32_t get_Z_UNKNOWN_14() const { return ___Z_UNKNOWN_14; }
	inline int32_t* get_address_of_Z_UNKNOWN_14() { return &___Z_UNKNOWN_14; }
	inline void set_Z_UNKNOWN_14(int32_t value)
	{
		___Z_UNKNOWN_14 = value;
	}

	inline static int32_t get_offset_of_Buf_size_15() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___Buf_size_15)); }
	inline int32_t get_Buf_size_15() const { return ___Buf_size_15; }
	inline int32_t* get_address_of_Buf_size_15() { return &___Buf_size_15; }
	inline void set_Buf_size_15(int32_t value)
	{
		___Buf_size_15 = value;
	}

	inline static int32_t get_offset_of_MIN_MATCH_16() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___MIN_MATCH_16)); }
	inline int32_t get_MIN_MATCH_16() const { return ___MIN_MATCH_16; }
	inline int32_t* get_address_of_MIN_MATCH_16() { return &___MIN_MATCH_16; }
	inline void set_MIN_MATCH_16(int32_t value)
	{
		___MIN_MATCH_16 = value;
	}

	inline static int32_t get_offset_of_MAX_MATCH_17() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___MAX_MATCH_17)); }
	inline int32_t get_MAX_MATCH_17() const { return ___MAX_MATCH_17; }
	inline int32_t* get_address_of_MAX_MATCH_17() { return &___MAX_MATCH_17; }
	inline void set_MAX_MATCH_17(int32_t value)
	{
		___MAX_MATCH_17 = value;
	}

	inline static int32_t get_offset_of_MIN_LOOKAHEAD_18() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___MIN_LOOKAHEAD_18)); }
	inline int32_t get_MIN_LOOKAHEAD_18() const { return ___MIN_LOOKAHEAD_18; }
	inline int32_t* get_address_of_MIN_LOOKAHEAD_18() { return &___MIN_LOOKAHEAD_18; }
	inline void set_MIN_LOOKAHEAD_18(int32_t value)
	{
		___MIN_LOOKAHEAD_18 = value;
	}

	inline static int32_t get_offset_of_HEAP_SIZE_19() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___HEAP_SIZE_19)); }
	inline int32_t get_HEAP_SIZE_19() const { return ___HEAP_SIZE_19; }
	inline int32_t* get_address_of_HEAP_SIZE_19() { return &___HEAP_SIZE_19; }
	inline void set_HEAP_SIZE_19(int32_t value)
	{
		___HEAP_SIZE_19 = value;
	}

	inline static int32_t get_offset_of_END_BLOCK_20() { return static_cast<int32_t>(offsetof(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields, ___END_BLOCK_20)); }
	inline int32_t get_END_BLOCK_20() const { return ___END_BLOCK_20; }
	inline int32_t* get_address_of_END_BLOCK_20() { return &___END_BLOCK_20; }
	inline void set_END_BLOCK_20(int32_t value)
	{
		___END_BLOCK_20 = value;
	}
};


// Pathfinding.Ionic.Zlib.GZipStream
struct GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Nullable`1<System.DateTime> Pathfinding.Ionic.Zlib.GZipStream::LastModified
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___LastModified_4;
	// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::_headerByteCount
	int32_t ____headerByteCount_5;
	// Pathfinding.Ionic.Zlib.ZlibBaseStream Pathfinding.Ionic.Zlib.GZipStream::_baseStream
	ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * ____baseStream_6;
	// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::_disposed
	bool ____disposed_7;
	// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::_firstReadDone
	bool ____firstReadDone_8;
	// System.String Pathfinding.Ionic.Zlib.GZipStream::_FileName
	String_t* ____FileName_9;
	// System.String Pathfinding.Ionic.Zlib.GZipStream::_Comment
	String_t* ____Comment_10;

public:
	inline static int32_t get_offset_of_LastModified_4() { return static_cast<int32_t>(offsetof(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9, ___LastModified_4)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_LastModified_4() const { return ___LastModified_4; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_LastModified_4() { return &___LastModified_4; }
	inline void set_LastModified_4(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___LastModified_4 = value;
	}

	inline static int32_t get_offset_of__headerByteCount_5() { return static_cast<int32_t>(offsetof(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9, ____headerByteCount_5)); }
	inline int32_t get__headerByteCount_5() const { return ____headerByteCount_5; }
	inline int32_t* get_address_of__headerByteCount_5() { return &____headerByteCount_5; }
	inline void set__headerByteCount_5(int32_t value)
	{
		____headerByteCount_5 = value;
	}

	inline static int32_t get_offset_of__baseStream_6() { return static_cast<int32_t>(offsetof(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9, ____baseStream_6)); }
	inline ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * get__baseStream_6() const { return ____baseStream_6; }
	inline ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 ** get_address_of__baseStream_6() { return &____baseStream_6; }
	inline void set__baseStream_6(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * value)
	{
		____baseStream_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseStream_6), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_7() { return static_cast<int32_t>(offsetof(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9, ____disposed_7)); }
	inline bool get__disposed_7() const { return ____disposed_7; }
	inline bool* get_address_of__disposed_7() { return &____disposed_7; }
	inline void set__disposed_7(bool value)
	{
		____disposed_7 = value;
	}

	inline static int32_t get_offset_of__firstReadDone_8() { return static_cast<int32_t>(offsetof(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9, ____firstReadDone_8)); }
	inline bool get__firstReadDone_8() const { return ____firstReadDone_8; }
	inline bool* get_address_of__firstReadDone_8() { return &____firstReadDone_8; }
	inline void set__firstReadDone_8(bool value)
	{
		____firstReadDone_8 = value;
	}

	inline static int32_t get_offset_of__FileName_9() { return static_cast<int32_t>(offsetof(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9, ____FileName_9)); }
	inline String_t* get__FileName_9() const { return ____FileName_9; }
	inline String_t** get_address_of__FileName_9() { return &____FileName_9; }
	inline void set__FileName_9(String_t* value)
	{
		____FileName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FileName_9), (void*)value);
	}

	inline static int32_t get_offset_of__Comment_10() { return static_cast<int32_t>(offsetof(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9, ____Comment_10)); }
	inline String_t* get__Comment_10() const { return ____Comment_10; }
	inline String_t** get_address_of__Comment_10() { return &____Comment_10; }
	inline void set__Comment_10(String_t* value)
	{
		____Comment_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Comment_10), (void*)value);
	}
};

struct GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_StaticFields
{
public:
	// System.DateTime Pathfinding.Ionic.Zlib.GZipStream::_unixEpoch
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____unixEpoch_11;
	// System.Text.Encoding Pathfinding.Ionic.Zlib.GZipStream::iso8859dash1
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___iso8859dash1_12;

public:
	inline static int32_t get_offset_of__unixEpoch_11() { return static_cast<int32_t>(offsetof(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_StaticFields, ____unixEpoch_11)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__unixEpoch_11() const { return ____unixEpoch_11; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__unixEpoch_11() { return &____unixEpoch_11; }
	inline void set__unixEpoch_11(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____unixEpoch_11 = value;
	}

	inline static int32_t get_offset_of_iso8859dash1_12() { return static_cast<int32_t>(offsetof(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_StaticFields, ___iso8859dash1_12)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_iso8859dash1_12() const { return ___iso8859dash1_12; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_iso8859dash1_12() { return &___iso8859dash1_12; }
	inline void set_iso8859dash1_12(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___iso8859dash1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso8859dash1_12), (void*)value);
	}
};


// Pathfinding.Ionic.Zlib.InflateBlocks
struct InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB  : public RuntimeObject
{
public:
	// Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode Pathfinding.Ionic.Zlib.InflateBlocks::mode
	int32_t ___mode_1;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::left
	int32_t ___left_2;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::table
	int32_t ___table_3;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::index
	int32_t ___index_4;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::blens
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___blens_5;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::bb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bb_6;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::tb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tb_7;
	// Pathfinding.Ionic.Zlib.InflateCodes Pathfinding.Ionic.Zlib.InflateBlocks::codes
	InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * ___codes_8;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::last
	int32_t ___last_9;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.InflateBlocks::_codec
	ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ____codec_10;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::bitk
	int32_t ___bitk_11;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::bitb
	int32_t ___bitb_12;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::hufts
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hufts_13;
	// System.Byte[] Pathfinding.Ionic.Zlib.InflateBlocks::window
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___window_14;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::end
	int32_t ___end_15;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::readAt
	int32_t ___readAt_16;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::writeAt
	int32_t ___writeAt_17;
	// System.Object Pathfinding.Ionic.Zlib.InflateBlocks::checkfn
	RuntimeObject * ___checkfn_18;
	// System.UInt32 Pathfinding.Ionic.Zlib.InflateBlocks::check
	uint32_t ___check_19;
	// Pathfinding.Ionic.Zlib.InfTree Pathfinding.Ionic.Zlib.InflateBlocks::inftree
	InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * ___inftree_20;

public:
	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___left_2)); }
	inline int32_t get_left_2() const { return ___left_2; }
	inline int32_t* get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(int32_t value)
	{
		___left_2 = value;
	}

	inline static int32_t get_offset_of_table_3() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___table_3)); }
	inline int32_t get_table_3() const { return ___table_3; }
	inline int32_t* get_address_of_table_3() { return &___table_3; }
	inline void set_table_3(int32_t value)
	{
		___table_3 = value;
	}

	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}

	inline static int32_t get_offset_of_blens_5() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___blens_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_blens_5() const { return ___blens_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_blens_5() { return &___blens_5; }
	inline void set_blens_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___blens_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blens_5), (void*)value);
	}

	inline static int32_t get_offset_of_bb_6() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___bb_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_bb_6() const { return ___bb_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_bb_6() { return &___bb_6; }
	inline void set_bb_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___bb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bb_6), (void*)value);
	}

	inline static int32_t get_offset_of_tb_7() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___tb_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_tb_7() const { return ___tb_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_tb_7() { return &___tb_7; }
	inline void set_tb_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___tb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tb_7), (void*)value);
	}

	inline static int32_t get_offset_of_codes_8() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___codes_8)); }
	inline InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * get_codes_8() const { return ___codes_8; }
	inline InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD ** get_address_of_codes_8() { return &___codes_8; }
	inline void set_codes_8(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * value)
	{
		___codes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codes_8), (void*)value);
	}

	inline static int32_t get_offset_of_last_9() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___last_9)); }
	inline int32_t get_last_9() const { return ___last_9; }
	inline int32_t* get_address_of_last_9() { return &___last_9; }
	inline void set_last_9(int32_t value)
	{
		___last_9 = value;
	}

	inline static int32_t get_offset_of__codec_10() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ____codec_10)); }
	inline ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * get__codec_10() const { return ____codec_10; }
	inline ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 ** get_address_of__codec_10() { return &____codec_10; }
	inline void set__codec_10(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * value)
	{
		____codec_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____codec_10), (void*)value);
	}

	inline static int32_t get_offset_of_bitk_11() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___bitk_11)); }
	inline int32_t get_bitk_11() const { return ___bitk_11; }
	inline int32_t* get_address_of_bitk_11() { return &___bitk_11; }
	inline void set_bitk_11(int32_t value)
	{
		___bitk_11 = value;
	}

	inline static int32_t get_offset_of_bitb_12() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___bitb_12)); }
	inline int32_t get_bitb_12() const { return ___bitb_12; }
	inline int32_t* get_address_of_bitb_12() { return &___bitb_12; }
	inline void set_bitb_12(int32_t value)
	{
		___bitb_12 = value;
	}

	inline static int32_t get_offset_of_hufts_13() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___hufts_13)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_hufts_13() const { return ___hufts_13; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_hufts_13() { return &___hufts_13; }
	inline void set_hufts_13(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___hufts_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hufts_13), (void*)value);
	}

	inline static int32_t get_offset_of_window_14() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___window_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_window_14() const { return ___window_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_window_14() { return &___window_14; }
	inline void set_window_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___window_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_14), (void*)value);
	}

	inline static int32_t get_offset_of_end_15() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___end_15)); }
	inline int32_t get_end_15() const { return ___end_15; }
	inline int32_t* get_address_of_end_15() { return &___end_15; }
	inline void set_end_15(int32_t value)
	{
		___end_15 = value;
	}

	inline static int32_t get_offset_of_readAt_16() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___readAt_16)); }
	inline int32_t get_readAt_16() const { return ___readAt_16; }
	inline int32_t* get_address_of_readAt_16() { return &___readAt_16; }
	inline void set_readAt_16(int32_t value)
	{
		___readAt_16 = value;
	}

	inline static int32_t get_offset_of_writeAt_17() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___writeAt_17)); }
	inline int32_t get_writeAt_17() const { return ___writeAt_17; }
	inline int32_t* get_address_of_writeAt_17() { return &___writeAt_17; }
	inline void set_writeAt_17(int32_t value)
	{
		___writeAt_17 = value;
	}

	inline static int32_t get_offset_of_checkfn_18() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___checkfn_18)); }
	inline RuntimeObject * get_checkfn_18() const { return ___checkfn_18; }
	inline RuntimeObject ** get_address_of_checkfn_18() { return &___checkfn_18; }
	inline void set_checkfn_18(RuntimeObject * value)
	{
		___checkfn_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checkfn_18), (void*)value);
	}

	inline static int32_t get_offset_of_check_19() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___check_19)); }
	inline uint32_t get_check_19() const { return ___check_19; }
	inline uint32_t* get_address_of_check_19() { return &___check_19; }
	inline void set_check_19(uint32_t value)
	{
		___check_19 = value;
	}

	inline static int32_t get_offset_of_inftree_20() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB, ___inftree_20)); }
	inline InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * get_inftree_20() const { return ___inftree_20; }
	inline InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF ** get_address_of_inftree_20() { return &___inftree_20; }
	inline void set_inftree_20(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * value)
	{
		___inftree_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inftree_20), (void*)value);
	}
};

struct InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_StaticFields
{
public:
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::border
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___border_0;

public:
	inline static int32_t get_offset_of_border_0() { return static_cast<int32_t>(offsetof(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_StaticFields, ___border_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_border_0() const { return ___border_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_border_0() { return &___border_0; }
	inline void set_border_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___border_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___border_0), (void*)value);
	}
};


// Pathfinding.Ionic.Zlib.InflateManager
struct InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4  : public RuntimeObject
{
public:
	// Pathfinding.Ionic.Zlib.InflateManager/InflateManagerMode Pathfinding.Ionic.Zlib.InflateManager::mode
	int32_t ___mode_0;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.InflateManager::_codec
	ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ____codec_1;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::method
	int32_t ___method_2;
	// System.UInt32 Pathfinding.Ionic.Zlib.InflateManager::computedCheck
	uint32_t ___computedCheck_3;
	// System.UInt32 Pathfinding.Ionic.Zlib.InflateManager::expectedCheck
	uint32_t ___expectedCheck_4;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::marker
	int32_t ___marker_5;
	// System.Boolean Pathfinding.Ionic.Zlib.InflateManager::_handleRfc1950HeaderBytes
	bool ____handleRfc1950HeaderBytes_6;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::wbits
	int32_t ___wbits_7;
	// Pathfinding.Ionic.Zlib.InflateBlocks Pathfinding.Ionic.Zlib.InflateManager::blocks
	InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * ___blocks_8;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of__codec_1() { return static_cast<int32_t>(offsetof(InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4, ____codec_1)); }
	inline ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * get__codec_1() const { return ____codec_1; }
	inline ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 ** get_address_of__codec_1() { return &____codec_1; }
	inline void set__codec_1(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * value)
	{
		____codec_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____codec_1), (void*)value);
	}

	inline static int32_t get_offset_of_method_2() { return static_cast<int32_t>(offsetof(InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4, ___method_2)); }
	inline int32_t get_method_2() const { return ___method_2; }
	inline int32_t* get_address_of_method_2() { return &___method_2; }
	inline void set_method_2(int32_t value)
	{
		___method_2 = value;
	}

	inline static int32_t get_offset_of_computedCheck_3() { return static_cast<int32_t>(offsetof(InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4, ___computedCheck_3)); }
	inline uint32_t get_computedCheck_3() const { return ___computedCheck_3; }
	inline uint32_t* get_address_of_computedCheck_3() { return &___computedCheck_3; }
	inline void set_computedCheck_3(uint32_t value)
	{
		___computedCheck_3 = value;
	}

	inline static int32_t get_offset_of_expectedCheck_4() { return static_cast<int32_t>(offsetof(InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4, ___expectedCheck_4)); }
	inline uint32_t get_expectedCheck_4() const { return ___expectedCheck_4; }
	inline uint32_t* get_address_of_expectedCheck_4() { return &___expectedCheck_4; }
	inline void set_expectedCheck_4(uint32_t value)
	{
		___expectedCheck_4 = value;
	}

	inline static int32_t get_offset_of_marker_5() { return static_cast<int32_t>(offsetof(InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4, ___marker_5)); }
	inline int32_t get_marker_5() const { return ___marker_5; }
	inline int32_t* get_address_of_marker_5() { return &___marker_5; }
	inline void set_marker_5(int32_t value)
	{
		___marker_5 = value;
	}

	inline static int32_t get_offset_of__handleRfc1950HeaderBytes_6() { return static_cast<int32_t>(offsetof(InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4, ____handleRfc1950HeaderBytes_6)); }
	inline bool get__handleRfc1950HeaderBytes_6() const { return ____handleRfc1950HeaderBytes_6; }
	inline bool* get_address_of__handleRfc1950HeaderBytes_6() { return &____handleRfc1950HeaderBytes_6; }
	inline void set__handleRfc1950HeaderBytes_6(bool value)
	{
		____handleRfc1950HeaderBytes_6 = value;
	}

	inline static int32_t get_offset_of_wbits_7() { return static_cast<int32_t>(offsetof(InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4, ___wbits_7)); }
	inline int32_t get_wbits_7() const { return ___wbits_7; }
	inline int32_t* get_address_of_wbits_7() { return &___wbits_7; }
	inline void set_wbits_7(int32_t value)
	{
		___wbits_7 = value;
	}

	inline static int32_t get_offset_of_blocks_8() { return static_cast<int32_t>(offsetof(InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4, ___blocks_8)); }
	inline InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * get_blocks_8() const { return ___blocks_8; }
	inline InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB ** get_address_of_blocks_8() { return &___blocks_8; }
	inline void set_blocks_8(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * value)
	{
		___blocks_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blocks_8), (void*)value);
	}
};

struct InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4_StaticFields
{
public:
	// System.Byte[] Pathfinding.Ionic.Zlib.InflateManager::mark
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mark_9;

public:
	inline static int32_t get_offset_of_mark_9() { return static_cast<int32_t>(offsetof(InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4_StaticFields, ___mark_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mark_9() const { return ___mark_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mark_9() { return &___mark_9; }
	inline void set_mark_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mark_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mark_9), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionMadeBy
	int16_t ____VersionMadeBy_0;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_InternalFileAttrs
	int16_t ____InternalFileAttrs_1;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_ExternalFileAttrs
	int32_t ____ExternalFileAttrs_2;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_filenameLength
	int16_t ____filenameLength_3;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_extraFieldLength
	int16_t ____extraFieldLength_4;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_commentLength
	int16_t ____commentLength_5;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_inputDecryptorStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____inputDecryptorStream_6;
	// System.Object Pathfinding.Ionic.Zip.ZipEntry::_outputLock
	RuntimeObject * ____outputLock_7;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forExtract
	ZipCrypto_t788C8ABE5C64BB7812E5905890E8F18907D46961 * ____zipCrypto_forExtract_8;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forWrite
	ZipCrypto_t788C8ABE5C64BB7812E5905890E8F18907D46961 * ____zipCrypto_forWrite_9;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_LastModified
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____LastModified_10;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Mtime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____Mtime_11;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Atime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____Atime_12;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Ctime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____Ctime_13;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ntfsTimesAreSet
	bool ____ntfsTimesAreSet_14;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitNtfsTimes
	bool ____emitNtfsTimes_15;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitUnixTimes
	bool ____emitUnixTimes_16;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_TrimVolumeFromFullyQualifiedPaths
	bool ____TrimVolumeFromFullyQualifiedPaths_17;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_LocalFileName
	String_t* ____LocalFileName_18;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_FileNameInArchive
	String_t* ____FileNameInArchive_19;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionNeeded
	int16_t ____VersionNeeded_20;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_BitField
	int16_t ____BitField_21;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod
	int16_t ____CompressionMethod_22;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod_FromZipFile
	int16_t ____CompressionMethod_FromZipFile_23;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipEntry::_CompressionLevel
	int32_t ____CompressionLevel_24;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Comment
	String_t* ____Comment_25;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsDirectory
	bool ____IsDirectory_26;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_CommentBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____CommentBytes_27;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedSize
	int64_t ____CompressedSize_28;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedFileDataSize
	int64_t ____CompressedFileDataSize_29;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_UncompressedSize
	int64_t ____UncompressedSize_30;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_TimeBlob
	int32_t ____TimeBlob_31;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_crcCalculated
	bool ____crcCalculated_32;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_Crc32
	int32_t ____Crc32_33;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_Extra
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____Extra_34;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_metadataChanged
	bool ____metadataChanged_35;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_restreamRequiredOnSave
	bool ____restreamRequiredOnSave_36;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_sourceIsEncrypted
	bool ____sourceIsEncrypted_37;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_skippedDuringSave
	bool ____skippedDuringSave_38;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_diskNumber
	uint32_t ____diskNumber_39;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::_actualEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____actualEncoding_41;
	// Pathfinding.Ionic.Zip.ZipContainer Pathfinding.Ionic.Zip.ZipEntry::_container
	ZipContainer_t7F1BF50F08858ADF2C7979A2BE953EB09EBC4E41 * ____container_42;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::__FileDataPosition
	int64_t _____FileDataPosition_43;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_EntryHeader
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____EntryHeader_44;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_RelativeOffsetOfLocalHeader
	int64_t ____RelativeOffsetOfLocalHeader_45;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_future_ROLH
	int64_t ____future_ROLH_46;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_TotalEntrySize
	int64_t ____TotalEntrySize_47;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfHeader
	int32_t ____LengthOfHeader_48;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfTrailer
	int32_t ____LengthOfTrailer_49;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_InputUsesZip64
	bool ____InputUsesZip64_50;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_UnsupportedAlgorithmId
	uint32_t ____UnsupportedAlgorithmId_51;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Password
	String_t* ____Password_52;
	// Pathfinding.Ionic.Zip.ZipEntrySource Pathfinding.Ionic.Zip.ZipEntry::_Source
	int32_t ____Source_53;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption
	int32_t ____Encryption_54;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption_FromZipFile
	int32_t ____Encryption_FromZipFile_55;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_WeakEncryptionHeader
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____WeakEncryptionHeader_56;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_archiveStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____archiveStream_57;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_sourceStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____sourceStream_58;
	// System.Nullable`1<System.Int64> Pathfinding.Ionic.Zip.ZipEntry::_sourceStreamOriginalPosition
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ____sourceStreamOriginalPosition_59;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ioOperationCanceled
	bool ____ioOperationCanceled_60;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_presumeZip64
	bool ____presumeZip64_61;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_entryRequiresZip64
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ____entryRequiresZip64_62;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_OutputUsesZip64
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ____OutputUsesZip64_63;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsText
	bool ____IsText_64;
	// Pathfinding.Ionic.Zip.ZipEntryTimestamp Pathfinding.Ionic.Zip.ZipEntry::_timestamp
	int32_t ____timestamp_65;
	// Pathfinding.Ionic.Zip.WriteDelegate Pathfinding.Ionic.Zip.ZipEntry::_WriteDelegate
	WriteDelegate_t677A3857696D3DC5B0EEA8FF57EFE7BC77C9F724 * ____WriteDelegate_69;
	// Pathfinding.Ionic.Zip.OpenDelegate Pathfinding.Ionic.Zip.ZipEntry::_OpenDelegate
	OpenDelegate_t4FD73AF931B565F95888C2D3FE60F83302DC0B3E * ____OpenDelegate_70;
	// Pathfinding.Ionic.Zip.CloseDelegate Pathfinding.Ionic.Zip.ZipEntry::_CloseDelegate
	CloseDelegate_t197F69FB43210433EE489E0E6040E388F16FD992 * ____CloseDelegate_71;
	// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipEntry::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_72;
	// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipEntry::<ZipErrorAction>k__BackingField
	int32_t ___U3CZipErrorActionU3Ek__BackingField_73;
	// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipEntry::<SetCompression>k__BackingField
	SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01 * ___U3CSetCompressionU3Ek__BackingField_74;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncoding>k__BackingField
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___U3CAlternateEncodingU3Ek__BackingField_75;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncodingUsage>k__BackingField
	int32_t ___U3CAlternateEncodingUsageU3Ek__BackingField_76;

public:
	inline static int32_t get_offset_of__VersionMadeBy_0() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____VersionMadeBy_0)); }
	inline int16_t get__VersionMadeBy_0() const { return ____VersionMadeBy_0; }
	inline int16_t* get_address_of__VersionMadeBy_0() { return &____VersionMadeBy_0; }
	inline void set__VersionMadeBy_0(int16_t value)
	{
		____VersionMadeBy_0 = value;
	}

	inline static int32_t get_offset_of__InternalFileAttrs_1() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____InternalFileAttrs_1)); }
	inline int16_t get__InternalFileAttrs_1() const { return ____InternalFileAttrs_1; }
	inline int16_t* get_address_of__InternalFileAttrs_1() { return &____InternalFileAttrs_1; }
	inline void set__InternalFileAttrs_1(int16_t value)
	{
		____InternalFileAttrs_1 = value;
	}

	inline static int32_t get_offset_of__ExternalFileAttrs_2() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____ExternalFileAttrs_2)); }
	inline int32_t get__ExternalFileAttrs_2() const { return ____ExternalFileAttrs_2; }
	inline int32_t* get_address_of__ExternalFileAttrs_2() { return &____ExternalFileAttrs_2; }
	inline void set__ExternalFileAttrs_2(int32_t value)
	{
		____ExternalFileAttrs_2 = value;
	}

	inline static int32_t get_offset_of__filenameLength_3() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____filenameLength_3)); }
	inline int16_t get__filenameLength_3() const { return ____filenameLength_3; }
	inline int16_t* get_address_of__filenameLength_3() { return &____filenameLength_3; }
	inline void set__filenameLength_3(int16_t value)
	{
		____filenameLength_3 = value;
	}

	inline static int32_t get_offset_of__extraFieldLength_4() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____extraFieldLength_4)); }
	inline int16_t get__extraFieldLength_4() const { return ____extraFieldLength_4; }
	inline int16_t* get_address_of__extraFieldLength_4() { return &____extraFieldLength_4; }
	inline void set__extraFieldLength_4(int16_t value)
	{
		____extraFieldLength_4 = value;
	}

	inline static int32_t get_offset_of__commentLength_5() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____commentLength_5)); }
	inline int16_t get__commentLength_5() const { return ____commentLength_5; }
	inline int16_t* get_address_of__commentLength_5() { return &____commentLength_5; }
	inline void set__commentLength_5(int16_t value)
	{
		____commentLength_5 = value;
	}

	inline static int32_t get_offset_of__inputDecryptorStream_6() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____inputDecryptorStream_6)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__inputDecryptorStream_6() const { return ____inputDecryptorStream_6; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__inputDecryptorStream_6() { return &____inputDecryptorStream_6; }
	inline void set__inputDecryptorStream_6(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____inputDecryptorStream_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____inputDecryptorStream_6), (void*)value);
	}

	inline static int32_t get_offset_of__outputLock_7() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____outputLock_7)); }
	inline RuntimeObject * get__outputLock_7() const { return ____outputLock_7; }
	inline RuntimeObject ** get_address_of__outputLock_7() { return &____outputLock_7; }
	inline void set__outputLock_7(RuntimeObject * value)
	{
		____outputLock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____outputLock_7), (void*)value);
	}

	inline static int32_t get_offset_of__zipCrypto_forExtract_8() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____zipCrypto_forExtract_8)); }
	inline ZipCrypto_t788C8ABE5C64BB7812E5905890E8F18907D46961 * get__zipCrypto_forExtract_8() const { return ____zipCrypto_forExtract_8; }
	inline ZipCrypto_t788C8ABE5C64BB7812E5905890E8F18907D46961 ** get_address_of__zipCrypto_forExtract_8() { return &____zipCrypto_forExtract_8; }
	inline void set__zipCrypto_forExtract_8(ZipCrypto_t788C8ABE5C64BB7812E5905890E8F18907D46961 * value)
	{
		____zipCrypto_forExtract_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____zipCrypto_forExtract_8), (void*)value);
	}

	inline static int32_t get_offset_of__zipCrypto_forWrite_9() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____zipCrypto_forWrite_9)); }
	inline ZipCrypto_t788C8ABE5C64BB7812E5905890E8F18907D46961 * get__zipCrypto_forWrite_9() const { return ____zipCrypto_forWrite_9; }
	inline ZipCrypto_t788C8ABE5C64BB7812E5905890E8F18907D46961 ** get_address_of__zipCrypto_forWrite_9() { return &____zipCrypto_forWrite_9; }
	inline void set__zipCrypto_forWrite_9(ZipCrypto_t788C8ABE5C64BB7812E5905890E8F18907D46961 * value)
	{
		____zipCrypto_forWrite_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____zipCrypto_forWrite_9), (void*)value);
	}

	inline static int32_t get_offset_of__LastModified_10() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____LastModified_10)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__LastModified_10() const { return ____LastModified_10; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__LastModified_10() { return &____LastModified_10; }
	inline void set__LastModified_10(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____LastModified_10 = value;
	}

	inline static int32_t get_offset_of__Mtime_11() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____Mtime_11)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__Mtime_11() const { return ____Mtime_11; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__Mtime_11() { return &____Mtime_11; }
	inline void set__Mtime_11(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____Mtime_11 = value;
	}

	inline static int32_t get_offset_of__Atime_12() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____Atime_12)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__Atime_12() const { return ____Atime_12; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__Atime_12() { return &____Atime_12; }
	inline void set__Atime_12(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____Atime_12 = value;
	}

	inline static int32_t get_offset_of__Ctime_13() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____Ctime_13)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__Ctime_13() const { return ____Ctime_13; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__Ctime_13() { return &____Ctime_13; }
	inline void set__Ctime_13(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____Ctime_13 = value;
	}

	inline static int32_t get_offset_of__ntfsTimesAreSet_14() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____ntfsTimesAreSet_14)); }
	inline bool get__ntfsTimesAreSet_14() const { return ____ntfsTimesAreSet_14; }
	inline bool* get_address_of__ntfsTimesAreSet_14() { return &____ntfsTimesAreSet_14; }
	inline void set__ntfsTimesAreSet_14(bool value)
	{
		____ntfsTimesAreSet_14 = value;
	}

	inline static int32_t get_offset_of__emitNtfsTimes_15() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____emitNtfsTimes_15)); }
	inline bool get__emitNtfsTimes_15() const { return ____emitNtfsTimes_15; }
	inline bool* get_address_of__emitNtfsTimes_15() { return &____emitNtfsTimes_15; }
	inline void set__emitNtfsTimes_15(bool value)
	{
		____emitNtfsTimes_15 = value;
	}

	inline static int32_t get_offset_of__emitUnixTimes_16() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____emitUnixTimes_16)); }
	inline bool get__emitUnixTimes_16() const { return ____emitUnixTimes_16; }
	inline bool* get_address_of__emitUnixTimes_16() { return &____emitUnixTimes_16; }
	inline void set__emitUnixTimes_16(bool value)
	{
		____emitUnixTimes_16 = value;
	}

	inline static int32_t get_offset_of__TrimVolumeFromFullyQualifiedPaths_17() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____TrimVolumeFromFullyQualifiedPaths_17)); }
	inline bool get__TrimVolumeFromFullyQualifiedPaths_17() const { return ____TrimVolumeFromFullyQualifiedPaths_17; }
	inline bool* get_address_of__TrimVolumeFromFullyQualifiedPaths_17() { return &____TrimVolumeFromFullyQualifiedPaths_17; }
	inline void set__TrimVolumeFromFullyQualifiedPaths_17(bool value)
	{
		____TrimVolumeFromFullyQualifiedPaths_17 = value;
	}

	inline static int32_t get_offset_of__LocalFileName_18() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____LocalFileName_18)); }
	inline String_t* get__LocalFileName_18() const { return ____LocalFileName_18; }
	inline String_t** get_address_of__LocalFileName_18() { return &____LocalFileName_18; }
	inline void set__LocalFileName_18(String_t* value)
	{
		____LocalFileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____LocalFileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__FileNameInArchive_19() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____FileNameInArchive_19)); }
	inline String_t* get__FileNameInArchive_19() const { return ____FileNameInArchive_19; }
	inline String_t** get_address_of__FileNameInArchive_19() { return &____FileNameInArchive_19; }
	inline void set__FileNameInArchive_19(String_t* value)
	{
		____FileNameInArchive_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FileNameInArchive_19), (void*)value);
	}

	inline static int32_t get_offset_of__VersionNeeded_20() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____VersionNeeded_20)); }
	inline int16_t get__VersionNeeded_20() const { return ____VersionNeeded_20; }
	inline int16_t* get_address_of__VersionNeeded_20() { return &____VersionNeeded_20; }
	inline void set__VersionNeeded_20(int16_t value)
	{
		____VersionNeeded_20 = value;
	}

	inline static int32_t get_offset_of__BitField_21() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____BitField_21)); }
	inline int16_t get__BitField_21() const { return ____BitField_21; }
	inline int16_t* get_address_of__BitField_21() { return &____BitField_21; }
	inline void set__BitField_21(int16_t value)
	{
		____BitField_21 = value;
	}

	inline static int32_t get_offset_of__CompressionMethod_22() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____CompressionMethod_22)); }
	inline int16_t get__CompressionMethod_22() const { return ____CompressionMethod_22; }
	inline int16_t* get_address_of__CompressionMethod_22() { return &____CompressionMethod_22; }
	inline void set__CompressionMethod_22(int16_t value)
	{
		____CompressionMethod_22 = value;
	}

	inline static int32_t get_offset_of__CompressionMethod_FromZipFile_23() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____CompressionMethod_FromZipFile_23)); }
	inline int16_t get__CompressionMethod_FromZipFile_23() const { return ____CompressionMethod_FromZipFile_23; }
	inline int16_t* get_address_of__CompressionMethod_FromZipFile_23() { return &____CompressionMethod_FromZipFile_23; }
	inline void set__CompressionMethod_FromZipFile_23(int16_t value)
	{
		____CompressionMethod_FromZipFile_23 = value;
	}

	inline static int32_t get_offset_of__CompressionLevel_24() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____CompressionLevel_24)); }
	inline int32_t get__CompressionLevel_24() const { return ____CompressionLevel_24; }
	inline int32_t* get_address_of__CompressionLevel_24() { return &____CompressionLevel_24; }
	inline void set__CompressionLevel_24(int32_t value)
	{
		____CompressionLevel_24 = value;
	}

	inline static int32_t get_offset_of__Comment_25() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____Comment_25)); }
	inline String_t* get__Comment_25() const { return ____Comment_25; }
	inline String_t** get_address_of__Comment_25() { return &____Comment_25; }
	inline void set__Comment_25(String_t* value)
	{
		____Comment_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Comment_25), (void*)value);
	}

	inline static int32_t get_offset_of__IsDirectory_26() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____IsDirectory_26)); }
	inline bool get__IsDirectory_26() const { return ____IsDirectory_26; }
	inline bool* get_address_of__IsDirectory_26() { return &____IsDirectory_26; }
	inline void set__IsDirectory_26(bool value)
	{
		____IsDirectory_26 = value;
	}

	inline static int32_t get_offset_of__CommentBytes_27() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____CommentBytes_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__CommentBytes_27() const { return ____CommentBytes_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__CommentBytes_27() { return &____CommentBytes_27; }
	inline void set__CommentBytes_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____CommentBytes_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____CommentBytes_27), (void*)value);
	}

	inline static int32_t get_offset_of__CompressedSize_28() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____CompressedSize_28)); }
	inline int64_t get__CompressedSize_28() const { return ____CompressedSize_28; }
	inline int64_t* get_address_of__CompressedSize_28() { return &____CompressedSize_28; }
	inline void set__CompressedSize_28(int64_t value)
	{
		____CompressedSize_28 = value;
	}

	inline static int32_t get_offset_of__CompressedFileDataSize_29() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____CompressedFileDataSize_29)); }
	inline int64_t get__CompressedFileDataSize_29() const { return ____CompressedFileDataSize_29; }
	inline int64_t* get_address_of__CompressedFileDataSize_29() { return &____CompressedFileDataSize_29; }
	inline void set__CompressedFileDataSize_29(int64_t value)
	{
		____CompressedFileDataSize_29 = value;
	}

	inline static int32_t get_offset_of__UncompressedSize_30() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____UncompressedSize_30)); }
	inline int64_t get__UncompressedSize_30() const { return ____UncompressedSize_30; }
	inline int64_t* get_address_of__UncompressedSize_30() { return &____UncompressedSize_30; }
	inline void set__UncompressedSize_30(int64_t value)
	{
		____UncompressedSize_30 = value;
	}

	inline static int32_t get_offset_of__TimeBlob_31() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____TimeBlob_31)); }
	inline int32_t get__TimeBlob_31() const { return ____TimeBlob_31; }
	inline int32_t* get_address_of__TimeBlob_31() { return &____TimeBlob_31; }
	inline void set__TimeBlob_31(int32_t value)
	{
		____TimeBlob_31 = value;
	}

	inline static int32_t get_offset_of__crcCalculated_32() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____crcCalculated_32)); }
	inline bool get__crcCalculated_32() const { return ____crcCalculated_32; }
	inline bool* get_address_of__crcCalculated_32() { return &____crcCalculated_32; }
	inline void set__crcCalculated_32(bool value)
	{
		____crcCalculated_32 = value;
	}

	inline static int32_t get_offset_of__Crc32_33() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____Crc32_33)); }
	inline int32_t get__Crc32_33() const { return ____Crc32_33; }
	inline int32_t* get_address_of__Crc32_33() { return &____Crc32_33; }
	inline void set__Crc32_33(int32_t value)
	{
		____Crc32_33 = value;
	}

	inline static int32_t get_offset_of__Extra_34() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____Extra_34)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__Extra_34() const { return ____Extra_34; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__Extra_34() { return &____Extra_34; }
	inline void set__Extra_34(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____Extra_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Extra_34), (void*)value);
	}

	inline static int32_t get_offset_of__metadataChanged_35() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____metadataChanged_35)); }
	inline bool get__metadataChanged_35() const { return ____metadataChanged_35; }
	inline bool* get_address_of__metadataChanged_35() { return &____metadataChanged_35; }
	inline void set__metadataChanged_35(bool value)
	{
		____metadataChanged_35 = value;
	}

	inline static int32_t get_offset_of__restreamRequiredOnSave_36() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____restreamRequiredOnSave_36)); }
	inline bool get__restreamRequiredOnSave_36() const { return ____restreamRequiredOnSave_36; }
	inline bool* get_address_of__restreamRequiredOnSave_36() { return &____restreamRequiredOnSave_36; }
	inline void set__restreamRequiredOnSave_36(bool value)
	{
		____restreamRequiredOnSave_36 = value;
	}

	inline static int32_t get_offset_of__sourceIsEncrypted_37() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____sourceIsEncrypted_37)); }
	inline bool get__sourceIsEncrypted_37() const { return ____sourceIsEncrypted_37; }
	inline bool* get_address_of__sourceIsEncrypted_37() { return &____sourceIsEncrypted_37; }
	inline void set__sourceIsEncrypted_37(bool value)
	{
		____sourceIsEncrypted_37 = value;
	}

	inline static int32_t get_offset_of__skippedDuringSave_38() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____skippedDuringSave_38)); }
	inline bool get__skippedDuringSave_38() const { return ____skippedDuringSave_38; }
	inline bool* get_address_of__skippedDuringSave_38() { return &____skippedDuringSave_38; }
	inline void set__skippedDuringSave_38(bool value)
	{
		____skippedDuringSave_38 = value;
	}

	inline static int32_t get_offset_of__diskNumber_39() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____diskNumber_39)); }
	inline uint32_t get__diskNumber_39() const { return ____diskNumber_39; }
	inline uint32_t* get_address_of__diskNumber_39() { return &____diskNumber_39; }
	inline void set__diskNumber_39(uint32_t value)
	{
		____diskNumber_39 = value;
	}

	inline static int32_t get_offset_of__actualEncoding_41() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____actualEncoding_41)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__actualEncoding_41() const { return ____actualEncoding_41; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__actualEncoding_41() { return &____actualEncoding_41; }
	inline void set__actualEncoding_41(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____actualEncoding_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____actualEncoding_41), (void*)value);
	}

	inline static int32_t get_offset_of__container_42() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____container_42)); }
	inline ZipContainer_t7F1BF50F08858ADF2C7979A2BE953EB09EBC4E41 * get__container_42() const { return ____container_42; }
	inline ZipContainer_t7F1BF50F08858ADF2C7979A2BE953EB09EBC4E41 ** get_address_of__container_42() { return &____container_42; }
	inline void set__container_42(ZipContainer_t7F1BF50F08858ADF2C7979A2BE953EB09EBC4E41 * value)
	{
		____container_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____container_42), (void*)value);
	}

	inline static int32_t get_offset_of___FileDataPosition_43() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, _____FileDataPosition_43)); }
	inline int64_t get___FileDataPosition_43() const { return _____FileDataPosition_43; }
	inline int64_t* get_address_of___FileDataPosition_43() { return &_____FileDataPosition_43; }
	inline void set___FileDataPosition_43(int64_t value)
	{
		_____FileDataPosition_43 = value;
	}

	inline static int32_t get_offset_of__EntryHeader_44() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____EntryHeader_44)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__EntryHeader_44() const { return ____EntryHeader_44; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__EntryHeader_44() { return &____EntryHeader_44; }
	inline void set__EntryHeader_44(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____EntryHeader_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____EntryHeader_44), (void*)value);
	}

	inline static int32_t get_offset_of__RelativeOffsetOfLocalHeader_45() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____RelativeOffsetOfLocalHeader_45)); }
	inline int64_t get__RelativeOffsetOfLocalHeader_45() const { return ____RelativeOffsetOfLocalHeader_45; }
	inline int64_t* get_address_of__RelativeOffsetOfLocalHeader_45() { return &____RelativeOffsetOfLocalHeader_45; }
	inline void set__RelativeOffsetOfLocalHeader_45(int64_t value)
	{
		____RelativeOffsetOfLocalHeader_45 = value;
	}

	inline static int32_t get_offset_of__future_ROLH_46() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____future_ROLH_46)); }
	inline int64_t get__future_ROLH_46() const { return ____future_ROLH_46; }
	inline int64_t* get_address_of__future_ROLH_46() { return &____future_ROLH_46; }
	inline void set__future_ROLH_46(int64_t value)
	{
		____future_ROLH_46 = value;
	}

	inline static int32_t get_offset_of__TotalEntrySize_47() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____TotalEntrySize_47)); }
	inline int64_t get__TotalEntrySize_47() const { return ____TotalEntrySize_47; }
	inline int64_t* get_address_of__TotalEntrySize_47() { return &____TotalEntrySize_47; }
	inline void set__TotalEntrySize_47(int64_t value)
	{
		____TotalEntrySize_47 = value;
	}

	inline static int32_t get_offset_of__LengthOfHeader_48() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____LengthOfHeader_48)); }
	inline int32_t get__LengthOfHeader_48() const { return ____LengthOfHeader_48; }
	inline int32_t* get_address_of__LengthOfHeader_48() { return &____LengthOfHeader_48; }
	inline void set__LengthOfHeader_48(int32_t value)
	{
		____LengthOfHeader_48 = value;
	}

	inline static int32_t get_offset_of__LengthOfTrailer_49() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____LengthOfTrailer_49)); }
	inline int32_t get__LengthOfTrailer_49() const { return ____LengthOfTrailer_49; }
	inline int32_t* get_address_of__LengthOfTrailer_49() { return &____LengthOfTrailer_49; }
	inline void set__LengthOfTrailer_49(int32_t value)
	{
		____LengthOfTrailer_49 = value;
	}

	inline static int32_t get_offset_of__InputUsesZip64_50() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____InputUsesZip64_50)); }
	inline bool get__InputUsesZip64_50() const { return ____InputUsesZip64_50; }
	inline bool* get_address_of__InputUsesZip64_50() { return &____InputUsesZip64_50; }
	inline void set__InputUsesZip64_50(bool value)
	{
		____InputUsesZip64_50 = value;
	}

	inline static int32_t get_offset_of__UnsupportedAlgorithmId_51() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____UnsupportedAlgorithmId_51)); }
	inline uint32_t get__UnsupportedAlgorithmId_51() const { return ____UnsupportedAlgorithmId_51; }
	inline uint32_t* get_address_of__UnsupportedAlgorithmId_51() { return &____UnsupportedAlgorithmId_51; }
	inline void set__UnsupportedAlgorithmId_51(uint32_t value)
	{
		____UnsupportedAlgorithmId_51 = value;
	}

	inline static int32_t get_offset_of__Password_52() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____Password_52)); }
	inline String_t* get__Password_52() const { return ____Password_52; }
	inline String_t** get_address_of__Password_52() { return &____Password_52; }
	inline void set__Password_52(String_t* value)
	{
		____Password_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Password_52), (void*)value);
	}

	inline static int32_t get_offset_of__Source_53() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____Source_53)); }
	inline int32_t get__Source_53() const { return ____Source_53; }
	inline int32_t* get_address_of__Source_53() { return &____Source_53; }
	inline void set__Source_53(int32_t value)
	{
		____Source_53 = value;
	}

	inline static int32_t get_offset_of__Encryption_54() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____Encryption_54)); }
	inline int32_t get__Encryption_54() const { return ____Encryption_54; }
	inline int32_t* get_address_of__Encryption_54() { return &____Encryption_54; }
	inline void set__Encryption_54(int32_t value)
	{
		____Encryption_54 = value;
	}

	inline static int32_t get_offset_of__Encryption_FromZipFile_55() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____Encryption_FromZipFile_55)); }
	inline int32_t get__Encryption_FromZipFile_55() const { return ____Encryption_FromZipFile_55; }
	inline int32_t* get_address_of__Encryption_FromZipFile_55() { return &____Encryption_FromZipFile_55; }
	inline void set__Encryption_FromZipFile_55(int32_t value)
	{
		____Encryption_FromZipFile_55 = value;
	}

	inline static int32_t get_offset_of__WeakEncryptionHeader_56() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____WeakEncryptionHeader_56)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__WeakEncryptionHeader_56() const { return ____WeakEncryptionHeader_56; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__WeakEncryptionHeader_56() { return &____WeakEncryptionHeader_56; }
	inline void set__WeakEncryptionHeader_56(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____WeakEncryptionHeader_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WeakEncryptionHeader_56), (void*)value);
	}

	inline static int32_t get_offset_of__archiveStream_57() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____archiveStream_57)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__archiveStream_57() const { return ____archiveStream_57; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__archiveStream_57() { return &____archiveStream_57; }
	inline void set__archiveStream_57(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____archiveStream_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____archiveStream_57), (void*)value);
	}

	inline static int32_t get_offset_of__sourceStream_58() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____sourceStream_58)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__sourceStream_58() const { return ____sourceStream_58; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__sourceStream_58() { return &____sourceStream_58; }
	inline void set__sourceStream_58(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____sourceStream_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sourceStream_58), (void*)value);
	}

	inline static int32_t get_offset_of__sourceStreamOriginalPosition_59() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____sourceStreamOriginalPosition_59)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get__sourceStreamOriginalPosition_59() const { return ____sourceStreamOriginalPosition_59; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of__sourceStreamOriginalPosition_59() { return &____sourceStreamOriginalPosition_59; }
	inline void set__sourceStreamOriginalPosition_59(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		____sourceStreamOriginalPosition_59 = value;
	}

	inline static int32_t get_offset_of__ioOperationCanceled_60() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____ioOperationCanceled_60)); }
	inline bool get__ioOperationCanceled_60() const { return ____ioOperationCanceled_60; }
	inline bool* get_address_of__ioOperationCanceled_60() { return &____ioOperationCanceled_60; }
	inline void set__ioOperationCanceled_60(bool value)
	{
		____ioOperationCanceled_60 = value;
	}

	inline static int32_t get_offset_of__presumeZip64_61() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____presumeZip64_61)); }
	inline bool get__presumeZip64_61() const { return ____presumeZip64_61; }
	inline bool* get_address_of__presumeZip64_61() { return &____presumeZip64_61; }
	inline void set__presumeZip64_61(bool value)
	{
		____presumeZip64_61 = value;
	}

	inline static int32_t get_offset_of__entryRequiresZip64_62() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____entryRequiresZip64_62)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get__entryRequiresZip64_62() const { return ____entryRequiresZip64_62; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of__entryRequiresZip64_62() { return &____entryRequiresZip64_62; }
	inline void set__entryRequiresZip64_62(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		____entryRequiresZip64_62 = value;
	}

	inline static int32_t get_offset_of__OutputUsesZip64_63() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____OutputUsesZip64_63)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get__OutputUsesZip64_63() const { return ____OutputUsesZip64_63; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of__OutputUsesZip64_63() { return &____OutputUsesZip64_63; }
	inline void set__OutputUsesZip64_63(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		____OutputUsesZip64_63 = value;
	}

	inline static int32_t get_offset_of__IsText_64() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____IsText_64)); }
	inline bool get__IsText_64() const { return ____IsText_64; }
	inline bool* get_address_of__IsText_64() { return &____IsText_64; }
	inline void set__IsText_64(bool value)
	{
		____IsText_64 = value;
	}

	inline static int32_t get_offset_of__timestamp_65() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____timestamp_65)); }
	inline int32_t get__timestamp_65() const { return ____timestamp_65; }
	inline int32_t* get_address_of__timestamp_65() { return &____timestamp_65; }
	inline void set__timestamp_65(int32_t value)
	{
		____timestamp_65 = value;
	}

	inline static int32_t get_offset_of__WriteDelegate_69() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____WriteDelegate_69)); }
	inline WriteDelegate_t677A3857696D3DC5B0EEA8FF57EFE7BC77C9F724 * get__WriteDelegate_69() const { return ____WriteDelegate_69; }
	inline WriteDelegate_t677A3857696D3DC5B0EEA8FF57EFE7BC77C9F724 ** get_address_of__WriteDelegate_69() { return &____WriteDelegate_69; }
	inline void set__WriteDelegate_69(WriteDelegate_t677A3857696D3DC5B0EEA8FF57EFE7BC77C9F724 * value)
	{
		____WriteDelegate_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteDelegate_69), (void*)value);
	}

	inline static int32_t get_offset_of__OpenDelegate_70() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____OpenDelegate_70)); }
	inline OpenDelegate_t4FD73AF931B565F95888C2D3FE60F83302DC0B3E * get__OpenDelegate_70() const { return ____OpenDelegate_70; }
	inline OpenDelegate_t4FD73AF931B565F95888C2D3FE60F83302DC0B3E ** get_address_of__OpenDelegate_70() { return &____OpenDelegate_70; }
	inline void set__OpenDelegate_70(OpenDelegate_t4FD73AF931B565F95888C2D3FE60F83302DC0B3E * value)
	{
		____OpenDelegate_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____OpenDelegate_70), (void*)value);
	}

	inline static int32_t get_offset_of__CloseDelegate_71() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ____CloseDelegate_71)); }
	inline CloseDelegate_t197F69FB43210433EE489E0E6040E388F16FD992 * get__CloseDelegate_71() const { return ____CloseDelegate_71; }
	inline CloseDelegate_t197F69FB43210433EE489E0E6040E388F16FD992 ** get_address_of__CloseDelegate_71() { return &____CloseDelegate_71; }
	inline void set__CloseDelegate_71(CloseDelegate_t197F69FB43210433EE489E0E6040E388F16FD992 * value)
	{
		____CloseDelegate_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____CloseDelegate_71), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtractExistingFileU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ___U3CExtractExistingFileU3Ek__BackingField_72)); }
	inline int32_t get_U3CExtractExistingFileU3Ek__BackingField_72() const { return ___U3CExtractExistingFileU3Ek__BackingField_72; }
	inline int32_t* get_address_of_U3CExtractExistingFileU3Ek__BackingField_72() { return &___U3CExtractExistingFileU3Ek__BackingField_72; }
	inline void set_U3CExtractExistingFileU3Ek__BackingField_72(int32_t value)
	{
		___U3CExtractExistingFileU3Ek__BackingField_72 = value;
	}

	inline static int32_t get_offset_of_U3CZipErrorActionU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ___U3CZipErrorActionU3Ek__BackingField_73)); }
	inline int32_t get_U3CZipErrorActionU3Ek__BackingField_73() const { return ___U3CZipErrorActionU3Ek__BackingField_73; }
	inline int32_t* get_address_of_U3CZipErrorActionU3Ek__BackingField_73() { return &___U3CZipErrorActionU3Ek__BackingField_73; }
	inline void set_U3CZipErrorActionU3Ek__BackingField_73(int32_t value)
	{
		___U3CZipErrorActionU3Ek__BackingField_73 = value;
	}

	inline static int32_t get_offset_of_U3CSetCompressionU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ___U3CSetCompressionU3Ek__BackingField_74)); }
	inline SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01 * get_U3CSetCompressionU3Ek__BackingField_74() const { return ___U3CSetCompressionU3Ek__BackingField_74; }
	inline SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01 ** get_address_of_U3CSetCompressionU3Ek__BackingField_74() { return &___U3CSetCompressionU3Ek__BackingField_74; }
	inline void set_U3CSetCompressionU3Ek__BackingField_74(SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01 * value)
	{
		___U3CSetCompressionU3Ek__BackingField_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSetCompressionU3Ek__BackingField_74), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAlternateEncodingU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ___U3CAlternateEncodingU3Ek__BackingField_75)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_U3CAlternateEncodingU3Ek__BackingField_75() const { return ___U3CAlternateEncodingU3Ek__BackingField_75; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_U3CAlternateEncodingU3Ek__BackingField_75() { return &___U3CAlternateEncodingU3Ek__BackingField_75; }
	inline void set_U3CAlternateEncodingU3Ek__BackingField_75(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___U3CAlternateEncodingU3Ek__BackingField_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAlternateEncodingU3Ek__BackingField_75), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAlternateEncodingUsageU3Ek__BackingField_76() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D, ___U3CAlternateEncodingUsageU3Ek__BackingField_76)); }
	inline int32_t get_U3CAlternateEncodingUsageU3Ek__BackingField_76() const { return ___U3CAlternateEncodingUsageU3Ek__BackingField_76; }
	inline int32_t* get_address_of_U3CAlternateEncodingUsageU3Ek__BackingField_76() { return &___U3CAlternateEncodingUsageU3Ek__BackingField_76; }
	inline void set_U3CAlternateEncodingUsageU3Ek__BackingField_76(int32_t value)
	{
		___U3CAlternateEncodingUsageU3Ek__BackingField_76 = value;
	}
};

struct ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D_StaticFields
{
public:
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::ibm437
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___ibm437_40;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_unixEpoch
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____unixEpoch_66;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_win32Epoch
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____win32Epoch_67;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_zeroHour
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____zeroHour_68;

public:
	inline static int32_t get_offset_of_ibm437_40() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D_StaticFields, ___ibm437_40)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_ibm437_40() const { return ___ibm437_40; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_ibm437_40() { return &___ibm437_40; }
	inline void set_ibm437_40(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___ibm437_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ibm437_40), (void*)value);
	}

	inline static int32_t get_offset_of__unixEpoch_66() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D_StaticFields, ____unixEpoch_66)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__unixEpoch_66() const { return ____unixEpoch_66; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__unixEpoch_66() { return &____unixEpoch_66; }
	inline void set__unixEpoch_66(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____unixEpoch_66 = value;
	}

	inline static int32_t get_offset_of__win32Epoch_67() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D_StaticFields, ____win32Epoch_67)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__win32Epoch_67() const { return ____win32Epoch_67; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__win32Epoch_67() { return &____win32Epoch_67; }
	inline void set__win32Epoch_67(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____win32Epoch_67 = value;
	}

	inline static int32_t get_offset_of__zeroHour_68() { return static_cast<int32_t>(offsetof(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D_StaticFields, ____zeroHour_68)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__zeroHour_68() const { return ____zeroHour_68; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__zeroHour_68() { return &____zeroHour_68; }
	inline void set__zeroHour_68(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____zeroHour_68 = value;
	}
};


// Pathfinding.Ionic.Zip.ZipException
struct ZipException_t556A13023BFC2A9CF345731D3D7FACFC435B960F  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};


// Pathfinding.Ionic.Zip.ZipProgressEventArgs
struct ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipProgressEventArgs::_entriesTotal
	int32_t ____entriesTotal_1;
	// System.Boolean Pathfinding.Ionic.Zip.ZipProgressEventArgs::_cancel
	bool ____cancel_2;
	// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipProgressEventArgs::_latestEntry
	ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * ____latestEntry_3;
	// Pathfinding.Ionic.Zip.ZipProgressEventType Pathfinding.Ionic.Zip.ZipProgressEventArgs::_flavor
	int32_t ____flavor_4;
	// System.String Pathfinding.Ionic.Zip.ZipProgressEventArgs::_archiveName
	String_t* ____archiveName_5;
	// System.Int64 Pathfinding.Ionic.Zip.ZipProgressEventArgs::_bytesTransferred
	int64_t ____bytesTransferred_6;
	// System.Int64 Pathfinding.Ionic.Zip.ZipProgressEventArgs::_totalBytesToTransfer
	int64_t ____totalBytesToTransfer_7;

public:
	inline static int32_t get_offset_of__entriesTotal_1() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861, ____entriesTotal_1)); }
	inline int32_t get__entriesTotal_1() const { return ____entriesTotal_1; }
	inline int32_t* get_address_of__entriesTotal_1() { return &____entriesTotal_1; }
	inline void set__entriesTotal_1(int32_t value)
	{
		____entriesTotal_1 = value;
	}

	inline static int32_t get_offset_of__cancel_2() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861, ____cancel_2)); }
	inline bool get__cancel_2() const { return ____cancel_2; }
	inline bool* get_address_of__cancel_2() { return &____cancel_2; }
	inline void set__cancel_2(bool value)
	{
		____cancel_2 = value;
	}

	inline static int32_t get_offset_of__latestEntry_3() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861, ____latestEntry_3)); }
	inline ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * get__latestEntry_3() const { return ____latestEntry_3; }
	inline ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D ** get_address_of__latestEntry_3() { return &____latestEntry_3; }
	inline void set__latestEntry_3(ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * value)
	{
		____latestEntry_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____latestEntry_3), (void*)value);
	}

	inline static int32_t get_offset_of__flavor_4() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861, ____flavor_4)); }
	inline int32_t get__flavor_4() const { return ____flavor_4; }
	inline int32_t* get_address_of__flavor_4() { return &____flavor_4; }
	inline void set__flavor_4(int32_t value)
	{
		____flavor_4 = value;
	}

	inline static int32_t get_offset_of__archiveName_5() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861, ____archiveName_5)); }
	inline String_t* get__archiveName_5() const { return ____archiveName_5; }
	inline String_t** get_address_of__archiveName_5() { return &____archiveName_5; }
	inline void set__archiveName_5(String_t* value)
	{
		____archiveName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____archiveName_5), (void*)value);
	}

	inline static int32_t get_offset_of__bytesTransferred_6() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861, ____bytesTransferred_6)); }
	inline int64_t get__bytesTransferred_6() const { return ____bytesTransferred_6; }
	inline int64_t* get_address_of__bytesTransferred_6() { return &____bytesTransferred_6; }
	inline void set__bytesTransferred_6(int64_t value)
	{
		____bytesTransferred_6 = value;
	}

	inline static int32_t get_offset_of__totalBytesToTransfer_7() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861, ____totalBytesToTransfer_7)); }
	inline int64_t get__totalBytesToTransfer_7() const { return ____totalBytesToTransfer_7; }
	inline int64_t* get_address_of__totalBytesToTransfer_7() { return &____totalBytesToTransfer_7; }
	inline void set__totalBytesToTransfer_7(int64_t value)
	{
		____totalBytesToTransfer_7 = value;
	}
};


// Pathfinding.Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.ZlibBaseStream::_z
	ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ____z_4;
	// Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Pathfinding.Ionic.Zlib.ZlibBaseStream::_streamMode
	int32_t ____streamMode_5;
	// Pathfinding.Ionic.Zlib.FlushType Pathfinding.Ionic.Zlib.ZlibBaseStream::_flushMode
	int32_t ____flushMode_6;
	// Pathfinding.Ionic.Zlib.ZlibStreamFlavor Pathfinding.Ionic.Zlib.ZlibBaseStream::_flavor
	int32_t ____flavor_7;
	// Pathfinding.Ionic.Zlib.CompressionMode Pathfinding.Ionic.Zlib.ZlibBaseStream::_compressionMode
	int32_t ____compressionMode_8;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ZlibBaseStream::_level
	int32_t ____level_9;
	// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::_leaveOpen
	bool ____leaveOpen_10;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::_workingBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____workingBuffer_11;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_bufferSize
	int32_t ____bufferSize_12;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::_buf1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buf1_13;
	// System.IO.Stream Pathfinding.Ionic.Zlib.ZlibBaseStream::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_14;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ZlibBaseStream::Strategy
	int32_t ___Strategy_15;
	// Pathfinding.Ionic.Crc.CRC32 Pathfinding.Ionic.Zlib.ZlibBaseStream::crc
	CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * ___crc_16;
	// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipFileName
	String_t* ____GzipFileName_17;
	// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipComment
	String_t* ____GzipComment_18;
	// System.DateTime Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipMtime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____GzipMtime_19;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_gzipHeaderByteCount
	int32_t ____gzipHeaderByteCount_20;
	// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::nomoreinput
	bool ___nomoreinput_21;

public:
	inline static int32_t get_offset_of__z_4() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____z_4)); }
	inline ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * get__z_4() const { return ____z_4; }
	inline ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 ** get_address_of__z_4() { return &____z_4; }
	inline void set__z_4(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * value)
	{
		____z_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____z_4), (void*)value);
	}

	inline static int32_t get_offset_of__streamMode_5() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____streamMode_5)); }
	inline int32_t get__streamMode_5() const { return ____streamMode_5; }
	inline int32_t* get_address_of__streamMode_5() { return &____streamMode_5; }
	inline void set__streamMode_5(int32_t value)
	{
		____streamMode_5 = value;
	}

	inline static int32_t get_offset_of__flushMode_6() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____flushMode_6)); }
	inline int32_t get__flushMode_6() const { return ____flushMode_6; }
	inline int32_t* get_address_of__flushMode_6() { return &____flushMode_6; }
	inline void set__flushMode_6(int32_t value)
	{
		____flushMode_6 = value;
	}

	inline static int32_t get_offset_of__flavor_7() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____flavor_7)); }
	inline int32_t get__flavor_7() const { return ____flavor_7; }
	inline int32_t* get_address_of__flavor_7() { return &____flavor_7; }
	inline void set__flavor_7(int32_t value)
	{
		____flavor_7 = value;
	}

	inline static int32_t get_offset_of__compressionMode_8() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____compressionMode_8)); }
	inline int32_t get__compressionMode_8() const { return ____compressionMode_8; }
	inline int32_t* get_address_of__compressionMode_8() { return &____compressionMode_8; }
	inline void set__compressionMode_8(int32_t value)
	{
		____compressionMode_8 = value;
	}

	inline static int32_t get_offset_of__level_9() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____level_9)); }
	inline int32_t get__level_9() const { return ____level_9; }
	inline int32_t* get_address_of__level_9() { return &____level_9; }
	inline void set__level_9(int32_t value)
	{
		____level_9 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_10() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____leaveOpen_10)); }
	inline bool get__leaveOpen_10() const { return ____leaveOpen_10; }
	inline bool* get_address_of__leaveOpen_10() { return &____leaveOpen_10; }
	inline void set__leaveOpen_10(bool value)
	{
		____leaveOpen_10 = value;
	}

	inline static int32_t get_offset_of__workingBuffer_11() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____workingBuffer_11)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__workingBuffer_11() const { return ____workingBuffer_11; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__workingBuffer_11() { return &____workingBuffer_11; }
	inline void set__workingBuffer_11(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____workingBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____workingBuffer_11), (void*)value);
	}

	inline static int32_t get_offset_of__bufferSize_12() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____bufferSize_12)); }
	inline int32_t get__bufferSize_12() const { return ____bufferSize_12; }
	inline int32_t* get_address_of__bufferSize_12() { return &____bufferSize_12; }
	inline void set__bufferSize_12(int32_t value)
	{
		____bufferSize_12 = value;
	}

	inline static int32_t get_offset_of__buf1_13() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____buf1_13)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buf1_13() const { return ____buf1_13; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buf1_13() { return &____buf1_13; }
	inline void set__buf1_13(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buf1_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buf1_13), (void*)value);
	}

	inline static int32_t get_offset_of__stream_14() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____stream_14)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_14() const { return ____stream_14; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_14() { return &____stream_14; }
	inline void set__stream_14(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_14), (void*)value);
	}

	inline static int32_t get_offset_of_Strategy_15() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ___Strategy_15)); }
	inline int32_t get_Strategy_15() const { return ___Strategy_15; }
	inline int32_t* get_address_of_Strategy_15() { return &___Strategy_15; }
	inline void set_Strategy_15(int32_t value)
	{
		___Strategy_15 = value;
	}

	inline static int32_t get_offset_of_crc_16() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ___crc_16)); }
	inline CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * get_crc_16() const { return ___crc_16; }
	inline CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C ** get_address_of_crc_16() { return &___crc_16; }
	inline void set_crc_16(CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * value)
	{
		___crc_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crc_16), (void*)value);
	}

	inline static int32_t get_offset_of__GzipFileName_17() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____GzipFileName_17)); }
	inline String_t* get__GzipFileName_17() const { return ____GzipFileName_17; }
	inline String_t** get_address_of__GzipFileName_17() { return &____GzipFileName_17; }
	inline void set__GzipFileName_17(String_t* value)
	{
		____GzipFileName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____GzipFileName_17), (void*)value);
	}

	inline static int32_t get_offset_of__GzipComment_18() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____GzipComment_18)); }
	inline String_t* get__GzipComment_18() const { return ____GzipComment_18; }
	inline String_t** get_address_of__GzipComment_18() { return &____GzipComment_18; }
	inline void set__GzipComment_18(String_t* value)
	{
		____GzipComment_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____GzipComment_18), (void*)value);
	}

	inline static int32_t get_offset_of__GzipMtime_19() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____GzipMtime_19)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__GzipMtime_19() const { return ____GzipMtime_19; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__GzipMtime_19() { return &____GzipMtime_19; }
	inline void set__GzipMtime_19(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____GzipMtime_19 = value;
	}

	inline static int32_t get_offset_of__gzipHeaderByteCount_20() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ____gzipHeaderByteCount_20)); }
	inline int32_t get__gzipHeaderByteCount_20() const { return ____gzipHeaderByteCount_20; }
	inline int32_t* get_address_of__gzipHeaderByteCount_20() { return &____gzipHeaderByteCount_20; }
	inline void set__gzipHeaderByteCount_20(int32_t value)
	{
		____gzipHeaderByteCount_20 = value;
	}

	inline static int32_t get_offset_of_nomoreinput_21() { return static_cast<int32_t>(offsetof(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56, ___nomoreinput_21)); }
	inline bool get_nomoreinput_21() const { return ___nomoreinput_21; }
	inline bool* get_address_of_nomoreinput_21() { return &___nomoreinput_21; }
	inline void set_nomoreinput_21(bool value)
	{
		___nomoreinput_21 = value;
	}
};


// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibCodec::InputBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___InputBuffer_0;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::NextIn
	int32_t ___NextIn_1;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::AvailableBytesIn
	int32_t ___AvailableBytesIn_2;
	// System.Int64 Pathfinding.Ionic.Zlib.ZlibCodec::TotalBytesIn
	int64_t ___TotalBytesIn_3;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibCodec::OutputBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___OutputBuffer_4;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::NextOut
	int32_t ___NextOut_5;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::AvailableBytesOut
	int32_t ___AvailableBytesOut_6;
	// System.Int64 Pathfinding.Ionic.Zlib.ZlibCodec::TotalBytesOut
	int64_t ___TotalBytesOut_7;
	// System.String Pathfinding.Ionic.Zlib.ZlibCodec::Message
	String_t* ___Message_8;
	// Pathfinding.Ionic.Zlib.DeflateManager Pathfinding.Ionic.Zlib.ZlibCodec::dstate
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * ___dstate_9;
	// Pathfinding.Ionic.Zlib.InflateManager Pathfinding.Ionic.Zlib.ZlibCodec::istate
	InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * ___istate_10;
	// System.UInt32 Pathfinding.Ionic.Zlib.ZlibCodec::_Adler32
	uint32_t ____Adler32_11;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ZlibCodec::CompressLevel
	int32_t ___CompressLevel_12;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::WindowBits
	int32_t ___WindowBits_13;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ZlibCodec::Strategy
	int32_t ___Strategy_14;

public:
	inline static int32_t get_offset_of_InputBuffer_0() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___InputBuffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_InputBuffer_0() const { return ___InputBuffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_InputBuffer_0() { return &___InputBuffer_0; }
	inline void set_InputBuffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___InputBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputBuffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_NextIn_1() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___NextIn_1)); }
	inline int32_t get_NextIn_1() const { return ___NextIn_1; }
	inline int32_t* get_address_of_NextIn_1() { return &___NextIn_1; }
	inline void set_NextIn_1(int32_t value)
	{
		___NextIn_1 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesIn_2() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___AvailableBytesIn_2)); }
	inline int32_t get_AvailableBytesIn_2() const { return ___AvailableBytesIn_2; }
	inline int32_t* get_address_of_AvailableBytesIn_2() { return &___AvailableBytesIn_2; }
	inline void set_AvailableBytesIn_2(int32_t value)
	{
		___AvailableBytesIn_2 = value;
	}

	inline static int32_t get_offset_of_TotalBytesIn_3() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___TotalBytesIn_3)); }
	inline int64_t get_TotalBytesIn_3() const { return ___TotalBytesIn_3; }
	inline int64_t* get_address_of_TotalBytesIn_3() { return &___TotalBytesIn_3; }
	inline void set_TotalBytesIn_3(int64_t value)
	{
		___TotalBytesIn_3 = value;
	}

	inline static int32_t get_offset_of_OutputBuffer_4() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___OutputBuffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_OutputBuffer_4() const { return ___OutputBuffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_OutputBuffer_4() { return &___OutputBuffer_4; }
	inline void set_OutputBuffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___OutputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutputBuffer_4), (void*)value);
	}

	inline static int32_t get_offset_of_NextOut_5() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___NextOut_5)); }
	inline int32_t get_NextOut_5() const { return ___NextOut_5; }
	inline int32_t* get_address_of_NextOut_5() { return &___NextOut_5; }
	inline void set_NextOut_5(int32_t value)
	{
		___NextOut_5 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesOut_6() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___AvailableBytesOut_6)); }
	inline int32_t get_AvailableBytesOut_6() const { return ___AvailableBytesOut_6; }
	inline int32_t* get_address_of_AvailableBytesOut_6() { return &___AvailableBytesOut_6; }
	inline void set_AvailableBytesOut_6(int32_t value)
	{
		___AvailableBytesOut_6 = value;
	}

	inline static int32_t get_offset_of_TotalBytesOut_7() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___TotalBytesOut_7)); }
	inline int64_t get_TotalBytesOut_7() const { return ___TotalBytesOut_7; }
	inline int64_t* get_address_of_TotalBytesOut_7() { return &___TotalBytesOut_7; }
	inline void set_TotalBytesOut_7(int64_t value)
	{
		___TotalBytesOut_7 = value;
	}

	inline static int32_t get_offset_of_Message_8() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___Message_8)); }
	inline String_t* get_Message_8() const { return ___Message_8; }
	inline String_t** get_address_of_Message_8() { return &___Message_8; }
	inline void set_Message_8(String_t* value)
	{
		___Message_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_8), (void*)value);
	}

	inline static int32_t get_offset_of_dstate_9() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___dstate_9)); }
	inline DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * get_dstate_9() const { return ___dstate_9; }
	inline DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF ** get_address_of_dstate_9() { return &___dstate_9; }
	inline void set_dstate_9(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * value)
	{
		___dstate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dstate_9), (void*)value);
	}

	inline static int32_t get_offset_of_istate_10() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___istate_10)); }
	inline InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * get_istate_10() const { return ___istate_10; }
	inline InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 ** get_address_of_istate_10() { return &___istate_10; }
	inline void set_istate_10(InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * value)
	{
		___istate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___istate_10), (void*)value);
	}

	inline static int32_t get_offset_of__Adler32_11() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ____Adler32_11)); }
	inline uint32_t get__Adler32_11() const { return ____Adler32_11; }
	inline uint32_t* get_address_of__Adler32_11() { return &____Adler32_11; }
	inline void set__Adler32_11(uint32_t value)
	{
		____Adler32_11 = value;
	}

	inline static int32_t get_offset_of_CompressLevel_12() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___CompressLevel_12)); }
	inline int32_t get_CompressLevel_12() const { return ___CompressLevel_12; }
	inline int32_t* get_address_of_CompressLevel_12() { return &___CompressLevel_12; }
	inline void set_CompressLevel_12(int32_t value)
	{
		___CompressLevel_12 = value;
	}

	inline static int32_t get_offset_of_WindowBits_13() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___WindowBits_13)); }
	inline int32_t get_WindowBits_13() const { return ___WindowBits_13; }
	inline int32_t* get_address_of_WindowBits_13() { return &___WindowBits_13; }
	inline void set_WindowBits_13(int32_t value)
	{
		___WindowBits_13 = value;
	}

	inline static int32_t get_offset_of_Strategy_14() { return static_cast<int32_t>(offsetof(ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27, ___Strategy_14)); }
	inline int32_t get_Strategy_14() const { return ___Strategy_14; }
	inline int32_t* get_address_of_Strategy_14() { return &___Strategy_14; }
	inline void set_Strategy_14(int32_t value)
	{
		___Strategy_14 = value;
	}
};


// Pathfinding.Ionic.Zlib.ZlibException
struct ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};


// Pathfinding.Ionic.Zlib.DeflateManager/Config
struct Config_tC68F920487AC05FF8321319B93D3B73EEF943750  : public RuntimeObject
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager/Config::GoodLength
	int32_t ___GoodLength_0;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager/Config::MaxLazy
	int32_t ___MaxLazy_1;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager/Config::NiceLength
	int32_t ___NiceLength_2;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager/Config::MaxChainLength
	int32_t ___MaxChainLength_3;
	// Pathfinding.Ionic.Zlib.DeflateFlavor Pathfinding.Ionic.Zlib.DeflateManager/Config::Flavor
	int32_t ___Flavor_4;

public:
	inline static int32_t get_offset_of_GoodLength_0() { return static_cast<int32_t>(offsetof(Config_tC68F920487AC05FF8321319B93D3B73EEF943750, ___GoodLength_0)); }
	inline int32_t get_GoodLength_0() const { return ___GoodLength_0; }
	inline int32_t* get_address_of_GoodLength_0() { return &___GoodLength_0; }
	inline void set_GoodLength_0(int32_t value)
	{
		___GoodLength_0 = value;
	}

	inline static int32_t get_offset_of_MaxLazy_1() { return static_cast<int32_t>(offsetof(Config_tC68F920487AC05FF8321319B93D3B73EEF943750, ___MaxLazy_1)); }
	inline int32_t get_MaxLazy_1() const { return ___MaxLazy_1; }
	inline int32_t* get_address_of_MaxLazy_1() { return &___MaxLazy_1; }
	inline void set_MaxLazy_1(int32_t value)
	{
		___MaxLazy_1 = value;
	}

	inline static int32_t get_offset_of_NiceLength_2() { return static_cast<int32_t>(offsetof(Config_tC68F920487AC05FF8321319B93D3B73EEF943750, ___NiceLength_2)); }
	inline int32_t get_NiceLength_2() const { return ___NiceLength_2; }
	inline int32_t* get_address_of_NiceLength_2() { return &___NiceLength_2; }
	inline void set_NiceLength_2(int32_t value)
	{
		___NiceLength_2 = value;
	}

	inline static int32_t get_offset_of_MaxChainLength_3() { return static_cast<int32_t>(offsetof(Config_tC68F920487AC05FF8321319B93D3B73EEF943750, ___MaxChainLength_3)); }
	inline int32_t get_MaxChainLength_3() const { return ___MaxChainLength_3; }
	inline int32_t* get_address_of_MaxChainLength_3() { return &___MaxChainLength_3; }
	inline void set_MaxChainLength_3(int32_t value)
	{
		___MaxChainLength_3 = value;
	}

	inline static int32_t get_offset_of_Flavor_4() { return static_cast<int32_t>(offsetof(Config_tC68F920487AC05FF8321319B93D3B73EEF943750, ___Flavor_4)); }
	inline int32_t get_Flavor_4() const { return ___Flavor_4; }
	inline int32_t* get_address_of_Flavor_4() { return &___Flavor_4; }
	inline void set_Flavor_4(int32_t value)
	{
		___Flavor_4 = value;
	}
};

struct Config_tC68F920487AC05FF8321319B93D3B73EEF943750_StaticFields
{
public:
	// Pathfinding.Ionic.Zlib.DeflateManager/Config[] Pathfinding.Ionic.Zlib.DeflateManager/Config::Table
	ConfigU5BU5D_tA9AE536A92C9A0005D7F15D8390061A901FEE50F* ___Table_5;

public:
	inline static int32_t get_offset_of_Table_5() { return static_cast<int32_t>(offsetof(Config_tC68F920487AC05FF8321319B93D3B73EEF943750_StaticFields, ___Table_5)); }
	inline ConfigU5BU5D_tA9AE536A92C9A0005D7F15D8390061A901FEE50F* get_Table_5() const { return ___Table_5; }
	inline ConfigU5BU5D_tA9AE536A92C9A0005D7F15D8390061A901FEE50F** get_address_of_Table_5() { return &___Table_5; }
	inline void set_Table_5(ConfigU5BU5D_tA9AE536A92C9A0005D7F15D8390061A901FEE50F* value)
	{
		___Table_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Table_5), (void*)value);
	}
};


// Pathfinding.Ionic.Zip.AddProgressEventArgs
struct AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9  : public ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Pathfinding.Ionic.Zip.BadCrcException
struct BadCrcException_t0D22C7711389274B7E523CD05751C94751048F24  : public ZipException_t556A13023BFC2A9CF345731D3D7FACFC435B960F
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};


// Pathfinding.Ionic.Zip.BadPasswordException
struct BadPasswordException_t144E72EEB37B9C4FB1AAA9ECBF6E8A145F71C960  : public ZipException_t556A13023BFC2A9CF345731D3D7FACFC435B960F
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};


// Pathfinding.Ionic.Zip.BadReadException
struct BadReadException_t0071DB16D260B1C7EE8CE63483D2B985E0369038  : public ZipException_t556A13023BFC2A9CF345731D3D7FACFC435B960F
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};


// Pathfinding.Ionic.Zip.BadStateException
struct BadStateException_tEA711E725F0B46CBC5EDC38F6FF00DDC39925434  : public ZipException_t556A13023BFC2A9CF345731D3D7FACFC435B960F
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};


// Pathfinding.Ionic.Zip.CloseDelegate
struct CloseDelegate_t197F69FB43210433EE489E0E6040E388F16FD992  : public MulticastDelegate_t
{
public:

public:
};


// Pathfinding.Ionic.Zip.ExtractProgressEventArgs
struct ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C  : public ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861
{
public:
	// System.String Pathfinding.Ionic.Zip.ExtractProgressEventArgs::_target
	String_t* ____target_8;

public:
	inline static int32_t get_offset_of__target_8() { return static_cast<int32_t>(offsetof(ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C, ____target_8)); }
	inline String_t* get__target_8() const { return ____target_8; }
	inline String_t** get_address_of__target_8() { return &____target_8; }
	inline void set__target_8(String_t* value)
	{
		____target_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____target_8), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc
struct CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E  : public MulticastDelegate_t
{
public:

public:
};


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
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
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
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
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* m_Items[1];

public:
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_gshared_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.DateTime>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_gshared (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method);

// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipProgressEventArgs__ctor_m09D67B6E0D0EFC521631A2D390054CBECDAE427A (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, String_t* ___archiveName0, int32_t ___flavor1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.AddProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddProgressEventArgs__ctor_m6EDD9B6CF9D1AE498C3EDF158AFC412CA3DE7EB1 (AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9 * __this, String_t* ___archiveName0, int32_t ___flavor1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_EntriesTotal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipProgressEventArgs_set_EntriesTotal_m9B759F9F81234EA5857012D0DAB667AFD7AC222C_inline (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_CurrentEntry(Pathfinding.Ionic.Zip.ZipEntry)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipProgressEventArgs_set_CurrentEntry_m696C96599ED44B6BD426D880ED02F552E5568F74_inline (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.ZipException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipException__ctor_m21B7AF6A0060611E9347F3644166A2E571468D72 (ZipException_t556A13023BFC2A9CF345731D3D7FACFC435B960F * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.ZipException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipException__ctor_m3DA0B41E11974AE8D04B9484D84B18C4371114B6 (ZipException_t556A13023BFC2A9CF345731D3D7FACFC435B960F * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.ZipException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipException__ctor_mB7ACFF60E9E393FA073AE00D10E9F8C0518E778A (ZipException_t556A13023BFC2A9CF345731D3D7FACFC435B960F * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Crc.CRC32::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32__ctor_m3C875D097ABC9FA2BE83EBBBF28D3EB8894EE208 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, bool ___reverseBits0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Crc.CRC32::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32__ctor_m310D8107ABAC07EA0AA895A8E1784F7D46D97091 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, int32_t ___polynomial0, bool ___reverseBits1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Crc.CRC32::GenerateLookupTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32_GenerateLookupTable_m2B09D8A3D820A303498BC942265FC04425E68A62 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Crc.CRC32::GetCrc32AndCopy(System.IO.Stream,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRC32_GetCrc32AndCopy_mE59DCE5DA155878951536A398C7F96A5A9F5B0EE (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___output1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Crc.CRC32::SlurpBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32_SlurpBlock_mB193D4D19FA19A265050E35AF1503FE420F9F841 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___block0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Crc.CRC32::_InternalComputeCrc32(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRC32__InternalComputeCrc32_mA9DFD19438BA814BE2218EFA1C9C00CEF84DD812 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, uint32_t ___W0, uint8_t ___B1, const RuntimeMethod* method);
// System.Byte Pathfinding.Ionic.Crc.CRC32::ReverseBits(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CRC32_ReverseBits_mB5E00B6E6DFA31C1923626947E17C77179BB25DF (uint8_t ___data0, const RuntimeMethod* method);
// System.UInt32 Pathfinding.Ionic.Crc.CRC32::ReverseBits(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32_ReverseBits_m8411B687DD0513309D97820D0EAE9458CF2B5398 (uint32_t ___data0, const RuntimeMethod* method);
// System.UInt32 Pathfinding.Ionic.Crc.CRC32::gf2_matrix_times(System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32_gf2_matrix_times_m5AA03D4B4C94917E7561C57CEDF1A7A1DE0FC5DE (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___matrix0, uint32_t ___vec1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Crc.CRC32::gf2_matrix_square(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32_gf2_matrix_square_mA9A170E6E375656FFE6DC703052F67C8B0C55617 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___square0, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___mat1, const RuntimeMethod* method);
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96 (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.CountingStream::Adjust(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingStream_Adjust_m32D38833594F06256EA99DC32B437BEC51F12659 (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, int64_t ___delta0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.ctor(System.Boolean,System.Int64,System.IO.Stream,Pathfinding.Ionic.Crc.CRC32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrcCalculatorStream__ctor_mD119210BC68E3AEFD9B994A7DBBEAC8E4D362FC8 (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, bool ___leaveOpen0, int64_t ___length1, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream2, CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * ___crc323, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Crc.CRC32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32__ctor_m85498FAB02F5AC7119BC0D090DCD22ED6E0EE802 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, const RuntimeMethod* method);
// System.Int64 Pathfinding.Ionic.Crc.CRC32::get_TotalBytesRead()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t CRC32_get_TotalBytesRead_m53D21D053AD7FA39D9F77E6356EF7549CBB87812_inline (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Crc.CRC32::get_Crc32Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRC32_get_Crc32Result_m29E04C1B12177D297169695EC85154A058180C89 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.IO.Stream::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Close_mC34AF5832AD2E47C5E8F9D44E969C45F6F0A9A13 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.Tree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__ctor_m832A1A10EFBA80EF0601F580A3FF275004F36D4C (Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * __this, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// Pathfinding.Ionic.Zlib.DeflateManager/Config Pathfinding.Ionic.Zlib.DeflateManager/Config::Lookup(Pathfinding.Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Config_tC68F920487AC05FF8321319B93D3B73EEF943750 * Config_Lookup_mC4FDA8B6299E8307F37D9A8DD092AF5F18B80326 (int32_t ___level0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::SetDeflater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_SetDeflater_m79ECE95C882C362B5441BED32AB1A8518731DF6B (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeBlocks_m7F106D06F5DC7EB462AB3DA7DD1E93F36B68A5B4 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method);
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_IsSmaller(System.Int16[],System.Int32,System.Int32,System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__IsSmaller_mA0243376FF13A6711967C2E3BE152132C9D5E205 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___n1, int32_t ___m2, SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___depth3, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::scan_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_scan_tree_m52B6786F8D6B5C834C5F7C807BD72038512C5EE8 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.Tree::build_tree(Pathfinding.Ionic.Zlib.DeflateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_build_tree_mFD67D06DFAA1738D6341CB80A2754A944550ECDC (Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * __this, DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * ___s0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_bits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___value0, int32_t ___length1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_tree_m5E9FBD49F37E35B9B52F556C871EAE81B0285D01 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_code(System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_code_m093000C31E5EA1A327CE59D77249110107DBEE66 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___c0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::bi_flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_flush_m77526C0F8853E556E370A97C0684B0B4F0FE3620 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.Tree::DistanceCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_DistanceCode_m9C11788CD286B21C5B8FA68447A9BA7FC092B773 (int32_t ___dist0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::bi_windup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_windup_mA391F1C8EC195C7F42167EDBD47DE421B71F8F4F (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::put_bytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_put_bytes_mB8FAAD3E7B908ADF00BA2C598E05F725773A8C36 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_flush_block_mBBD92BB5FD04F3B60CD4FD2FCAFB98843073CE8D (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ZlibCodec::flush_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec_flush_pending_m06EF71CF66CDF4748E225060DDCA7391A58987C1 (ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_fillWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__fillWindow_mB7ECF5F51AB8C40CA5D3C8A89CFE9026B868869A (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::flush_block_only(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_flush_block_only_m377B129B393042403173E0FEA03DB34A1EABF8F5 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, bool ___eof0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::copy_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_copy_block_m0EDE0C2ECDEAEF61E76329B85792330C3DD34F4F (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::set_data_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_set_data_type_mC68ABBE49D1F26BA0872773DA81D9D46F6EBBC34 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::build_bl_tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_build_bl_tree_m6811C4AC8D1AD1A9C925F19F2C2BE7E550829107 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_stored_block_mE9692FBE125A35C18AFC94EB4EF7DB43C6A9CC01 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_compressed_block(System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_compressed_block_m99D87EAC0971A2F94F97268511EE3C3C70E01A7D (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___ltree0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dtree1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_all_trees(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_all_trees_m91FF5E0EDCE9B048EDC7A46C3F54851DE5AC8979 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::read_buf(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_read_buf_mBA8A7674AC33363D8DDCBEFBE34768F8E8AF1BA0 (ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, int32_t ___start1, int32_t ___size2, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::longest_match(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_longest_match_mAC7C7089DF02D1AC715D6D82E82F858AB5CADDB0 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___cur_match0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_tr_tally(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__tr_tally_mC60BFC2741CD6B0F4A7C74EB491EF9391B79B360 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___dist0, int32_t ___lc1, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,Pathfinding.Ionic.Zlib.CompressionLevel,System.Int32,System.Int32,Pathfinding.Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_mCC58D9403AA146B374F74CC47BB42D11109281F0 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___codec0, int32_t ___level1, int32_t ___windowBits2, int32_t ___memLevel3, int32_t ___strategy4, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ZlibException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibException__ctor_m445658A9E8EB52F8F293F14D2CFA83E23577F534 (ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_Reset_m8F77EDA9464906DCF8AD5ADEDF5669EDC3470EAD (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method);
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::get_WantRfc1950HeaderBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_m2420C594D027E6D9DF7451799709A745102F53AA_inline (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method);
// System.UInt32 Pathfinding.Ionic.Zlib.Adler::Adler32(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Adler_Adler32_m153E4796B41C8C0F63E6A07CD399E82C1B6590C5 (uint32_t ___adler0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeTreeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeTreeData_m11FA22EF02183D92147B12CF678A34056FE43323 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeLazyMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeLazyMatch_m93CE9EE1E0A971FC8EB0C4E3E5F05F8A288F9E9E (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressFunc__ctor_m1C9781D4AA74E0505AC7C626A02E9CCEB0DA5EAA (CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::Invoke(Pathfinding.Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressFunc_Invoke_m4A5F01717E558B9E12A9CF0BE5B000BDB378E09D (CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_align()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_align_m1076086A7E698192105E93EA1EFD63F896D97BCD (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m21699EE525FA312D7678545AA7AA03FEA3414100 (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,Pathfinding.Ionic.Zlib.ZlibStreamFlavor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream__ctor_m03ED40F967F38842310D740EA90C4252C887652B (ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___compressionMode1, int32_t ___level2, int32_t ___flavor3, bool ___leaveOpen4, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mDC5C7A9933446223A84ED106AE3E949E644FB0BE (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipProgressEventArgs__ctor_m14E34A6FBC7ABA811BD9BE6688AEED4BFCE8A665 (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.ExtractProgressEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractProgressEventArgs__ctor_m50E4662C7235590D92A376A69764398416A81658 (ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_ArchiveName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipProgressEventArgs_set_ArchiveName_mC327D87BD4E328D49C656AB66DC24B326158F10B_inline (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_EventType(Pathfinding.Ionic.Zip.ZipProgressEventType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipProgressEventArgs_set_EventType_m3896585F34A49B78CC8EFC5D9A9F901BB12B5249_inline (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.ExtractProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractProgressEventArgs__ctor_m7AC9FC96F598AD10A7732476568780B8C3B4B859 (ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * __this, String_t* ___archiveName0, int32_t ___flavor1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_BytesTransferred(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipProgressEventArgs_set_BytesTransferred_m39E2F33784CAEF8F8FB2E8D3C95E2F3EB0C91AA4_inline (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_TotalBytesToTransfer(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipProgressEventArgs_set_TotalBytesToTransfer_mE16CD00C26FEBFB8EEA1EF3285EE3E61B0AE3D27_inline (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_GetEncoding_mD5352F1522341280E9025D16463E63916549F9E3 (String_t* ___name0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A (String_t* ___path0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_FileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_FileName_mF7F67442CFAF08D147006A6A9A944FB3ACBC73E2 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_Comment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Comment_m8B41963F317D29651C733C1BE6981A0FCBA7994D (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get__wantCompress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibBaseStream_get__wantCompress_m7D67B45731CDD6E922A03E1064CDE47A2489D5BD (ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::EmitHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_EmitHeader_m89687E2FECB7A400BC01E03ABF2FA6756A983F0B (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method);
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_Comment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GZipStream_get_Comment_mA704699D0769105965CFFF5F24D12E4FBDD55718_inline (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method);
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_FileName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GZipStream_get_FileName_mBD624C5F107A207CB65CD7DBB0BC76B9121C7D69_inline (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, const RuntimeMethod*))Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_gshared_inline)(__this, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
inline void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.DateTime>::get_Value()
inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7 (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	return ((  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, const RuntimeMethod*))Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_gshared)(__this, method);
}
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39 (int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.SharedUtils::URShift(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SharedUtils_URShift_m2A309426D3A3C6AD731279C364EE4F139F85A39C (int32_t ___number0, int32_t ___bits1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.InfTree::initWorkArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree_initWorkArea_mD703DCFDF695C52A359B1B4649B8601E59F20EFB (InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * __this, int32_t ___vsize0, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m0DBB4F24E944FF5E4FA44E6A1342EBA79D9B3086 (InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___d4, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___e5, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___t6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m7, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp8, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hn9, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___v10, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes__ctor_mDBA1454A1AB0FC83F0984E74C049DE6E99F54F15 (InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.InfTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__ctor_m2A77C6807707632B404E072D8E8DB37C5C4EED21 (InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * __this, const RuntimeMethod* method);
// System.UInt32 Pathfinding.Ionic.Zlib.InflateBlocks::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InflateBlocks_Reset_m0004AF627D19ADFC96D2E3B49336BFD200DA8605 (InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::Flush(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636 (InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * __this, int32_t ___r0, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_mB46A6C5BF86A8B98F74ABA786628831D0DBC2786 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bl0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bd1, Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___tl2, Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___td3, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___z4, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes_Init_m430E7A20BB8578131F8BB656985D674F60B3CBAA (InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td4, int32_t ___td_index5, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_m347A37E60C6252196D29081A7D3B80BEA37617AD (InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bb1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tb2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp3, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___z4, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m9FBBA434F5E6E7F27F7C4686144D22EC5346B77E (InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bl3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bd4, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl5, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp7, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___z8, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::Process(Pathfinding.Ionic.Zlib.InflateBlocks,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_Process_mD0374DE1E690212193132DE2545916D3F7ADFEE3 (InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * __this, InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * ___blocks0, int32_t ___r1, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Pathfinding.Ionic.Zlib.InflateBlocks,Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_InflateFast_mC544E2CAA8D6A74DAADEBDF9016874E4E76FDD44 (InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td4, int32_t ___td_index5, InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * ___s6, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___z7, const RuntimeMethod* method);
// System.Boolean Pathfinding.Ionic.Zlib.InflateManager::get_HandleRfc1950HeaderBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InflateManager_get_HandleRfc1950HeaderBytes_m9F7D527D3E200FF2DC870B002D4A49842355D411_inline (InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks_Free_mF7252CE952F18E4A108114591CD821372E0C2CBF (InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_End_mC7928365BBB236D2D226790E4A52DDD3DA4DB87A (InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::.ctor(Pathfinding.Ionic.Zlib.ZlibCodec,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks__ctor_mD0CE44F5D81A1F6BC11EA4558017B571FF60F639 (InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * __this, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___codec0, RuntimeObject * ___checkfn1, int32_t ___w2, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Reset_mFBC1ADE6CFF86551FAADFE32BB7D0193BB4A2452 (InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::Process(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Process_m64CF9B43E2600B7E5FC18DE3A9EA4FF4DD517E42 (InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * __this, int32_t ___r0, const RuntimeMethod* method);
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
// System.Void Pathfinding.Ionic.Zip.AddProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddProgressEventArgs__ctor_m6EDD9B6CF9D1AE498C3EDF158AFC412CA3DE7EB1 (AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9 * __this, String_t* ___archiveName0, int32_t ___flavor1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___archiveName0;
		int32_t L_1 = ___flavor1;
		ZipProgressEventArgs__ctor_m09D67B6E0D0EFC521631A2D390054CBECDAE427A(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Pathfinding.Ionic.Zip.AddProgressEventArgs Pathfinding.Ionic.Zip.AddProgressEventArgs::AfterEntry(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9 * AddProgressEventArgs_AfterEntry_m813E7D54499F14EB8A3261B99ED39B503C12DE1D (String_t* ___archiveName0, ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * ___entry1, int32_t ___entriesTotal2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9 * V_0 = NULL;
	{
		String_t* L_0 = ___archiveName0;
		AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9 * L_1 = (AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9 *)il2cpp_codegen_object_new(AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9_il2cpp_TypeInfo_var);
		AddProgressEventArgs__ctor_m6EDD9B6CF9D1AE498C3EDF158AFC412CA3DE7EB1(L_1, L_0, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9 * L_2 = V_0;
		int32_t L_3 = ___entriesTotal2;
		ZipProgressEventArgs_set_EntriesTotal_m9B759F9F81234EA5857012D0DAB667AFD7AC222C_inline(L_2, L_3, /*hidden argument*/NULL);
		AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9 * L_4 = V_0;
		ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * L_5 = ___entry1;
		ZipProgressEventArgs_set_CurrentEntry_m696C96599ED44B6BD426D880ED02F552E5568F74_inline(L_4, L_5, /*hidden argument*/NULL);
		AddProgressEventArgs_t1A65D77BB402678AC966807E08AA1BC165A31DF9 * L_6 = V_0;
		return L_6;
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
// System.Void Pathfinding.Ionic.Zlib.Adler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler__cctor_m6621C548A28D7522657893C4D46E65498631ACF6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_StaticFields*)il2cpp_codegen_static_fields_for(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var))->set_BASE_0(((int32_t)65521));
		((Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_StaticFields*)il2cpp_codegen_static_fields_for(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var))->set_NMAX_1(((int32_t)5552));
		return;
	}
}
// System.UInt32 Pathfinding.Ionic.Zlib.Adler::Adler32(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Adler_Adler32_m153E4796B41C8C0F63E6A07CD399E82C1B6590C5 (uint32_t ___adler0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B6_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buf1;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		uint32_t L_1 = ___adler0;
		V_0 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)65535)));
		uint32_t L_2 = ___adler0;
		V_1 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_2>>((int32_t)16)))&(int32_t)((int32_t)65535)));
		goto IL_016d;
	}

IL_0020:
	{
		int32_t L_3 = ___len3;
		IL2CPP_RUNTIME_CLASS_INIT(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_StaticFields*)il2cpp_codegen_static_fields_for(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var))->get_NMAX_1();
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = ___len3;
		G_B6_0 = L_5;
		goto IL_0036;
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_StaticFields*)il2cpp_codegen_static_fields_for(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var))->get_NMAX_1();
		G_B6_0 = L_6;
	}

IL_0036:
	{
		V_2 = G_B6_0;
		int32_t L_7 = ___len3;
		int32_t L_8 = V_2;
		___len3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		goto IL_0136;
	}

IL_0041:
	{
		uint32_t L_9 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___buf1;
		int32_t L_11 = ___index2;
		int32_t L_12 = L_11;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_14));
		uint32_t L_15 = V_1;
		uint32_t L_16 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		uint32_t L_17 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___buf1;
		int32_t L_19 = ___index2;
		int32_t L_20 = L_19;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		int32_t L_21 = L_20;
		uint8_t L_22 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_22));
		uint32_t L_23 = V_1;
		uint32_t L_24 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24));
		uint32_t L_25 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = ___buf1;
		int32_t L_27 = ___index2;
		int32_t L_28 = L_27;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_30));
		uint32_t L_31 = V_1;
		uint32_t L_32 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32));
		uint32_t L_33 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = ___buf1;
		int32_t L_35 = ___index2;
		int32_t L_36 = L_35;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_38));
		uint32_t L_39 = V_1;
		uint32_t L_40 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_40));
		uint32_t L_41 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = ___buf1;
		int32_t L_43 = ___index2;
		int32_t L_44 = L_43;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_46));
		uint32_t L_47 = V_1;
		uint32_t L_48 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48));
		uint32_t L_49 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = ___buf1;
		int32_t L_51 = ___index2;
		int32_t L_52 = L_51;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		int32_t L_53 = L_52;
		uint8_t L_54 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_54));
		uint32_t L_55 = V_1;
		uint32_t L_56 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56));
		uint32_t L_57 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_58 = ___buf1;
		int32_t L_59 = ___index2;
		int32_t L_60 = L_59;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
		int32_t L_61 = L_60;
		uint8_t L_62 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)L_62));
		uint32_t L_63 = V_1;
		uint32_t L_64 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)L_64));
		uint32_t L_65 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_66 = ___buf1;
		int32_t L_67 = ___index2;
		int32_t L_68 = L_67;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
		int32_t L_69 = L_68;
		uint8_t L_70 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_70));
		uint32_t L_71 = V_1;
		uint32_t L_72 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)L_72));
		uint32_t L_73 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_74 = ___buf1;
		int32_t L_75 = ___index2;
		int32_t L_76 = L_75;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		int32_t L_77 = L_76;
		uint8_t L_78 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)L_78));
		uint32_t L_79 = V_1;
		uint32_t L_80 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)L_80));
		uint32_t L_81 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_82 = ___buf1;
		int32_t L_83 = ___index2;
		int32_t L_84 = L_83;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
		int32_t L_85 = L_84;
		uint8_t L_86 = (L_82)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)L_86));
		uint32_t L_87 = V_1;
		uint32_t L_88 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)L_88));
		uint32_t L_89 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_90 = ___buf1;
		int32_t L_91 = ___index2;
		int32_t L_92 = L_91;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
		int32_t L_93 = L_92;
		uint8_t L_94 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_93));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)L_94));
		uint32_t L_95 = V_1;
		uint32_t L_96 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)L_96));
		uint32_t L_97 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_98 = ___buf1;
		int32_t L_99 = ___index2;
		int32_t L_100 = L_99;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		int32_t L_101 = L_100;
		uint8_t L_102 = (L_98)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_101));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)L_102));
		uint32_t L_103 = V_1;
		uint32_t L_104 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)L_104));
		uint32_t L_105 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_106 = ___buf1;
		int32_t L_107 = ___index2;
		int32_t L_108 = L_107;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
		int32_t L_109 = L_108;
		uint8_t L_110 = (L_106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_109));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)L_110));
		uint32_t L_111 = V_1;
		uint32_t L_112 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)L_112));
		uint32_t L_113 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_114 = ___buf1;
		int32_t L_115 = ___index2;
		int32_t L_116 = L_115;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		int32_t L_117 = L_116;
		uint8_t L_118 = (L_114)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_117));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)L_118));
		uint32_t L_119 = V_1;
		uint32_t L_120 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)L_120));
		uint32_t L_121 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_122 = ___buf1;
		int32_t L_123 = ___index2;
		int32_t L_124 = L_123;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1));
		int32_t L_125 = L_124;
		uint8_t L_126 = (L_122)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_125));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)L_126));
		uint32_t L_127 = V_1;
		uint32_t L_128 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)L_128));
		uint32_t L_129 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_130 = ___buf1;
		int32_t L_131 = ___index2;
		int32_t L_132 = L_131;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)1));
		int32_t L_133 = L_132;
		uint8_t L_134 = (L_130)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_133));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)L_134));
		uint32_t L_135 = V_1;
		uint32_t L_136 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)L_136));
		int32_t L_137 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_137, (int32_t)((int32_t)16)));
	}

IL_0136:
	{
		int32_t L_138 = V_2;
		if ((((int32_t)L_138) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_139 = V_2;
		if (!L_139)
		{
			goto IL_015d;
		}
	}

IL_0144:
	{
		uint32_t L_140 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_141 = ___buf1;
		int32_t L_142 = ___index2;
		int32_t L_143 = L_142;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)1));
		int32_t L_144 = L_143;
		uint8_t L_145 = (L_141)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_144));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)L_145));
		uint32_t L_146 = V_1;
		uint32_t L_147 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)L_147));
		int32_t L_148 = V_2;
		int32_t L_149 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_148, (int32_t)1));
		V_2 = L_149;
		if (L_149)
		{
			goto IL_0144;
		}
	}

IL_015d:
	{
		uint32_t L_150 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var);
		uint32_t L_151 = ((Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_StaticFields*)il2cpp_codegen_static_fields_for(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var))->get_BASE_0();
		V_0 = ((int32_t)((uint32_t)(int32_t)L_150%(uint32_t)(int32_t)L_151));
		uint32_t L_152 = V_1;
		uint32_t L_153 = ((Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_StaticFields*)il2cpp_codegen_static_fields_for(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var))->get_BASE_0();
		V_1 = ((int32_t)((uint32_t)(int32_t)L_152%(uint32_t)(int32_t)L_153));
	}

IL_016d:
	{
		int32_t L_154 = ___len3;
		if ((((int32_t)L_154) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		uint32_t L_155 = V_1;
		uint32_t L_156 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_155<<(int32_t)((int32_t)16)))|(int32_t)L_156));
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
// System.Void Pathfinding.Ionic.Zip.BadCrcException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadCrcException__ctor_mF919234AC84AD642A16D285B4DB76420AC7D513E (BadCrcException_t0D22C7711389274B7E523CD05751C94751048F24 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ZipException__ctor_m21B7AF6A0060611E9347F3644166A2E571468D72(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Pathfinding.Ionic.Zip.BadPasswordException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadPasswordException__ctor_mF12C0A0C91DC64DF8374204FE94AF47ABC4A5656 (BadPasswordException_t144E72EEB37B9C4FB1AAA9ECBF6E8A145F71C960 * __this, const RuntimeMethod* method)
{
	{
		ZipException__ctor_m3DA0B41E11974AE8D04B9484D84B18C4371114B6(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zip.BadPasswordException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadPasswordException__ctor_m619C9CE64BEBA1D81417A30DB5FBB6BFB98AD9D4 (BadPasswordException_t144E72EEB37B9C4FB1AAA9ECBF6E8A145F71C960 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ZipException__ctor_m21B7AF6A0060611E9347F3644166A2E571468D72(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Pathfinding.Ionic.Zip.BadReadException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadReadException__ctor_mBD9289FCC371BFBF4DFBF1249C0FD8E23AA29A0C (BadReadException_t0071DB16D260B1C7EE8CE63483D2B985E0369038 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ZipException__ctor_m21B7AF6A0060611E9347F3644166A2E571468D72(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Pathfinding.Ionic.Zip.BadStateException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadStateException__ctor_m8F35C3DB06239AB342A5E0CDDA67E95B16C74215 (BadStateException_tEA711E725F0B46CBC5EDC38F6FF00DDC39925434 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ZipException__ctor_m21B7AF6A0060611E9347F3644166A2E571468D72(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zip.BadStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadStateException__ctor_m059238888DA8B8F10093CFA654E4A0EC1E42BA12 (BadStateException_tEA711E725F0B46CBC5EDC38F6FF00DDC39925434 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		ZipException__ctor_mB7ACFF60E9E393FA073AE00D10E9F8C0518E778A(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Pathfinding.Ionic.Crc.CRC32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32__ctor_m85498FAB02F5AC7119BC0D090DCD22ED6E0EE802 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, const RuntimeMethod* method)
{
	{
		CRC32__ctor_m3C875D097ABC9FA2BE83EBBBF28D3EB8894EE208(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Crc.CRC32::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32__ctor_m3C875D097ABC9FA2BE83EBBBF28D3EB8894EE208 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, bool ___reverseBits0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___reverseBits0;
		CRC32__ctor_m310D8107ABAC07EA0AA895A8E1784F7D46D97091(__this, ((int32_t)-306674912), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Crc.CRC32::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32__ctor_m310D8107ABAC07EA0AA895A8E1784F7D46D97091 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, int32_t ___polynomial0, bool ___reverseBits1, const RuntimeMethod* method)
{
	{
		__this->set__register_4((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___reverseBits1;
		__this->set_reverseBits_2(L_0);
		int32_t L_1 = ___polynomial0;
		__this->set_dwPolynomial_0(L_1);
		CRC32_GenerateLookupTable_m2B09D8A3D820A303498BC942265FC04425E68A62(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Crc.CRC32::get_TotalBytesRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CRC32_get_TotalBytesRead_m53D21D053AD7FA39D9F77E6356EF7549CBB87812 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__TotalBytesRead_1();
		return L_0;
	}
}
// System.Int32 Pathfinding.Ionic.Crc.CRC32::get_Crc32Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRC32_get_Crc32Result_m29E04C1B12177D297169695EC85154A058180C89 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get__register_4();
		return ((~L_0));
	}
}
// System.Int32 Pathfinding.Ionic.Crc.CRC32::GetCrc32(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRC32_GetCrc32_m4D5FC96C14C7217BF26E13A8462DA4467D5D0BF8 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___input0;
		int32_t L_1;
		L_1 = CRC32_GetCrc32AndCopy_mE59DCE5DA155878951536A398C7F96A5A9F5B0EE(__this, L_0, (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Pathfinding.Ionic.Crc.CRC32::GetCrc32AndCopy(System.IO.Stream,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRC32_GetCrc32AndCopy_mE59DCE5DA155878951536A398C7F96A5A9F5B0EE (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___input0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Exception_t * L_1 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral098F0638BDC57D742FE5CA5D04E3A6767104F5B2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CRC32_GetCrc32AndCopy_mE59DCE5DA155878951536A398C7F96A5A9F5B0EE_RuntimeMethod_var)));
	}

IL_0011:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		V_0 = L_2;
		V_1 = ((int32_t)8192);
		__this->set__TotalBytesRead_1(((int64_t)((int64_t)0)));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = ___input0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6;
		L_6 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, L_5);
		V_2 = L_6;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_7 = ___output1;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = ___output1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		int32_t L_10 = V_2;
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
	}

IL_0043:
	{
		int64_t L_11 = __this->get__TotalBytesRead_1();
		int32_t L_12 = V_2;
		__this->set__TotalBytesRead_1(((int64_t)il2cpp_codegen_add((int64_t)L_11, (int64_t)((int64_t)((int64_t)L_12)))));
		goto IL_0088;
	}

IL_0057:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_0;
		int32_t L_14 = V_2;
		CRC32_SlurpBlock_mB193D4D19FA19A265050E35AF1503FE420F9F841(__this, L_13, 0, L_14, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_15 = ___input0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18;
		L_18 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, 0, L_17);
		V_2 = L_18;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_19 = ___output1;
		if (!L_19)
		{
			goto IL_0079;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_20 = ___output1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = V_0;
		int32_t L_22 = V_2;
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, L_22);
	}

IL_0079:
	{
		int64_t L_23 = __this->get__TotalBytesRead_1();
		int32_t L_24 = V_2;
		__this->set__TotalBytesRead_1(((int64_t)il2cpp_codegen_add((int64_t)L_23, (int64_t)((int64_t)((int64_t)L_24)))));
	}

IL_0088:
	{
		int32_t L_25 = V_2;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_26 = __this->get__register_4();
		return ((~L_26));
	}
}
// System.Int32 Pathfinding.Ionic.Crc.CRC32::ComputeCrc32(System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRC32_ComputeCrc32_mC64593EBF78A92992821CEB7C6D2239372925038 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, int32_t ___W0, uint8_t ___B1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___W0;
		uint8_t L_1 = ___B1;
		int32_t L_2;
		L_2 = CRC32__InternalComputeCrc32_mA9DFD19438BA814BE2218EFA1C9C00CEF84DD812(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Pathfinding.Ionic.Crc.CRC32::_InternalComputeCrc32(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRC32__InternalComputeCrc32_mA9DFD19438BA814BE2218EFA1C9C00CEF84DD812 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, uint32_t ___W0, uint8_t ___B1, const RuntimeMethod* method)
{
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = __this->get_crc32Table_3();
		uint32_t L_1 = ___W0;
		uint8_t L_2 = ___B1;
		uintptr_t L_3 = ((uintptr_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_2))&(int32_t)((int32_t)255))));
		uint32_t L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = ___W0;
		return ((int32_t)((int32_t)L_4^(int32_t)((int32_t)((uint32_t)L_5>>8))));
	}
}
// System.Void Pathfinding.Ionic.Crc.CRC32::SlurpBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32_SlurpBlock_mB193D4D19FA19A265050E35AF1503FE420F9F841 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___block0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___block0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Exception_t * L_1 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4950B3758A114DEB554BDFD7BE0362389271888)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CRC32_SlurpBlock_mB193D4D19FA19A265050E35AF1503FE420F9F841_RuntimeMethod_var)));
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_0081;
	}

IL_0018:
	{
		int32_t L_2 = ___offset1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___block0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		bool L_8 = __this->get_reverseBits_2();
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_9 = __this->get__register_4();
		uint8_t L_10 = V_2;
		V_3 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_9>>((int32_t)24)))^(int32_t)L_10));
		uint32_t L_11 = __this->get__register_4();
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_12 = __this->get_crc32Table_3();
		uint32_t L_13 = V_3;
		uintptr_t L_14 = ((uintptr_t)L_13);
		uint32_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		__this->set__register_4(((int32_t)((int32_t)((int32_t)((int32_t)L_11<<(int32_t)8))^(int32_t)L_15)));
		goto IL_007d;
	}

IL_0054:
	{
		uint32_t L_16 = __this->get__register_4();
		uint8_t L_17 = V_2;
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)255)))^(int32_t)L_17));
		uint32_t L_18 = __this->get__register_4();
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_19 = __this->get_crc32Table_3();
		uint32_t L_20 = V_4;
		uintptr_t L_21 = ((uintptr_t)L_20);
		uint32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		__this->set__register_4(((int32_t)((int32_t)((int32_t)((uint32_t)L_18>>8))^(int32_t)L_22)));
	}

IL_007d:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0081:
	{
		int32_t L_24 = V_0;
		int32_t L_25 = ___count2;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0018;
		}
	}
	{
		int64_t L_26 = __this->get__TotalBytesRead_1();
		int32_t L_27 = ___count2;
		__this->set__TotalBytesRead_1(((int64_t)il2cpp_codegen_add((int64_t)L_26, (int64_t)((int64_t)((int64_t)L_27)))));
		return;
	}
}
// System.UInt32 Pathfinding.Ionic.Crc.CRC32::ReverseBits(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32_ReverseBits_m8411B687DD0513309D97820D0EAE9458CF2B5398 (uint32_t ___data0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___data0;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)1431655765)))<<(int32_t)1))|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_2>>1))&(int32_t)((int32_t)1431655765)))));
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)858993459)))<<(int32_t)2))|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_4>>2))&(int32_t)((int32_t)858993459)))));
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)252645135)))<<(int32_t)4))|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_6>>4))&(int32_t)((int32_t)252645135)))));
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_0;
		uint32_t L_9 = V_0;
		uint32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)65280)))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_9>>8))&(int32_t)((int32_t)65280)))))|(int32_t)((int32_t)((uint32_t)L_10>>((int32_t)24)))));
		uint32_t L_11 = V_0;
		return L_11;
	}
}
// System.Byte Pathfinding.Ionic.Crc.CRC32::ReverseBits(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CRC32_ReverseBits_mB5E00B6E6DFA31C1923626947E17C77179BB25DF (uint8_t ___data0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint8_t L_0 = ___data0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)131586)));
		V_1 = ((int32_t)17055760);
		uint32_t L_1 = V_0;
		uint32_t L_2 = V_1;
		V_2 = ((int32_t)((int32_t)L_1&(int32_t)L_2));
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))&(int32_t)((int32_t)((int32_t)L_4<<(int32_t)1))));
		uint32_t L_5 = V_2;
		uint32_t L_6 = V_3;
		return (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)16781313), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6))))>>((int32_t)24)))));
	}
}
// System.Void Pathfinding.Ionic.Crc.CRC32::GenerateLookupTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32_GenerateLookupTable_m2B09D8A3D820A303498BC942265FC04425E68A62 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->set_crc32Table_3(L_0);
		V_1 = (uint8_t)0;
	}

IL_0012:
	{
		uint8_t L_1 = V_1;
		V_0 = L_1;
		V_2 = (uint8_t)8;
		goto IL_003d;
	}

IL_001b:
	{
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2&(int32_t)1))) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		uint32_t L_3 = V_0;
		uint32_t L_4 = __this->get_dwPolynomial_0();
		V_0 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_3>>1))^(int32_t)L_4));
		goto IL_0038;
	}

IL_0034:
	{
		uint32_t L_5 = V_0;
		V_0 = ((int32_t)((uint32_t)L_5>>1));
	}

IL_0038:
	{
		uint8_t L_6 = V_2;
		V_2 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1))));
	}

IL_003d:
	{
		uint8_t L_7 = V_2;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		bool L_8 = __this->get_reverseBits_2();
		if (!L_8)
		{
			goto IL_0067;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_9 = __this->get_crc32Table_3();
		uint8_t L_10 = V_1;
		uint8_t L_11;
		L_11 = CRC32_ReverseBits_mB5E00B6E6DFA31C1923626947E17C77179BB25DF(L_10, /*hidden argument*/NULL);
		uint32_t L_12 = V_0;
		uint32_t L_13;
		L_13 = CRC32_ReverseBits_m8411B687DD0513309D97820D0EAE9458CF2B5398(L_12, /*hidden argument*/NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)L_13);
		goto IL_0070;
	}

IL_0067:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_14 = __this->get_crc32Table_3();
		uint8_t L_15 = V_1;
		uint32_t L_16 = V_0;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (uint32_t)L_16);
	}

IL_0070:
	{
		uint8_t L_17 = V_1;
		V_1 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1))));
		uint8_t L_18 = V_1;
		if (L_18)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.UInt32 Pathfinding.Ionic.Crc.CRC32::gf2_matrix_times(System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32_gf2_matrix_times_m5AA03D4B4C94917E7561C57CEDF1A7A1DE0FC5DE (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___matrix0, uint32_t ___vec1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0009:
	{
		uint32_t L_0 = ___vec1;
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_1 = V_0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = ___matrix0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)L_5));
	}

IL_0018:
	{
		uint32_t L_6 = ___vec1;
		___vec1 = ((int32_t)((uint32_t)L_6>>1));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0021:
	{
		uint32_t L_8 = ___vec1;
		if (L_8)
		{
			goto IL_0009;
		}
	}
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void Pathfinding.Ionic.Crc.CRC32::gf2_matrix_square(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32_gf2_matrix_square_mA9A170E6E375656FFE6DC703052F67C8B0C55617 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___square0, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___mat1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___square0;
		int32_t L_1 = V_0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = ___mat1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = ___mat1;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		uint32_t L_7;
		L_7 = CRC32_gf2_matrix_times_m5AA03D4B4C94917E7561C57CEDF1A7A1DE0FC5DE(__this, L_2, L_6, /*hidden argument*/NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0018:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)32))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Crc.CRC32::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32_Combine_m283D23F5C478EE0A770827E04A2BFDA1EAD72A57 (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, int32_t ___crc0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_0 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_1;
		int32_t L_2 = ___length1;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		uint32_t L_3 = __this->get__register_4();
		V_2 = ((~L_3));
		int32_t L_4 = ___crc0;
		V_3 = L_4;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = V_1;
		uint32_t L_6 = __this->get_dwPolynomial_0();
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_6);
		V_4 = 1;
		V_5 = 1;
		goto IL_0047;
	}

IL_0035:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_7 = V_1;
		int32_t L_8 = V_5;
		uint32_t L_9 = V_4;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_9);
		uint32_t L_10 = V_4;
		V_4 = ((int32_t)((int32_t)L_10<<(int32_t)1));
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_12 = V_5;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)32))))
		{
			goto IL_0035;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_13 = V_0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_14 = V_1;
		CRC32_gf2_matrix_square_mA9A170E6E375656FFE6DC703052F67C8B0C55617(__this, L_13, L_14, /*hidden argument*/NULL);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_15 = V_1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_16 = V_0;
		CRC32_gf2_matrix_square_mA9A170E6E375656FFE6DC703052F67C8B0C55617(__this, L_15, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___length1;
		V_6 = L_17;
	}

IL_0063:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_18 = V_0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_19 = V_1;
		CRC32_gf2_matrix_square_mA9A170E6E375656FFE6DC703052F67C8B0C55617(__this, L_18, L_19, /*hidden argument*/NULL);
		uint32_t L_20 = V_6;
		if ((!(((uint32_t)((int32_t)((int32_t)L_20&(int32_t)1))) == ((uint32_t)1))))
		{
			goto IL_007e;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_21 = V_0;
		uint32_t L_22 = V_2;
		uint32_t L_23;
		L_23 = CRC32_gf2_matrix_times_m5AA03D4B4C94917E7561C57CEDF1A7A1DE0FC5DE(__this, L_21, L_22, /*hidden argument*/NULL);
		V_2 = L_23;
	}

IL_007e:
	{
		uint32_t L_24 = V_6;
		V_6 = ((int32_t)((uint32_t)L_24>>1));
		uint32_t L_25 = V_6;
		if (L_25)
		{
			goto IL_0090;
		}
	}
	{
		goto IL_00b8;
	}

IL_0090:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_26 = V_1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_27 = V_0;
		CRC32_gf2_matrix_square_mA9A170E6E375656FFE6DC703052F67C8B0C55617(__this, L_26, L_27, /*hidden argument*/NULL);
		uint32_t L_28 = V_6;
		if ((!(((uint32_t)((int32_t)((int32_t)L_28&(int32_t)1))) == ((uint32_t)1))))
		{
			goto IL_00ab;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_29 = V_1;
		uint32_t L_30 = V_2;
		uint32_t L_31;
		L_31 = CRC32_gf2_matrix_times_m5AA03D4B4C94917E7561C57CEDF1A7A1DE0FC5DE(__this, L_29, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
	}

IL_00ab:
	{
		uint32_t L_32 = V_6;
		V_6 = ((int32_t)((uint32_t)L_32>>1));
		uint32_t L_33 = V_6;
		if (L_33)
		{
			goto IL_0063;
		}
	}

IL_00b8:
	{
		uint32_t L_34 = V_2;
		uint32_t L_35 = V_3;
		V_2 = ((int32_t)((int32_t)L_34^(int32_t)L_35));
		uint32_t L_36 = V_2;
		__this->set__register_4(((~L_36)));
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
// System.Void Pathfinding.Ionic.Zip.CloseDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloseDelegate__ctor_m67725FA08B24322946D704B9B89D89F67403818E (CloseDelegate_t197F69FB43210433EE489E0E6040E388F16FD992 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Pathfinding.Ionic.Zip.CloseDelegate::Invoke(System.String,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloseDelegate_Invoke_m138825A6F5C57FE68C1BD5BF14FE4D338DFCC720 (CloseDelegate_t197F69FB43210433EE489E0E6040E388F16FD992 * __this, String_t* ___entryName0, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___entryName0, ___stream1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___entryName0, ___stream1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(targetMethod, ___entryName0, ___stream1);
					else
						GenericVirtActionInvoker1< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(targetMethod, ___entryName0, ___stream1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___entryName0, ___stream1);
					else
						VirtActionInvoker1< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___entryName0, ___stream1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___entryName0, ___stream1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(targetMethod, targetThis, ___entryName0, ___stream1);
					else
						GenericVirtActionInvoker2< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(targetMethod, targetThis, ___entryName0, ___stream1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___entryName0, ___stream1);
					else
						VirtActionInvoker2< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___entryName0, ___stream1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___entryName0, ___stream1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___entryName0, ___stream1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Pathfinding.Ionic.Zip.CloseDelegate::BeginInvoke(System.String,System.IO.Stream,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CloseDelegate_BeginInvoke_m848F0CF6685AF5960C6B820EAC835E1CA64A3DC4 (CloseDelegate_t197F69FB43210433EE489E0E6040E388F16FD992 * __this, String_t* ___entryName0, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___entryName0;
	__d_args[1] = ___stream1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Pathfinding.Ionic.Zip.CloseDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloseDelegate_EndInvoke_m95A327DF45C32E3F81A50108D60C28EA26097560 (CloseDelegate_t197F69FB43210433EE489E0E6040E388F16FD992 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Pathfinding.Ionic.Zip.CountingStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingStream__ctor_mE0FF433A5CDF00956FD602636C141B8870298E25 (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4(__this, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		__this->set__s_4(L_0);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get__s_4();
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_1);
		__this->set__initialOffset_7(L_2);
		goto IL_0031;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		__this->set__initialOffset_7(((int64_t)((int64_t)0)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	} // end catch (depth: 1)

IL_0031:
	{
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_BytesWritten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CountingStream_get_BytesWritten_m3EC45B3E404D8A910A2F5B4CC86AF9A020387446 (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__bytesWritten_5();
		return L_0;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_BytesRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CountingStream_get_BytesRead_m968D8E4E25ECD6F14C386F2D342302E5DBCF037C (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__bytesRead_6();
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zip.CountingStream::Adjust(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingStream_Adjust_m32D38833594F06256EA99DC32B437BEC51F12659 (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, int64_t ___delta0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = __this->get__bytesWritten_5();
		int64_t L_1 = ___delta0;
		__this->set__bytesWritten_5(((int64_t)il2cpp_codegen_subtract((int64_t)L_0, (int64_t)L_1)));
		int64_t L_2 = __this->get__bytesWritten_5();
		if ((((int64_t)L_2) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0021;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CountingStream_Adjust_m32D38833594F06256EA99DC32B437BEC51F12659_RuntimeMethod_var)));
	}

IL_0021:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = __this->get__s_4();
		if (!((CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF *)IsInstClass((RuntimeObject*)L_4, CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF_il2cpp_TypeInfo_var)))
		{
			goto IL_0042;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = __this->get__s_4();
		int64_t L_6 = ___delta0;
		CountingStream_Adjust_m32D38833594F06256EA99DC32B437BEC51F12659(((CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF *)CastclassClass((RuntimeObject*)L_5, CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF_il2cpp_TypeInfo_var)), L_6, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zip.CountingStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CountingStream_Read_mE9B31A38A8EE634083414E5A791F22D9B3EF1951 (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__s_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		int64_t L_5 = __this->get__bytesRead_6();
		int32_t L_6 = V_0;
		__this->set__bytesRead_6(((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)((int64_t)((int64_t)L_6)))));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Void Pathfinding.Ionic.Zip.CountingStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingStream_Write_mF224AB485C31BAB8114995F1D4FBA7E09D732861 (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___count2;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get__s_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___buffer0;
		int32_t L_3 = ___offset1;
		int32_t L_4 = ___count2;
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, L_3, L_4);
		int64_t L_5 = __this->get__bytesWritten_5();
		int32_t L_6 = ___count2;
		__this->set__bytesWritten_5(((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)((int64_t)((int64_t)L_6)))));
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.CountingStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CountingStream_get_CanRead_m744A93F966875F0F754D65208B6E6FD89493B6E4 (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__s_4();
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.CountingStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CountingStream_get_CanSeek_m9ECA80518527D40E6917B7B041753531057915E0 (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__s_4();
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		return L_1;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.CountingStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CountingStream_get_CanWrite_m6685F6F343E03BD62655E3A4FB3E34DBD4384DE3 (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__s_4();
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Void Pathfinding.Ionic.Zip.CountingStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingStream_Flush_m5C3BF03137ADE8169169DC70F565F3AFA9BF9E25 (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__s_4();
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CountingStream_get_Length_mFE0CC39999FDD98FA6A64D92E50745F5F412D2EA (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__s_4();
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_ComputedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CountingStream_get_ComputedPosition_mD974EF802D7ACB129AC3E4E45E0B805A4BEA4522 (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__initialOffset_7();
		int64_t L_1 = __this->get__bytesWritten_5();
		return ((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)L_1));
	}
}
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CountingStream_get_Position_m749A9C095C065E44AFEDD982914D3C0457131E2E (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__s_4();
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void Pathfinding.Ionic.Zip.CountingStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingStream_set_Position_m67574B740434D793DBC98D4B944E1266A51BA96F (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__s_4();
		int64_t L_1 = ___value0;
		int64_t L_2;
		L_2 = VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, L_1, 0);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CountingStream_Seek_mB85C4615354F22EA55553E2F2F4B04EDCC52C41C (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__s_4();
		int64_t L_1 = ___offset0;
		int32_t L_2 = ___origin1;
		int64_t L_3;
		L_3 = VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void Pathfinding.Ionic.Zip.CountingStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingStream_SetLength_m248184B4409DA567AD8EBF8F5C67579F9B70DDA5 (CountingStream_tBC5413FD4129A04AD650C901F5708B73AB1E5DEF * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__s_4();
		int64_t L_1 = ___value0;
		VirtActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, L_1);
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
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrcCalculatorStream__ctor_m0384243A6EAB830CF20A32FA3E52FAA49F3A345E (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var);
		int64_t L_0 = ((CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_StaticFields*)il2cpp_codegen_static_fields_for(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var))->get_UnsetLengthLimit_4();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___stream0;
		CrcCalculatorStream__ctor_mD119210BC68E3AEFD9B994A7DBBEAC8E4D362FC8(__this, (bool)1, L_0, L_1, (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrcCalculatorStream__ctor_m5CE8F25BC2B4E391C4AC367FBA6CD8CBAC0D84BD (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, bool ___leaveOpen1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___leaveOpen1;
		IL2CPP_RUNTIME_CLASS_INIT(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var);
		int64_t L_1 = ((CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_StaticFields*)il2cpp_codegen_static_fields_for(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var))->get_UnsetLengthLimit_4();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___stream0;
		CrcCalculatorStream__ctor_mD119210BC68E3AEFD9B994A7DBBEAC8E4D362FC8(__this, L_0, L_1, L_2, (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrcCalculatorStream__ctor_m8F6367DBA649F67D99E209E347CFA48E4065B3B7 (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int64_t ___length1, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___length1;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___stream0;
		CrcCalculatorStream__ctor_mD119210BC68E3AEFD9B994A7DBBEAC8E4D362FC8(__this, (bool)1, L_0, L_1, (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C *)NULL, /*hidden argument*/NULL);
		int64_t L_2 = ___length1;
		if ((((int64_t)L_2) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CrcCalculatorStream__ctor_m8F6367DBA649F67D99E209E347CFA48E4065B3B7_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.ctor(System.Boolean,System.Int64,System.IO.Stream,Pathfinding.Ionic.Crc.CRC32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrcCalculatorStream__ctor_mD119210BC68E3AEFD9B994A7DBBEAC8E4D362FC8 (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, bool ___leaveOpen0, int64_t ___length1, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream2, CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * ___crc323, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * G_B2_0 = NULL;
	CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * G_B2_1 = NULL;
	CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * G_B1_0 = NULL;
	CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * G_B1_1 = NULL;
	{
		__this->set__lengthLimit_7(((int64_t)((int64_t)((int32_t)-99))));
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4(__this, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream2;
		__this->set__innerStream_5(L_0);
		CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * L_1 = ___crc323;
		CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0025;
		}
	}
	{
		CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * L_3 = (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C *)il2cpp_codegen_object_new(CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C_il2cpp_TypeInfo_var);
		CRC32__ctor_m85498FAB02F5AC7119BC0D090DCD22ED6E0EE802(L_3, /*hidden argument*/NULL);
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		G_B2_1->set__Crc32_6(G_B2_0);
		int64_t L_4 = ___length1;
		__this->set__lengthLimit_7(L_4);
		bool L_5 = ___leaveOpen0;
		__this->set__leaveOpen_8(L_5);
		return;
	}
}
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrcCalculatorStream__cctor_mE7E7ECF4E1682B70EBAD88126E3932AA4D284B87 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_StaticFields*)il2cpp_codegen_static_fields_for(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var))->set_UnsetLengthLimit_4(((int64_t)((int64_t)((int32_t)-99))));
		return;
	}
}
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrcCalculatorStream_System_IDisposable_Dispose_mBD4A4E6CD08AD4FAC5A29B33B214A8F93752118F (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, __this);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::get_TotalBytesSlurped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CrcCalculatorStream_get_TotalBytesSlurped_m4F20C4F2D14144F4FAB90BD9AD3CF26D99B88469 (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, const RuntimeMethod* method)
{
	{
		CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * L_0 = __this->get__Crc32_6();
		int64_t L_1;
		L_1 = CRC32_get_TotalBytesRead_m53D21D053AD7FA39D9F77E6356EF7549CBB87812_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Pathfinding.Ionic.Crc.CrcCalculatorStream::get_Crc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CrcCalculatorStream_get_Crc_m2B66767A83085EB5E399F3618F2FCF306AA499CE (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, const RuntimeMethod* method)
{
	{
		CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * L_0 = __this->get__Crc32_6();
		int32_t L_1;
		L_1 = CRC32_get_Crc32Result_m29E04C1B12177D297169695EC85154A058180C89(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Pathfinding.Ionic.Crc.CrcCalculatorStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CrcCalculatorStream_Read_m51AA1DD00507A600D805CF9174CC409CC7B60E82 (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___count2;
		V_0 = L_0;
		int64_t L_1 = __this->get__lengthLimit_7();
		IL2CPP_RUNTIME_CLASS_INIT(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var);
		int64_t L_2 = ((CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_StaticFields*)il2cpp_codegen_static_fields_for(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var))->get_UnsetLengthLimit_4();
		if ((((int64_t)L_1) == ((int64_t)L_2)))
		{
			goto IL_0048;
		}
	}
	{
		CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * L_3 = __this->get__Crc32_6();
		int64_t L_4;
		L_4 = CRC32_get_TotalBytesRead_m53D21D053AD7FA39D9F77E6356EF7549CBB87812_inline(L_3, /*hidden argument*/NULL);
		int64_t L_5 = __this->get__lengthLimit_7();
		if ((((int64_t)L_4) < ((int64_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}

IL_002a:
	{
		int64_t L_6 = __this->get__lengthLimit_7();
		CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * L_7 = __this->get__Crc32_6();
		int64_t L_8;
		L_8 = CRC32_get_TotalBytesRead_m53D21D053AD7FA39D9F77E6356EF7549CBB87812_inline(L_7, /*hidden argument*/NULL);
		V_1 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_6, (int64_t)L_8));
		int64_t L_9 = V_1;
		int32_t L_10 = ___count2;
		if ((((int64_t)L_9) >= ((int64_t)((int64_t)((int64_t)L_10)))))
		{
			goto IL_0048;
		}
	}
	{
		int64_t L_11 = V_1;
		V_0 = ((int32_t)((int32_t)L_11));
	}

IL_0048:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_12 = __this->get__innerStream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___buffer0;
		int32_t L_14 = ___offset1;
		int32_t L_15 = V_0;
		int32_t L_16;
		L_16 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_12, L_13, L_14, L_15);
		V_2 = L_16;
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * L_18 = __this->get__Crc32_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = ___buffer0;
		int32_t L_20 = ___offset1;
		int32_t L_21 = V_2;
		CRC32_SlurpBlock_mB193D4D19FA19A265050E35AF1503FE420F9F841(L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
	}

IL_006c:
	{
		int32_t L_22 = V_2;
		return L_22;
	}
}
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrcCalculatorStream_Write_m3ABC60A125799C4439C5687D0FB7D15A7DAC0062 (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___count2;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * L_1 = __this->get__Crc32_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___buffer0;
		int32_t L_3 = ___offset1;
		int32_t L_4 = ___count2;
		CRC32_SlurpBlock_mB193D4D19FA19A265050E35AF1503FE420F9F841(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0015:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = __this->get__innerStream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___buffer0;
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___count2;
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, L_7, L_8);
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Crc.CrcCalculatorStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrcCalculatorStream_get_CanRead_m50134EF283B3F2A7304F508DDA1C0547C8A50EA2 (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__innerStream_5();
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean Pathfinding.Ionic.Crc.CrcCalculatorStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrcCalculatorStream_get_CanSeek_m7ED88002A75CF4AD5698CAF6DFF705ADA8A2DD18 (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Pathfinding.Ionic.Crc.CrcCalculatorStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrcCalculatorStream_get_CanWrite_m067A5E0BBBDD6426379F5D849C916D139DCAFD4B (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__innerStream_5();
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrcCalculatorStream_Flush_m0EAEA5230B94361693DA761370680AE8566441CE (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__innerStream_5();
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CrcCalculatorStream_get_Length_m8263DA699DB4F5C5512323B9E35866B0E8EC6E98 (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = __this->get__lengthLimit_7();
		IL2CPP_RUNTIME_CLASS_INIT(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var);
		int64_t L_1 = ((CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_StaticFields*)il2cpp_codegen_static_fields_for(CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371_il2cpp_TypeInfo_var))->get_UnsetLengthLimit_4();
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_001c;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = __this->get__innerStream_5();
		int64_t L_3;
		L_3 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
		return L_3;
	}

IL_001c:
	{
		int64_t L_4 = __this->get__lengthLimit_7();
		return L_4;
	}
}
// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CrcCalculatorStream_get_Position_mF040D4EDB36C925464CC9A376FC4EBEF5BE4D117 (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, const RuntimeMethod* method)
{
	{
		CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * L_0 = __this->get__Crc32_6();
		int64_t L_1;
		L_1 = CRC32_get_TotalBytesRead_m53D21D053AD7FA39D9F77E6356EF7549CBB87812_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrcCalculatorStream_set_Position_m43CB45E8A50E2E8E1DF5172203F4B3FB4ABB3173 (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CrcCalculatorStream_set_Position_m43CB45E8A50E2E8E1DF5172203F4B3FB4ABB3173_RuntimeMethod_var)));
	}
}
// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CrcCalculatorStream_Seek_m5C4E467B2300DBD522B7BD63AE01C70436B5AB4B (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CrcCalculatorStream_Seek_m5C4E467B2300DBD522B7BD63AE01C70436B5AB4B_RuntimeMethod_var)));
	}
}
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrcCalculatorStream_SetLength_m911646958C80BEDB29B4B72554D0EB597A0BB2BB (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CrcCalculatorStream_SetLength_m911646958C80BEDB29B4B72554D0EB597A0BB2BB_RuntimeMethod_var)));
	}
}
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrcCalculatorStream_Close_mB6AE84269A51360E6248725728BA35E1D214111A (CrcCalculatorStream_t67CA5261807B79B588FED99E5DF8EDD6B2CA3371 * __this, const RuntimeMethod* method)
{
	{
		Stream_Close_mC34AF5832AD2E47C5E8F9D44E969C45F6F0A9A13(__this, /*hidden argument*/NULL);
		bool L_0 = __this->get__leaveOpen_8();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get__innerStream_5();
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_1);
	}

IL_001c:
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
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__ctor_mB161BD5FCFCA2A967667D704E31C9C460D1F4EC0 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_0 = (Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 *)il2cpp_codegen_object_new(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		Tree__ctor_m832A1A10EFBA80EF0601F580A3FF275004F36D4C(L_0, /*hidden argument*/NULL);
		__this->set_treeLiterals_54(L_0);
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_1 = (Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 *)il2cpp_codegen_object_new(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		Tree__ctor_m832A1A10EFBA80EF0601F580A3FF275004F36D4C(L_1, /*hidden argument*/NULL);
		__this->set_treeDistances_55(L_1);
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_2 = (Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 *)il2cpp_codegen_object_new(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		Tree__ctor_m832A1A10EFBA80EF0601F580A3FF275004F36D4C(L_2, /*hidden argument*/NULL);
		__this->set_treeBitLengths_56(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_3 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_MAX_BITS_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		__this->set_bl_count_57(L_4);
		int32_t L_5 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_L_CODES_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_5)), (int32_t)1)));
		__this->set_heap_58(L_6);
		int32_t L_7 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_L_CODES_5();
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_8 = (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)SZArrayNew(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_7)), (int32_t)1)));
		__this->set_depth_61(L_8);
		__this->set__WantRfc1950HeaderBytes_73((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_9 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_HEAP_SIZE_19();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2)));
		__this->set_dyn_ltree_51(L_10);
		int32_t L_11 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_D_CODES_2();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_12 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_11)), (int32_t)1)), (int32_t)2)));
		__this->set_dyn_dtree_52(L_12);
		int32_t L_13 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_BL_CODES_1();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_14 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_13)), (int32_t)1)), (int32_t)2)));
		__this->set_bl_tree_53(L_14);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__cctor_mC98E162918EE879E9E9639515F0ABD6036A939BA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		s_Il2CppMethodInitialized = true;
	}
	{
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_MEM_LEVEL_MAX_0(((int32_t)9));
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_MEM_LEVEL_DEFAULT_1(8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_3;
		ArrayElementTypeCheck (L_5, _stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_12);
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set__ErrorMessage_3(L_11);
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_PRESET_DICT_4(((int32_t)32));
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_INIT_STATE_5(((int32_t)42));
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_BUSY_STATE_6(((int32_t)113));
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_FINISH_STATE_7(((int32_t)666));
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_Z_DEFLATED_8(8);
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_STORED_BLOCK_9(0);
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_STATIC_TREES_10(1);
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_DYN_TREES_11(2);
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_Z_BINARY_12(0);
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_Z_ASCII_13(1);
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_Z_UNKNOWN_14(2);
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_Buf_size_15(((int32_t)16));
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_MIN_MATCH_16(3);
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_MAX_MATCH_17(((int32_t)258));
		int32_t L_13 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MAX_MATCH_17();
		int32_t L_14 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_MIN_LOOKAHEAD_18(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)), (int32_t)1)));
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_15 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_L_CODES_5();
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_HEAP_SIZE_19(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_15)), (int32_t)1)));
		((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->set_END_BLOCK_20(((int32_t)256));
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeLazyMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeLazyMatch_m93CE9EE1E0A971FC8EB0C4E3E5F05F8A288F9E9E (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tC68F920487AC05FF8321319B93D3B73EEF943750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_w_size_28();
		__this->set_window_size_32(((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_0)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = __this->get_head_34();
		int32_t L_2 = __this->get_hash_size_36();
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_1, 0, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_compressionLevel_49();
		IL2CPP_RUNTIME_CLASS_INIT(Config_tC68F920487AC05FF8321319B93D3B73EEF943750_il2cpp_TypeInfo_var);
		Config_tC68F920487AC05FF8321319B93D3B73EEF943750 * L_4;
		L_4 = Config_Lookup_mC4FDA8B6299E8307F37D9A8DD092AF5F18B80326(L_3, /*hidden argument*/NULL);
		__this->set_config_41(L_4);
		DeflateManager_SetDeflater_m79ECE95C882C362B5441BED32AB1A8518731DF6B(__this, /*hidden argument*/NULL);
		__this->set_strstart_45(0);
		__this->set_block_start_40(0);
		__this->set_lookahead_47(0);
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		V_0 = L_6;
		__this->set_prev_length_48(L_6);
		int32_t L_7 = V_0;
		__this->set_match_length_42(L_7);
		__this->set_match_available_44(0);
		__this->set_ins_h_35(0);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeTreeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeTreeData_m11FA22EF02183D92147B12CF678A34056FE43323 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_0 = __this->get_treeLiterals_54();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = __this->get_dyn_ltree_51();
		L_0->set_dyn_tree_9(L_1);
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_2 = __this->get_treeLiterals_54();
		IL2CPP_RUNTIME_CLASS_INIT(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var);
		StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * L_3 = ((StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var))->get_Literals_2();
		L_2->set_staticTree_11(L_3);
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_4 = __this->get_treeDistances_55();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = __this->get_dyn_dtree_52();
		L_4->set_dyn_tree_9(L_5);
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_6 = __this->get_treeDistances_55();
		StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * L_7 = ((StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var))->get_Distances_3();
		L_6->set_staticTree_11(L_7);
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_8 = __this->get_treeBitLengths_56();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_9 = __this->get_bl_tree_53();
		L_8->set_dyn_tree_9(L_9);
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_10 = __this->get_treeBitLengths_56();
		StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84 * L_11 = ((StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var))->get_BitLengths_4();
		L_10->set_staticTree_11(L_11);
		__this->set_bi_buf_70((int16_t)0);
		__this->set_bi_valid_71(0);
		__this->set_last_eob_len_69(8);
		DeflateManager__InitializeBlocks_m7F106D06F5DC7EB462AB3DA7DD1E93F36B68A5B4(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeBlocks_m7F106D06F5DC7EB462AB3DA7DD1E93F36B68A5B4 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0007:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = __this->get_dyn_ltree_51();
		int32_t L_1 = V_0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2))), (int16_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_4 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_L_CODES_5();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0007;
		}
	}
	{
		V_1 = 0;
		goto IL_0037;
	}

IL_0028:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = __this->get_dyn_dtree_52();
		int32_t L_6 = V_1;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2))), (int16_t)0);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_9 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_D_CODES_2();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0028;
		}
	}
	{
		V_2 = 0;
		goto IL_0058;
	}

IL_0049:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = __this->get_bl_tree_53();
		int32_t L_11 = V_2;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)2))), (int16_t)0);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_14 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_BL_CODES_1();
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0049;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = __this->get_dyn_ltree_51();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_16 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_END_BLOCK_20();
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2))), (int16_t)1);
		int32_t L_17 = 0;
		V_3 = L_17;
		__this->set_static_len_67(L_17);
		int32_t L_18 = V_3;
		__this->set_opt_len_66(L_18);
		int32_t L_19 = 0;
		V_3 = L_19;
		__this->set_matches_68(L_19);
		int32_t L_20 = V_3;
		__this->set_last_lit_64(L_20);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::pqdownheap(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_pqdownheap_m8C456CE4FAFCA17627BFF2EB6D4FEBA169096BBC (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___k1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_heap_58();
		int32_t L_1 = ___k1;
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = ___k1;
		V_1 = ((int32_t)((int32_t)L_4<<(int32_t)1));
		goto IL_007b;
	}

IL_0012:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = __this->get_heap_len_59();
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0045;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = ___tree0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_heap_58();
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = __this->get_heap_58();
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_16 = __this->get_depth_61();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = DeflateManager__IsSmaller_mA0243376FF13A6711967C2E3BE152132C9D5E205(L_7, L_11, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0045:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = ___tree0;
		int32_t L_20 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = __this->get_heap_58();
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_25 = __this->get_depth_61();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = DeflateManager__IsSmaller_mA0243376FF13A6711967C2E3BE152132C9D5E205(L_19, L_20, L_24, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_0087;
	}

IL_0064:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = __this->get_heap_58();
		int32_t L_28 = ___k1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = __this->get_heap_58();
		int32_t L_30 = V_1;
		int32_t L_31 = L_30;
		int32_t L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_32);
		int32_t L_33 = V_1;
		___k1 = L_33;
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34<<(int32_t)1));
	}

IL_007b:
	{
		int32_t L_35 = V_1;
		int32_t L_36 = __this->get_heap_len_59();
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_0012;
		}
	}

IL_0087:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = __this->get_heap_58();
		int32_t L_38 = ___k1;
		int32_t L_39 = V_0;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (int32_t)L_39);
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_IsSmaller(System.Int16[],System.Int32,System.Int32,System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__IsSmaller_mA0243376FF13A6711967C2E3BE152132C9D5E205 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___n1, int32_t ___m2, SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___depth3, const RuntimeMethod* method)
{
	int16_t V_0 = 0;
	int16_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___tree0;
		int32_t L_1 = ___n1;
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2));
		int16_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___tree0;
		int32_t L_5 = ___m2;
		int32_t L_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)2));
		int16_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		int16_t L_8 = V_0;
		int16_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_002c;
		}
	}
	{
		int16_t L_10 = V_0;
		int16_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0029;
		}
	}
	{
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_12 = ___depth3;
		int32_t L_13 = ___n1;
		int32_t L_14 = L_13;
		int8_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_16 = ___depth3;
		int32_t L_17 = ___m2;
		int32_t L_18 = L_17;
		int8_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		G_B4_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_15))) > ((int32_t)((int32_t)((int32_t)L_19))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 0;
	}

IL_002a:
	{
		G_B6_0 = G_B4_0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B6_0 = 1;
	}

IL_002d:
	{
		return (bool)G_B6_0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::scan_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_scan_tree_m52B6786F8D6B5C834C5F7C807BD72038512C5EE8 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_1 = (-1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___tree0;
		int32_t L_1 = 1;
		int16_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_3 = L_2;
		V_4 = 0;
		V_5 = 7;
		V_6 = 4;
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
	}

IL_001f:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___tree0;
		int32_t L_5 = ___max_code1;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), (int32_t)2)), (int32_t)1))), (int16_t)((int32_t)32767));
		V_0 = 0;
		goto IL_0132;
	}

IL_0034:
	{
		int32_t L_6 = V_3;
		V_2 = L_6;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = ___tree0;
		int32_t L_8 = V_0;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), (int32_t)2)), (int32_t)1));
		int16_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		int32_t L_11 = V_4;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		V_4 = L_12;
		int32_t L_13 = V_5;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_005a;
		}
	}
	{
		goto IL_012e;
	}

IL_005a:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = V_6;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0080;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_18 = __this->get_bl_tree_53();
		int32_t L_19 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = __this->get_bl_tree_53();
		int32_t L_21 = V_2;
		int32_t L_22 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)2));
		int16_t L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = V_4;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2))), (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24)))));
		goto IL_00fc;
	}

IL_0080:
	{
		int32_t L_25 = V_2;
		if (!L_25)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_26 = V_2;
		int32_t L_27 = V_1;
		if ((((int32_t)L_26) == ((int32_t)L_27)))
		{
			goto IL_00a1;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_28 = __this->get_bl_tree_53();
		int32_t L_29 = V_2;
		int16_t* L_30 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)2)))));
		int32_t L_31 = *((int16_t*)L_30);
		*((int16_t*)L_30) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1))));
	}

IL_00a1:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_32 = __this->get_bl_tree_53();
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_33 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_REP_3_6_7();
		int16_t* L_34 = ((L_32)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_33, (int32_t)2)))));
		int32_t L_35 = *((int16_t*)L_34);
		*((int16_t*)L_34) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1))));
		goto IL_00fc;
	}

IL_00be:
	{
		int32_t L_36 = V_4;
		if ((((int32_t)L_36) > ((int32_t)((int32_t)10))))
		{
			goto IL_00e4;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_37 = __this->get_bl_tree_53();
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_38 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_REPZ_3_10_8();
		int16_t* L_39 = ((L_37)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)2)))));
		int32_t L_40 = *((int16_t*)L_39);
		*((int16_t*)L_39) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1))));
		goto IL_00fc;
	}

IL_00e4:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_41 = __this->get_bl_tree_53();
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_42 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_REPZ_11_138_9();
		int16_t* L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)2)))));
		int32_t L_44 = *((int16_t*)L_43);
		*((int16_t*)L_43) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1))));
	}

IL_00fc:
	{
		V_4 = 0;
		int32_t L_45 = V_2;
		V_1 = L_45;
		int32_t L_46 = V_3;
		if (L_46)
		{
			goto IL_0116;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
		goto IL_012e;
	}

IL_0116:
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_3;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0128;
		}
	}
	{
		V_5 = 6;
		V_6 = 3;
		goto IL_012e;
	}

IL_0128:
	{
		V_5 = 7;
		V_6 = 4;
	}

IL_012e:
	{
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_0132:
	{
		int32_t L_50 = V_0;
		int32_t L_51 = ___max_code1;
		if ((((int32_t)L_50) <= ((int32_t)L_51)))
		{
			goto IL_0034;
		}
	}
	{
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::build_bl_tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_build_bl_tree_m6811C4AC8D1AD1A9C925F19F2C2BE7E550829107 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = __this->get_dyn_ltree_51();
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_1 = __this->get_treeLiterals_54();
		int32_t L_2 = L_1->get_max_code_10();
		DeflateManager_scan_tree_m52B6786F8D6B5C834C5F7C807BD72038512C5EE8(__this, L_0, L_2, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = __this->get_dyn_dtree_52();
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_4 = __this->get_treeDistances_55();
		int32_t L_5 = L_4->get_max_code_10();
		DeflateManager_scan_tree_m52B6786F8D6B5C834C5F7C807BD72038512C5EE8(__this, L_3, L_5, /*hidden argument*/NULL);
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_6 = __this->get_treeBitLengths_56();
		Tree_build_tree_mFD67D06DFAA1738D6341CB80A2754A944550ECDC(L_6, __this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_7 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_BL_CODES_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		goto IL_0068;
	}

IL_0047:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = __this->get_bl_tree_53();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_9 = ((Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var))->get_bl_order_4();
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		int8_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_12)), (int32_t)2)), (int32_t)1));
		int16_t L_14 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_006f;
	}

IL_0064:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)3)))
		{
			goto IL_0047;
		}
	}

IL_006f:
	{
		int32_t L_17 = __this->get_opt_len_66();
		int32_t L_18 = V_0;
		__this->set_opt_len_66(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)))), (int32_t)5)), (int32_t)5)), (int32_t)4)))));
		int32_t L_19 = V_0;
		return L_19;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_all_trees(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_all_trees_m91FF5E0EDCE9B048EDC7A46C3F54851DE5AC8979 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___lcodes0;
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)257))), 5, /*hidden argument*/NULL);
		int32_t L_1 = ___dcodes1;
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), 5, /*hidden argument*/NULL);
		int32_t L_2 = ___blcodes2;
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)4)), 4, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0047;
	}

IL_0029:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = __this->get_bl_tree_53();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_4 = ((Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var))->get_bl_order_4();
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		int8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_7)), (int32_t)2)), (int32_t)1));
		int16_t L_9 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(__this, L_9, 3, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___blcodes2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0029;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_13 = __this->get_dyn_ltree_51();
		int32_t L_14 = ___lcodes0;
		DeflateManager_send_tree_m5E9FBD49F37E35B9B52F556C871EAE81B0285D01(__this, L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = __this->get_dyn_dtree_52();
		int32_t L_16 = ___dcodes1;
		DeflateManager_send_tree_m5E9FBD49F37E35B9B52F556C871EAE81B0285D01(__this, L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_tree_m5E9FBD49F37E35B9B52F556C871EAE81B0285D01 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_1 = (-1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___tree0;
		int32_t L_1 = 1;
		int16_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_3 = L_2;
		V_4 = 0;
		V_5 = 7;
		V_6 = 4;
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
	}

IL_001f:
	{
		V_0 = 0;
		goto IL_0131;
	}

IL_0026:
	{
		int32_t L_4 = V_3;
		V_2 = L_4;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = ___tree0;
		int32_t L_6 = V_0;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), (int32_t)2)), (int32_t)1));
		int16_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		int32_t L_9 = V_4;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		V_4 = L_10;
		int32_t L_11 = V_5;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_012d;
	}

IL_004c:
	{
		int32_t L_14 = V_4;
		int32_t L_15 = V_6;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0073;
		}
	}

IL_0055:
	{
		int32_t L_16 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_17 = __this->get_bl_tree_53();
		DeflateManager_send_code_m093000C31E5EA1A327CE59D77249110107DBEE66(__this, L_16, L_17, /*hidden argument*/NULL);
		int32_t L_18 = V_4;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
		V_4 = L_19;
		if (L_19)
		{
			goto IL_0055;
		}
	}
	{
		goto IL_00fb;
	}

IL_0073:
	{
		int32_t L_20 = V_2;
		if (!L_20)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_23 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_24 = __this->get_bl_tree_53();
		DeflateManager_send_code_m093000C31E5EA1A327CE59D77249110107DBEE66(__this, L_23, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
	}

IL_0093:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_26 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_REP_3_6_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_27 = __this->get_bl_tree_53();
		DeflateManager_send_code_m093000C31E5EA1A327CE59D77249110107DBEE66(__this, L_26, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_4;
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)3)), 2, /*hidden argument*/NULL);
		goto IL_00fb;
	}

IL_00b4:
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)10))))
		{
			goto IL_00de;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_30 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_REPZ_3_10_8();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_31 = __this->get_bl_tree_53();
		DeflateManager_send_code_m093000C31E5EA1A327CE59D77249110107DBEE66(__this, L_30, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_4;
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)3)), 3, /*hidden argument*/NULL);
		goto IL_00fb;
	}

IL_00de:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_33 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_REPZ_11_138_9();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_34 = __this->get_bl_tree_53();
		DeflateManager_send_code_m093000C31E5EA1A327CE59D77249110107DBEE66(__this, L_33, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_4;
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)((int32_t)11))), 7, /*hidden argument*/NULL);
	}

IL_00fb:
	{
		V_4 = 0;
		int32_t L_36 = V_2;
		V_1 = L_36;
		int32_t L_37 = V_3;
		if (L_37)
		{
			goto IL_0115;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
		goto IL_012d;
	}

IL_0115:
	{
		int32_t L_38 = V_2;
		int32_t L_39 = V_3;
		if ((!(((uint32_t)L_38) == ((uint32_t)L_39))))
		{
			goto IL_0127;
		}
	}
	{
		V_5 = 6;
		V_6 = 3;
		goto IL_012d;
	}

IL_0127:
	{
		V_5 = 7;
		V_6 = 4;
	}

IL_012d:
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_0131:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = ___max_code1;
		if ((((int32_t)L_41) <= ((int32_t)L_42)))
		{
			goto IL_0026;
		}
	}
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::put_bytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_put_bytes_mB8FAAD3E7B908ADF00BA2C598E05F725773A8C36 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___p0;
		int32_t L_1 = ___start1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_pending_23();
		int32_t L_3 = __this->get_pendingCount_25();
		int32_t L_4 = ___len2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_0, L_1, (RuntimeArray *)(RuntimeArray *)L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_pendingCount_25();
		int32_t L_6 = ___len2;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6)));
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_code(System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_code_m093000C31E5EA1A327CE59D77249110107DBEE66 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___c0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___c0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)2));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = ___tree1;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		int16_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = ___tree1;
		int32_t L_6 = V_0;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int16_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(__this, ((int32_t)((int32_t)L_4&(int32_t)((int32_t)65535))), ((int32_t)((int32_t)L_8&(int32_t)((int32_t)65535))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_bits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___value0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___length1;
		V_0 = L_0;
		int32_t L_1 = __this->get_bi_valid_71();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_2 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_Buf_size_15();
		int32_t L_3 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)))))
		{
			goto IL_00a5;
		}
	}
	{
		int16_t L_4 = __this->get_bi_buf_70();
		int32_t L_5 = ___value0;
		int32_t L_6 = __this->get_bi_valid_71();
		__this->set_bi_buf_70(((int16_t)((int16_t)((int32_t)((int32_t)L_4|(int32_t)((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))))&(int32_t)((int32_t)65535))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_pending_23();
		int32_t L_8 = __this->get_pendingCount_25();
		int32_t L_9 = L_8;
		V_1 = L_9;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		int32_t L_10 = V_1;
		int16_t L_11 = __this->get_bi_buf_70();
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)((uint8_t)L_11)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_pending_23();
		int32_t L_13 = __this->get_pendingCount_25();
		int32_t L_14 = L_13;
		V_1 = L_14;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		int32_t L_15 = V_1;
		int16_t L_16 = __this->get_bi_buf_70();
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_16>>(int32_t)8)))));
		int32_t L_17 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_18 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_Buf_size_15();
		int32_t L_19 = __this->get_bi_valid_71();
		__this->set_bi_buf_70(((int16_t)((int16_t)((int32_t)((uint32_t)L_17>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19))&(int32_t)((int32_t)31))))))));
		int32_t L_20 = __this->get_bi_valid_71();
		int32_t L_21 = V_0;
		int32_t L_22 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_Buf_size_15();
		__this->set_bi_valid_71(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22)))));
		goto IL_00d3;
	}

IL_00a5:
	{
		int16_t L_23 = __this->get_bi_buf_70();
		int32_t L_24 = ___value0;
		int32_t L_25 = __this->get_bi_valid_71();
		__this->set_bi_buf_70(((int16_t)((int16_t)((int32_t)((int32_t)L_23|(int32_t)((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_24<<(int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)31)))))&(int32_t)((int32_t)65535))))))))));
		int32_t L_26 = __this->get_bi_valid_71();
		int32_t L_27 = V_0;
		__this->set_bi_valid_71(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27)));
	}

IL_00d3:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_align()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_align_m1076086A7E698192105E93EA1EFD63F896D97BCD (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_STATIC_TREES_10();
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(__this, ((int32_t)((int32_t)L_0<<(int32_t)1)), 3, /*hidden argument*/NULL);
		int32_t L_1 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_END_BLOCK_20();
		IL2CPP_RUNTIME_CLASS_INIT(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = ((StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var))->get_lengthAndLiteralsTreeCodes_0();
		DeflateManager_send_code_m093000C31E5EA1A327CE59D77249110107DBEE66(__this, L_1, L_2, /*hidden argument*/NULL);
		DeflateManager_bi_flush_m77526C0F8853E556E370A97C0684B0B4F0FE3620(__this, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_last_eob_len_69();
		int32_t L_4 = __this->get_bi_valid_71();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_3)), (int32_t)((int32_t)10))), (int32_t)L_4))) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_STATIC_TREES_10();
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(__this, ((int32_t)((int32_t)L_5<<(int32_t)1)), 3, /*hidden argument*/NULL);
		int32_t L_6 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_END_BLOCK_20();
		IL2CPP_RUNTIME_CLASS_INIT(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = ((StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var))->get_lengthAndLiteralsTreeCodes_0();
		DeflateManager_send_code_m093000C31E5EA1A327CE59D77249110107DBEE66(__this, L_6, L_7, /*hidden argument*/NULL);
		DeflateManager_bi_flush_m77526C0F8853E556E370A97C0684B0B4F0FE3620(__this, /*hidden argument*/NULL);
	}

IL_0061:
	{
		__this->set_last_eob_len_69(7);
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_tr_tally(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__tr_tally_mC60BFC2741CD6B0F4A7C74EB491EF9391B79B360 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___dist0, int32_t ___lc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B14_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_pending_23();
		int32_t L_1 = __this->get__distanceOffset_65();
		int32_t L_2 = __this->get_last_lit_64();
		int32_t L_3 = ___dist0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2))))), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_3>>8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_pending_23();
		int32_t L_5 = __this->get__distanceOffset_65();
		int32_t L_6 = __this->get_last_lit_64();
		int32_t L_7 = ___dist0;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2)))), (int32_t)1))), (uint8_t)((int32_t)((uint8_t)L_7)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_pending_23();
		int32_t L_9 = __this->get__lengthOffset_62();
		int32_t L_10 = __this->get_last_lit_64();
		int32_t L_11 = ___lc1;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10))), (uint8_t)((int32_t)((uint8_t)L_11)));
		int32_t L_12 = __this->get_last_lit_64();
		__this->set_last_lit_64(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
		int32_t L_13 = ___dist0;
		if (L_13)
		{
			goto IL_0077;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_14 = __this->get_dyn_ltree_51();
		int32_t L_15 = ___lc1;
		int16_t* L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)))));
		int32_t L_17 = *((int16_t*)L_16);
		*((int16_t*)L_16) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1))));
		goto IL_00c6;
	}

IL_0077:
	{
		int32_t L_18 = __this->get_matches_68();
		__this->set_matches_68(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		int32_t L_19 = ___dist0;
		___dist0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = __this->get_dyn_ltree_51();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_21 = ((Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var))->get_LengthCode_6();
		int32_t L_22 = ___lc1;
		int32_t L_23 = L_22;
		int8_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_25 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_LITERALS_3();
		int16_t* L_26 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_24)), (int32_t)L_25)), (int32_t)1)), (int32_t)2)))));
		int32_t L_27 = *((int16_t*)L_26);
		*((int16_t*)L_26) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_28 = __this->get_dyn_dtree_52();
		int32_t L_29 = ___dist0;
		int32_t L_30;
		L_30 = Tree_DistanceCode_m9C11788CD286B21C5B8FA68447A9BA7FC092B773(L_29, /*hidden argument*/NULL);
		int16_t* L_31 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)2)))));
		int32_t L_32 = *((int16_t*)L_31);
		*((int16_t*)L_31) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1))));
	}

IL_00c6:
	{
		int32_t L_33 = __this->get_last_lit_64();
		if (((int32_t)((int32_t)L_33&(int32_t)((int32_t)8191))))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_34 = __this->get_compressionLevel_49();
		if ((((int32_t)L_34) <= ((int32_t)2)))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_35 = __this->get_last_lit_64();
		V_0 = ((int32_t)((int32_t)L_35<<(int32_t)3));
		int32_t L_36 = __this->get_strstart_45();
		int32_t L_37 = __this->get_block_start_40();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37));
		V_2 = 0;
		goto IL_0121;
	}

IL_0101:
	{
		int32_t L_38 = V_0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_39 = __this->get_dyn_dtree_52();
		int32_t L_40 = V_2;
		int32_t L_41 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)2));
		int16_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = ((Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var))->get_ExtraDistanceBits_2();
		int32_t L_44 = V_2;
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int32_t)((int32_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_38)), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_42)), (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)5)), (int64_t)((int64_t)((int64_t)L_46))))))))));
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_0121:
	{
		int32_t L_48 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_49 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_D_CODES_2();
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_50 = V_0;
		V_0 = ((int32_t)((int32_t)L_50>>(int32_t)3));
		int32_t L_51 = __this->get_matches_68();
		int32_t L_52 = __this->get_last_lit_64();
		if ((((int32_t)L_51) >= ((int32_t)((int32_t)((int32_t)L_52/(int32_t)2)))))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		if ((((int32_t)L_53) >= ((int32_t)((int32_t)((int32_t)L_54/(int32_t)2)))))
		{
			goto IL_014e;
		}
	}
	{
		return (bool)1;
	}

IL_014e:
	{
		int32_t L_55 = __this->get_last_lit_64();
		int32_t L_56 = __this->get_lit_bufsize_63();
		if ((((int32_t)L_55) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)1)))))
		{
			goto IL_0171;
		}
	}
	{
		int32_t L_57 = __this->get_last_lit_64();
		int32_t L_58 = __this->get_lit_bufsize_63();
		G_B14_0 = ((((int32_t)L_57) == ((int32_t)L_58))? 1 : 0);
		goto IL_0172;
	}

IL_0171:
	{
		G_B14_0 = 1;
	}

IL_0172:
	{
		return (bool)G_B14_0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_compressed_block(System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_compressed_block_m99D87EAC0971A2F94F97268511EE3C3C70E01A7D (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___ltree0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dtree1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_2 = 0;
		int32_t L_0 = __this->get_last_lit_64();
		if (!L_0)
		{
			goto IL_00e8;
		}
	}

IL_000d:
	{
		int32_t L_1 = __this->get__distanceOffset_65();
		int32_t L_2 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_pending_23();
		int32_t L_4 = V_5;
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_pending_23();
		int32_t L_8 = V_5;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		uint8_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6<<(int32_t)8))&(int32_t)((int32_t)65280)))|(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)255)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_pending_23();
		int32_t L_12 = __this->get__lengthOffset_62();
		int32_t L_13 = V_2;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		uint8_t L_15 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)((int32_t)L_15&(int32_t)((int32_t)255)));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		int32_t L_17 = V_0;
		if (L_17)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_18 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = ___ltree0;
		DeflateManager_send_code_m093000C31E5EA1A327CE59D77249110107DBEE66(__this, L_18, L_19, /*hidden argument*/NULL);
		goto IL_00dc;
	}

IL_006a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_20 = ((Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var))->get_LengthCode_6();
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		int8_t L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((int32_t)((int32_t)L_23));
		int32_t L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_25 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_LITERALS_3();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_26 = ___ltree0;
		DeflateManager_send_code_m093000C31E5EA1A327CE59D77249110107DBEE66(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25)), (int32_t)1)), L_26, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = ((Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var))->get_ExtraLengthBits_1();
		int32_t L_28 = V_3;
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		V_4 = L_30;
		int32_t L_31 = V_4;
		if (!L_31)
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = ((Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var))->get_LengthBase_7();
		int32_t L_34 = V_3;
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_36));
		int32_t L_37 = V_1;
		int32_t L_38 = V_4;
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(__this, L_37, L_38, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
		int32_t L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = Tree_DistanceCode_m9C11788CD286B21C5B8FA68447A9BA7FC092B773(L_40, /*hidden argument*/NULL);
		V_3 = L_41;
		int32_t L_42 = V_3;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_43 = ___dtree1;
		DeflateManager_send_code_m093000C31E5EA1A327CE59D77249110107DBEE66(__this, L_42, L_43, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = ((Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var))->get_ExtraDistanceBits_2();
		int32_t L_45 = V_3;
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		V_4 = L_47;
		int32_t L_48 = V_4;
		if (!L_48)
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_49 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = ((Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79_il2cpp_TypeInfo_var))->get_DistanceBase_8();
		int32_t L_51 = V_3;
		int32_t L_52 = L_51;
		int32_t L_53 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_53));
		int32_t L_54 = V_0;
		int32_t L_55 = V_4;
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(__this, L_54, L_55, /*hidden argument*/NULL);
	}

IL_00dc:
	{
		int32_t L_56 = V_2;
		int32_t L_57 = __this->get_last_lit_64();
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_000d;
		}
	}

IL_00e8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_58 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_END_BLOCK_20();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_59 = ___ltree0;
		DeflateManager_send_code_m093000C31E5EA1A327CE59D77249110107DBEE66(__this, L_58, L_59, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_60 = ___ltree0;
		int32_t L_61 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_END_BLOCK_20();
		int32_t L_62 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_61, (int32_t)2)), (int32_t)1));
		int16_t L_63 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		__this->set_last_eob_len_69(L_63);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::set_data_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_set_data_type_mC68ABBE49D1F26BA0872773DA81D9D46F6EBBC34 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B11_0 = NULL;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B12_1 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_001c;
	}

IL_000b:
	{
		int32_t L_0 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = __this->get_dyn_ltree_51();
		int32_t L_2 = V_0;
		int32_t L_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2));
		int16_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_4));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)7)))
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0039;
	}

IL_0028:
	{
		int32_t L_7 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = __this->get_dyn_ltree_51();
		int32_t L_9 = V_0;
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2));
		int16_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_005a;
	}

IL_0049:
	{
		int32_t L_14 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = __this->get_dyn_ltree_51();
		int32_t L_16 = V_0;
		int32_t L_17 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2));
		int16_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_18));
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var);
		int32_t L_21 = ((InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3CFA9121A848A412C4CEC323659B25E8873A030D_il2cpp_TypeInfo_var))->get_LITERALS_3();
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		G_B10_0 = __this;
		if ((((int32_t)L_22) <= ((int32_t)((int32_t)((int32_t)L_23>>(int32_t)2)))))
		{
			G_B11_0 = __this;
			goto IL_0079;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_24 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_Z_BINARY_12();
		G_B12_0 = L_24;
		G_B12_1 = G_B10_0;
		goto IL_007e;
	}

IL_0079:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_25 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_Z_ASCII_13();
		G_B12_0 = L_25;
		G_B12_1 = G_B11_0;
	}

IL_007e:
	{
		G_B12_1->set_data_type_26(((int8_t)((int8_t)G_B12_0)));
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::bi_flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_flush_m77526C0F8853E556E370A97C0684B0B4F0FE3620 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bi_valid_71();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0060;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_pending_23();
		int32_t L_2 = __this->get_pendingCount_25();
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = V_0;
		int16_t L_5 = __this->get_bi_buf_70();
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)((uint8_t)L_5)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_pending_23();
		int32_t L_7 = __this->get_pendingCount_25();
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_0;
		int16_t L_10 = __this->get_bi_buf_70();
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_10>>(int32_t)8)))));
		__this->set_bi_buf_70((int16_t)0);
		__this->set_bi_valid_71(0);
		goto IL_00a8;
	}

IL_0060:
	{
		int32_t L_11 = __this->get_bi_valid_71();
		if ((((int32_t)L_11) < ((int32_t)8)))
		{
			goto IL_00a8;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_pending_23();
		int32_t L_13 = __this->get_pendingCount_25();
		int32_t L_14 = L_13;
		V_0 = L_14;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		int32_t L_15 = V_0;
		int16_t L_16 = __this->get_bi_buf_70();
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)((uint8_t)L_16)));
		int16_t L_17 = __this->get_bi_buf_70();
		__this->set_bi_buf_70(((int16_t)((int16_t)((int32_t)((int32_t)L_17>>(int32_t)8)))));
		int32_t L_18 = __this->get_bi_valid_71();
		__this->set_bi_valid_71(((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)8)));
	}

IL_00a8:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::bi_windup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_windup_mA391F1C8EC195C7F42167EDBD47DE421B71F8F4F (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bi_valid_71();
		if ((((int32_t)L_0) <= ((int32_t)8)))
		{
			goto IL_0051;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_pending_23();
		int32_t L_2 = __this->get_pendingCount_25();
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = V_0;
		int16_t L_5 = __this->get_bi_buf_70();
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)((uint8_t)L_5)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_pending_23();
		int32_t L_7 = __this->get_pendingCount_25();
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_0;
		int16_t L_10 = __this->get_bi_buf_70();
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_10>>(int32_t)8)))));
		goto IL_007c;
	}

IL_0051:
	{
		int32_t L_11 = __this->get_bi_valid_71();
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_pending_23();
		int32_t L_13 = __this->get_pendingCount_25();
		int32_t L_14 = L_13;
		V_0 = L_14;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		int32_t L_15 = V_0;
		int16_t L_16 = __this->get_bi_buf_70();
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)((uint8_t)L_16)));
	}

IL_007c:
	{
		__this->set_bi_buf_70((int16_t)0);
		__this->set_bi_valid_71(0);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::copy_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_copy_block_m0EDE0C2ECDEAEF61E76329B85792330C3DD34F4F (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		DeflateManager_bi_windup_mA391F1C8EC195C7F42167EDBD47DE421B71F8F4F(__this, /*hidden argument*/NULL);
		__this->set_last_eob_len_69(8);
		bool L_0 = ___header2;
		if (!L_0)
		{
			goto IL_0081;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_pending_23();
		int32_t L_2 = __this->get_pendingCount_25();
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = V_0;
		int32_t L_5 = ___len1;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)((uint8_t)L_5)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_pending_23();
		int32_t L_7 = __this->get_pendingCount_25();
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_0;
		int32_t L_10 = ___len1;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_10>>(int32_t)8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_pending_23();
		int32_t L_12 = __this->get_pendingCount_25();
		int32_t L_13 = L_12;
		V_0 = L_13;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_0;
		int32_t L_15 = ___len1;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)((uint8_t)((~L_15)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_pending_23();
		int32_t L_17 = __this->get_pendingCount_25();
		int32_t L_18 = L_17;
		V_0 = L_18;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		int32_t L_19 = V_0;
		int32_t L_20 = ___len1;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((~L_20))>>(int32_t)8)))));
	}

IL_0081:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get_window_31();
		int32_t L_22 = ___buf0;
		int32_t L_23 = ___len1;
		DeflateManager_put_bytes_mB8FAAD3E7B908ADF00BA2C598E05F725773A8C36(__this, L_21, L_22, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::flush_block_only(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_flush_block_only_m377B129B393042403173E0FEA03DB34A1EABF8F5 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, bool ___eof0, const RuntimeMethod* method)
{
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B2_0 = NULL;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B3_1 = NULL;
	{
		int32_t L_0 = __this->get_block_start_40();
		G_B1_0 = __this;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_block_start_40();
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		int32_t L_2 = __this->get_strstart_45();
		int32_t L_3 = __this->get_block_start_40();
		bool L_4 = ___eof0;
		DeflateManager__tr_flush_block_mBBD92BB5FD04F3B60CD4FD2FCAFB98843073CE8D(G_B3_1, G_B3_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)), L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_strstart_45();
		__this->set_block_start_40(L_5);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_6 = __this->get__codec_21();
		ZlibCodec_flush_pending_m06EF71CF66CDF4748E225060DDCA7391A58987C1(L_6, /*hidden argument*/NULL);
		return;
	}
}
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager::DeflateNone(Pathfinding.Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_DeflateNone_m4ADD4D81644AB170760CD10278CB7AB755FE30DF (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B24_0 = 0;
	{
		V_0 = ((int32_t)65535);
		int32_t L_0 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_pending_23();
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)5)))))
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_pending_23();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)5));
	}

IL_0021:
	{
		int32_t L_3 = __this->get_lookahead_47();
		if ((((int32_t)L_3) > ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		DeflateManager__fillWindow_mB7ECF5F51AB8C40CA5D3C8A89CFE9026B868869A(__this, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_lookahead_47();
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = ___flush0;
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0046:
	{
		int32_t L_6 = __this->get_lookahead_47();
		if (L_6)
		{
			goto IL_0056;
		}
	}
	{
		goto IL_00fa;
	}

IL_0056:
	{
		int32_t L_7 = __this->get_strstart_45();
		int32_t L_8 = __this->get_lookahead_47();
		__this->set_strstart_45(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		__this->set_lookahead_47(0);
		int32_t L_9 = __this->get_block_start_40();
		int32_t L_10 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
		int32_t L_11 = __this->get_strstart_45();
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_12 = __this->get_strstart_45();
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_00be;
		}
	}

IL_0090:
	{
		int32_t L_14 = __this->get_strstart_45();
		int32_t L_15 = V_1;
		__this->set_lookahead_47(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)));
		int32_t L_16 = V_1;
		__this->set_strstart_45(L_16);
		DeflateManager_flush_block_only_m377B129B393042403173E0FEA03DB34A1EABF8F5(__this, (bool)0, /*hidden argument*/NULL);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_17 = __this->get__codec_21();
		int32_t L_18 = L_17->get_AvailableBytesOut_6();
		if (L_18)
		{
			goto IL_00be;
		}
	}
	{
		return (int32_t)(0);
	}

IL_00be:
	{
		int32_t L_19 = __this->get_strstart_45();
		int32_t L_20 = __this->get_block_start_40();
		int32_t L_21 = __this->get_w_size_28();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_22 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_18();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20))) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22)))))
		{
			goto IL_00f5;
		}
	}
	{
		DeflateManager_flush_block_only_m377B129B393042403173E0FEA03DB34A1EABF8F5(__this, (bool)0, /*hidden argument*/NULL);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_23 = __this->get__codec_21();
		int32_t L_24 = L_23->get_AvailableBytesOut_6();
		if (L_24)
		{
			goto IL_00f5;
		}
	}
	{
		return (int32_t)(0);
	}

IL_00f5:
	{
		goto IL_0021;
	}

IL_00fa:
	{
		int32_t L_25 = ___flush0;
		DeflateManager_flush_block_only_m377B129B393042403173E0FEA03DB34A1EABF8F5(__this, (bool)((((int32_t)L_25) == ((int32_t)4))? 1 : 0), /*hidden argument*/NULL);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_26 = __this->get__codec_21();
		int32_t L_27 = L_26->get_AvailableBytesOut_6();
		if (L_27)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_28 = ___flush0;
		if ((!(((uint32_t)L_28) == ((uint32_t)4))))
		{
			goto IL_0121;
		}
	}
	{
		G_B20_0 = 2;
		goto IL_0122;
	}

IL_0121:
	{
		G_B20_0 = 0;
	}

IL_0122:
	{
		return (int32_t)(G_B20_0);
	}

IL_0123:
	{
		int32_t L_29 = ___flush0;
		if ((!(((uint32_t)L_29) == ((uint32_t)4))))
		{
			goto IL_0130;
		}
	}
	{
		G_B24_0 = 3;
		goto IL_0131;
	}

IL_0130:
	{
		G_B24_0 = 1;
	}

IL_0131:
	{
		return (int32_t)(G_B24_0);
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_stored_block_mE9692FBE125A35C18AFC94EB4EF7DB43C6A9CC01 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B3_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_STORED_BLOCK_9();
		bool L_1 = ___eof2;
		G_B1_0 = ((int32_t)((int32_t)L_0<<(int32_t)1));
		G_B1_1 = __this;
		if (!L_1)
		{
			G_B2_0 = ((int32_t)((int32_t)L_0<<(int32_t)1));
			G_B2_1 = __this;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0015:
	{
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(G_B3_2, ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0)), 3, /*hidden argument*/NULL);
		int32_t L_2 = ___buf0;
		int32_t L_3 = ___stored_len1;
		DeflateManager_copy_block_m0EDE0C2ECDEAEF61E76329B85792330C3DD34F4F(__this, L_2, L_3, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_flush_block_mBBD92BB5FD04F3B60CD4FD2FCAFB98843073CE8D (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B13_0 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B13_1 = NULL;
	int32_t G_B12_0 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B12_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B14_2 = NULL;
	int32_t G_B17_0 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B17_1 = NULL;
	int32_t G_B16_0 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B16_1 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B18_2 = NULL;
	{
		V_2 = 0;
		int32_t L_0 = __this->get_compressionLevel_49();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		int8_t L_1 = __this->get_data_type_26();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_2 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_Z_UNKNOWN_14();
		if ((!(((uint32_t)((int32_t)((int32_t)L_1))) == ((uint32_t)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		DeflateManager_set_data_type_mC68ABBE49D1F26BA0872773DA81D9D46F6EBBC34(__this, /*hidden argument*/NULL);
	}

IL_0025:
	{
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_3 = __this->get_treeLiterals_54();
		Tree_build_tree_mFD67D06DFAA1738D6341CB80A2754A944550ECDC(L_3, __this, /*hidden argument*/NULL);
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_4 = __this->get_treeDistances_55();
		Tree_build_tree_mFD67D06DFAA1738D6341CB80A2754A944550ECDC(L_4, __this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = DeflateManager_build_bl_tree_m6811C4AC8D1AD1A9C925F19F2C2BE7E550829107(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = __this->get_opt_len_66();
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)3)), (int32_t)7))>>(int32_t)3));
		int32_t L_7 = __this->get_static_len_67();
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)3)), (int32_t)7))>>(int32_t)3));
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) > ((int32_t)L_9)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_10 = V_1;
		V_0 = L_10;
	}

IL_0067:
	{
		goto IL_0072;
	}

IL_006c:
	{
		int32_t L_11 = ___stored_len1;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)5));
		V_1 = L_12;
		V_0 = L_12;
	}

IL_0072:
	{
		int32_t L_13 = ___stored_len1;
		int32_t L_14 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)4))) > ((int32_t)L_14)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_15 = ___buf0;
		if ((((int32_t)L_15) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_16 = ___buf0;
		int32_t L_17 = ___stored_len1;
		bool L_18 = ___eof2;
		DeflateManager__tr_stored_block_mE9692FBE125A35C18AFC94EB4EF7DB43C6A9CC01(__this, L_16, L_17, L_18, /*hidden argument*/NULL);
		goto IL_0119;
	}

IL_0090:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_00c8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_21 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_STATIC_TREES_10();
		bool L_22 = ___eof2;
		G_B12_0 = ((int32_t)((int32_t)L_21<<(int32_t)1));
		G_B12_1 = __this;
		if (!L_22)
		{
			G_B13_0 = ((int32_t)((int32_t)L_21<<(int32_t)1));
			G_B13_1 = __this;
			goto IL_00ab;
		}
	}
	{
		G_B14_0 = 1;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_00ac:
	{
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(G_B14_2, ((int32_t)il2cpp_codegen_add((int32_t)G_B14_1, (int32_t)G_B14_0)), 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_23 = ((StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var))->get_lengthAndLiteralsTreeCodes_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_24 = ((StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t43C48B10E485754161D38E79A702F753FD6AAC84_il2cpp_TypeInfo_var))->get_distTreeCodes_1();
		DeflateManager_send_compressed_block_m99D87EAC0971A2F94F97268511EE3C3C70E01A7D(__this, L_23, L_24, /*hidden argument*/NULL);
		goto IL_0119;
	}

IL_00c8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_25 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_DYN_TREES_11();
		bool L_26 = ___eof2;
		G_B16_0 = ((int32_t)((int32_t)L_25<<(int32_t)1));
		G_B16_1 = __this;
		if (!L_26)
		{
			G_B17_0 = ((int32_t)((int32_t)L_25<<(int32_t)1));
			G_B17_1 = __this;
			goto IL_00dc;
		}
	}
	{
		G_B18_0 = 1;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		goto IL_00dd;
	}

IL_00dc:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
	}

IL_00dd:
	{
		DeflateManager_send_bits_m1B5874A284BC5A7F6A755286843C11175033AB03(G_B18_2, ((int32_t)il2cpp_codegen_add((int32_t)G_B18_1, (int32_t)G_B18_0)), 3, /*hidden argument*/NULL);
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_27 = __this->get_treeLiterals_54();
		int32_t L_28 = L_27->get_max_code_10();
		Tree_t1907DE7E76FA647A9B765551187F8B97754A0D79 * L_29 = __this->get_treeDistances_55();
		int32_t L_30 = L_29->get_max_code_10();
		int32_t L_31 = V_2;
		DeflateManager_send_all_trees_m91FF5E0EDCE9B048EDC7A46C3F54851DE5AC8979(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)), /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_32 = __this->get_dyn_ltree_51();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_33 = __this->get_dyn_dtree_52();
		DeflateManager_send_compressed_block_m99D87EAC0971A2F94F97268511EE3C3C70E01A7D(__this, L_32, L_33, /*hidden argument*/NULL);
	}

IL_0119:
	{
		DeflateManager__InitializeBlocks_m7F106D06F5DC7EB462AB3DA7DD1E93F36B68A5B4(__this, /*hidden argument*/NULL);
		bool L_34 = ___eof2;
		if (!L_34)
		{
			goto IL_012b;
		}
	}
	{
		DeflateManager_bi_windup_mA391F1C8EC195C7F42167EDBD47DE421B71F8F4F(__this, /*hidden argument*/NULL);
	}

IL_012b:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_fillWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__fillWindow_mB7ECF5F51AB8C40CA5D3C8A89CFE9026B868869A (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B10_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B10_1 = NULL;
	int32_t G_B9_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B11_2 = NULL;
	int32_t G_B15_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B15_1 = NULL;
	int32_t G_B14_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B16_2 = NULL;

IL_0000:
	{
		int32_t L_0 = __this->get_window_size_32();
		int32_t L_1 = __this->get_lookahead_47();
		int32_t L_2 = __this->get_strstart_45();
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2));
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = __this->get_strstart_45();
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = __this->get_lookahead_47();
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = __this->get_w_size_28();
		V_3 = L_6;
		goto IL_015d;
	}

IL_003d:
	{
		int32_t L_7 = V_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		goto IL_015d;
	}

IL_004d:
	{
		int32_t L_9 = __this->get_strstart_45();
		int32_t L_10 = __this->get_w_size_28();
		int32_t L_11 = __this->get_w_size_28();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_12 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_18();
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), (int32_t)L_12)))))
		{
			goto IL_015d;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get_window_31();
		int32_t L_14 = __this->get_w_size_28();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_window_31();
		int32_t L_16 = __this->get_w_size_28();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_13, L_14, (RuntimeArray *)(RuntimeArray *)L_15, 0, L_16, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_match_start_46();
		int32_t L_18 = __this->get_w_size_28();
		__this->set_match_start_46(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)));
		int32_t L_19 = __this->get_strstart_45();
		int32_t L_20 = __this->get_w_size_28();
		__this->set_strstart_45(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20)));
		int32_t L_21 = __this->get_block_start_40();
		int32_t L_22 = __this->get_w_size_28();
		__this->set_block_start_40(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22)));
		int32_t L_23 = __this->get_hash_size_36();
		V_0 = L_23;
		int32_t L_24 = V_0;
		V_2 = L_24;
	}

IL_00cb:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_25 = __this->get_head_34();
		int32_t L_26 = V_2;
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1));
		V_2 = L_27;
		int32_t L_28 = L_27;
		int16_t L_29 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int32_t)((int32_t)L_29&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_30 = __this->get_head_34();
		int32_t L_31 = V_2;
		int32_t L_32 = V_1;
		int32_t L_33 = __this->get_w_size_28();
		G_B9_0 = L_31;
		G_B9_1 = L_30;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			G_B10_0 = L_31;
			G_B10_1 = L_30;
			goto IL_00fe;
		}
	}
	{
		int32_t L_34 = V_1;
		int32_t L_35 = __this->get_w_size_28();
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_35));
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00ff;
	}

IL_00fe:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00ff:
	{
		(G_B11_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B11_1), (int16_t)((int16_t)((int16_t)G_B11_0)));
		int32_t L_36 = V_0;
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1));
		V_0 = L_37;
		if (L_37)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_38 = __this->get_w_size_28();
		V_0 = L_38;
		int32_t L_39 = V_0;
		V_2 = L_39;
	}

IL_0114:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_40 = __this->get_prev_33();
		int32_t L_41 = V_2;
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1));
		V_2 = L_42;
		int32_t L_43 = L_42;
		int16_t L_44 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_1 = ((int32_t)((int32_t)L_44&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_45 = __this->get_prev_33();
		int32_t L_46 = V_2;
		int32_t L_47 = V_1;
		int32_t L_48 = __this->get_w_size_28();
		G_B14_0 = L_46;
		G_B14_1 = L_45;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			G_B15_0 = L_46;
			G_B15_1 = L_45;
			goto IL_0147;
		}
	}
	{
		int32_t L_49 = V_1;
		int32_t L_50 = __this->get_w_size_28();
		G_B16_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_50));
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_0148;
	}

IL_0147:
	{
		G_B16_0 = 0;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_0148:
	{
		(G_B16_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B16_1), (int16_t)((int16_t)((int16_t)G_B16_0)));
		int32_t L_51 = V_0;
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1));
		V_0 = L_52;
		if (L_52)
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_53 = V_3;
		int32_t L_54 = __this->get_w_size_28();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54));
	}

IL_015d:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_55 = __this->get__codec_21();
		int32_t L_56 = L_55->get_AvailableBytesIn_2();
		if (L_56)
		{
			goto IL_016e;
		}
	}
	{
		return;
	}

IL_016e:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_57 = __this->get__codec_21();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_58 = __this->get_window_31();
		int32_t L_59 = __this->get_strstart_45();
		int32_t L_60 = __this->get_lookahead_47();
		int32_t L_61 = V_3;
		int32_t L_62;
		L_62 = ZlibCodec_read_buf_mBA8A7674AC33363D8DDCBEFBE34768F8E8AF1BA0(L_57, L_58, ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)L_60)), L_61, /*hidden argument*/NULL);
		V_0 = L_62;
		int32_t L_63 = __this->get_lookahead_47();
		int32_t L_64 = V_0;
		__this->set_lookahead_47(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)L_64)));
		int32_t L_65 = __this->get_lookahead_47();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_66 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_01f8;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_67 = __this->get_window_31();
		int32_t L_68 = __this->get_strstart_45();
		int32_t L_69 = L_68;
		uint8_t L_70 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		__this->set_ins_h_35(((int32_t)((int32_t)L_70&(int32_t)((int32_t)255))));
		int32_t L_71 = __this->get_ins_h_35();
		int32_t L_72 = __this->get_hash_shift_39();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_73 = __this->get_window_31();
		int32_t L_74 = __this->get_strstart_45();
		int32_t L_75 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
		uint8_t L_76 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75));
		int32_t L_77 = __this->get_hash_mask_38();
		__this->set_ins_h_35(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_71<<(int32_t)((int32_t)((int32_t)L_72&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_76&(int32_t)((int32_t)255)))))&(int32_t)L_77)));
	}

IL_01f8:
	{
		int32_t L_78 = __this->get_lookahead_47();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_79 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_18();
		if ((((int32_t)L_78) >= ((int32_t)L_79)))
		{
			goto IL_0218;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_80 = __this->get__codec_21();
		int32_t L_81 = L_80->get_AvailableBytesIn_2();
		if (L_81)
		{
			goto IL_0000;
		}
	}

IL_0218:
	{
		return;
	}
}
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager::DeflateFast(Pathfinding.Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_DeflateFast_m581DC29E70B25483D32715B437E9C78645F13A88 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B33_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = __this->get_lookahead_47();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_1 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_18();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0040;
		}
	}
	{
		DeflateManager__fillWindow_mB7ECF5F51AB8C40CA5D3C8A89CFE9026B868869A(__this, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_lookahead_47();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_3 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_18();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = ___flush0;
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0030:
	{
		int32_t L_5 = __this->get_lookahead_47();
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_0309;
	}

IL_0040:
	{
		int32_t L_6 = __this->get_lookahead_47();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_8 = __this->get_ins_h_35();
		int32_t L_9 = __this->get_hash_shift_39();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_window_31();
		int32_t L_11 = __this->get_strstart_45();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_12 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1))));
		uint8_t L_14 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = __this->get_hash_mask_38();
		__this->set_ins_h_35(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8<<(int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)255)))))&(int32_t)L_15)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_16 = __this->get_head_34();
		int32_t L_17 = __this->get_ins_h_35();
		int32_t L_18 = L_17;
		int16_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_0 = ((int32_t)((int32_t)L_19&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = __this->get_prev_33();
		int32_t L_21 = __this->get_strstart_45();
		int32_t L_22 = __this->get_w_mask_30();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_23 = __this->get_head_34();
		int32_t L_24 = __this->get_ins_h_35();
		int32_t L_25 = L_24;
		int16_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_21&(int32_t)L_22))), (int16_t)L_26);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_27 = __this->get_head_34();
		int32_t L_28 = __this->get_ins_h_35();
		int32_t L_29 = __this->get_strstart_45();
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (int16_t)((int16_t)((int16_t)L_29)));
	}

IL_00d2:
	{
		int32_t L_30 = V_0;
		if ((((int64_t)((int64_t)((int64_t)L_30))) == ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_31 = __this->get_strstart_45();
		int32_t L_32 = V_0;
		int32_t L_33 = __this->get_w_size_28();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_34 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_18();
		if ((((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)L_32))&(int32_t)((int32_t)65535)))) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_34)))))
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_35 = __this->get_compressionStrategy_50();
		if ((((int32_t)L_35) == ((int32_t)2)))
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = DeflateManager_longest_match_mAC7C7089DF02D1AC715D6D82E82F858AB5CADDB0(__this, L_36, /*hidden argument*/NULL);
		__this->set_match_length_42(L_37);
	}

IL_0113:
	{
		int32_t L_38 = __this->get_match_length_42();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_39 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_40 = __this->get_strstart_45();
		int32_t L_41 = __this->get_match_start_46();
		int32_t L_42 = __this->get_match_length_42();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_43 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		bool L_44;
		L_44 = DeflateManager__tr_tally_mC60BFC2741CD6B0F4A7C74EB491EF9391B79B360(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_41)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43)), /*hidden argument*/NULL);
		V_1 = L_44;
		int32_t L_45 = __this->get_lookahead_47();
		int32_t L_46 = __this->get_match_length_42();
		__this->set_lookahead_47(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)L_46)));
		int32_t L_47 = __this->get_match_length_42();
		Config_tC68F920487AC05FF8321319B93D3B73EEF943750 * L_48 = __this->get_config_41();
		int32_t L_49 = L_48->get_MaxLazy_1();
		if ((((int32_t)L_47) > ((int32_t)L_49)))
		{
			goto IL_0243;
		}
	}
	{
		int32_t L_50 = __this->get_lookahead_47();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_51 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0243;
		}
	}
	{
		int32_t L_52 = __this->get_match_length_42();
		__this->set_match_length_42(((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)1)));
	}

IL_018a:
	{
		int32_t L_53 = __this->get_strstart_45();
		__this->set_strstart_45(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1)));
		int32_t L_54 = __this->get_ins_h_35();
		int32_t L_55 = __this->get_hash_shift_39();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_56 = __this->get_window_31();
		int32_t L_57 = __this->get_strstart_45();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_58 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		int32_t L_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)1))));
		uint8_t L_60 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		int32_t L_61 = __this->get_hash_mask_38();
		__this->set_ins_h_35(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_54<<(int32_t)((int32_t)((int32_t)L_55&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_60&(int32_t)((int32_t)255)))))&(int32_t)L_61)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_62 = __this->get_head_34();
		int32_t L_63 = __this->get_ins_h_35();
		int32_t L_64 = L_63;
		int16_t L_65 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		V_0 = ((int32_t)((int32_t)L_65&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_66 = __this->get_prev_33();
		int32_t L_67 = __this->get_strstart_45();
		int32_t L_68 = __this->get_w_mask_30();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_69 = __this->get_head_34();
		int32_t L_70 = __this->get_ins_h_35();
		int32_t L_71 = L_70;
		int16_t L_72 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_67&(int32_t)L_68))), (int16_t)L_72);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_73 = __this->get_head_34();
		int32_t L_74 = __this->get_ins_h_35();
		int32_t L_75 = __this->get_strstart_45();
		(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74), (int16_t)((int16_t)((int16_t)L_75)));
		int32_t L_76 = __this->get_match_length_42();
		int32_t L_77 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)1));
		V_2 = L_77;
		__this->set_match_length_42(L_77);
		int32_t L_78 = V_2;
		if (L_78)
		{
			goto IL_018a;
		}
	}
	{
		int32_t L_79 = __this->get_strstart_45();
		__this->set_strstart_45(((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1)));
		goto IL_02a9;
	}

IL_0243:
	{
		int32_t L_80 = __this->get_strstart_45();
		int32_t L_81 = __this->get_match_length_42();
		__this->set_strstart_45(((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)L_81)));
		__this->set_match_length_42(0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_82 = __this->get_window_31();
		int32_t L_83 = __this->get_strstart_45();
		int32_t L_84 = L_83;
		uint8_t L_85 = (L_82)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_84));
		__this->set_ins_h_35(((int32_t)((int32_t)L_85&(int32_t)((int32_t)255))));
		int32_t L_86 = __this->get_ins_h_35();
		int32_t L_87 = __this->get_hash_shift_39();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_88 = __this->get_window_31();
		int32_t L_89 = __this->get_strstart_45();
		int32_t L_90 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
		uint8_t L_91 = (L_88)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90));
		int32_t L_92 = __this->get_hash_mask_38();
		__this->set_ins_h_35(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_86<<(int32_t)((int32_t)((int32_t)L_87&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_91&(int32_t)((int32_t)255)))))&(int32_t)L_92)));
	}

IL_02a9:
	{
		goto IL_02e5;
	}

IL_02ae:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_93 = __this->get_window_31();
		int32_t L_94 = __this->get_strstart_45();
		int32_t L_95 = L_94;
		uint8_t L_96 = (L_93)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_95));
		bool L_97;
		L_97 = DeflateManager__tr_tally_mC60BFC2741CD6B0F4A7C74EB491EF9391B79B360(__this, 0, ((int32_t)((int32_t)L_96&(int32_t)((int32_t)255))), /*hidden argument*/NULL);
		V_1 = L_97;
		int32_t L_98 = __this->get_lookahead_47();
		__this->set_lookahead_47(((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)1)));
		int32_t L_99 = __this->get_strstart_45();
		__this->set_strstart_45(((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1)));
	}

IL_02e5:
	{
		bool L_100 = V_1;
		if (!L_100)
		{
			goto IL_0304;
		}
	}
	{
		DeflateManager_flush_block_only_m377B129B393042403173E0FEA03DB34A1EABF8F5(__this, (bool)0, /*hidden argument*/NULL);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_101 = __this->get__codec_21();
		int32_t L_102 = L_101->get_AvailableBytesOut_6();
		if (L_102)
		{
			goto IL_0304;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0304:
	{
		goto IL_0002;
	}

IL_0309:
	{
		int32_t L_103 = ___flush0;
		DeflateManager_flush_block_only_m377B129B393042403173E0FEA03DB34A1EABF8F5(__this, (bool)((((int32_t)L_103) == ((int32_t)4))? 1 : 0), /*hidden argument*/NULL);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_104 = __this->get__codec_21();
		int32_t L_105 = L_104->get_AvailableBytesOut_6();
		if (L_105)
		{
			goto IL_032e;
		}
	}
	{
		int32_t L_106 = ___flush0;
		if ((!(((uint32_t)L_106) == ((uint32_t)4))))
		{
			goto IL_032c;
		}
	}
	{
		return (int32_t)(2);
	}

IL_032c:
	{
		return (int32_t)(0);
	}

IL_032e:
	{
		int32_t L_107 = ___flush0;
		if ((!(((uint32_t)L_107) == ((uint32_t)4))))
		{
			goto IL_033b;
		}
	}
	{
		G_B33_0 = 3;
		goto IL_033c;
	}

IL_033b:
	{
		G_B33_0 = 1;
	}

IL_033c:
	{
		return (int32_t)(G_B33_0);
	}
}
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager::DeflateSlow(Pathfinding.Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_DeflateSlow_mBDE310D1679649CCDA75FC4265B29F8C03A58137 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B46_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = __this->get_lookahead_47();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_1 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_18();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0040;
		}
	}
	{
		DeflateManager__fillWindow_mB7ECF5F51AB8C40CA5D3C8A89CFE9026B868869A(__this, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_lookahead_47();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_3 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_18();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = ___flush0;
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0030:
	{
		int32_t L_5 = __this->get_lookahead_47();
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_0396;
	}

IL_0040:
	{
		int32_t L_6 = __this->get_lookahead_47();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_8 = __this->get_ins_h_35();
		int32_t L_9 = __this->get_hash_shift_39();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_window_31();
		int32_t L_11 = __this->get_strstart_45();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_12 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1))));
		uint8_t L_14 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = __this->get_hash_mask_38();
		__this->set_ins_h_35(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8<<(int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)255)))))&(int32_t)L_15)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_16 = __this->get_head_34();
		int32_t L_17 = __this->get_ins_h_35();
		int32_t L_18 = L_17;
		int16_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_0 = ((int32_t)((int32_t)L_19&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = __this->get_prev_33();
		int32_t L_21 = __this->get_strstart_45();
		int32_t L_22 = __this->get_w_mask_30();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_23 = __this->get_head_34();
		int32_t L_24 = __this->get_ins_h_35();
		int32_t L_25 = L_24;
		int16_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_21&(int32_t)L_22))), (int16_t)L_26);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_27 = __this->get_head_34();
		int32_t L_28 = __this->get_ins_h_35();
		int32_t L_29 = __this->get_strstart_45();
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (int16_t)((int16_t)((int16_t)L_29)));
	}

IL_00d2:
	{
		int32_t L_30 = __this->get_match_length_42();
		__this->set_prev_length_48(L_30);
		int32_t L_31 = __this->get_match_start_46();
		__this->set_prev_match_43(L_31);
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_32 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		__this->set_match_length_42(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1)));
		int32_t L_33 = V_0;
		if (!L_33)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_34 = __this->get_prev_length_48();
		Config_tC68F920487AC05FF8321319B93D3B73EEF943750 * L_35 = __this->get_config_41();
		int32_t L_36 = L_35->get_MaxLazy_1();
		if ((((int32_t)L_34) >= ((int32_t)L_36)))
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_37 = __this->get_strstart_45();
		int32_t L_38 = V_0;
		int32_t L_39 = __this->get_w_size_28();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_40 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_18();
		if ((((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)L_38))&(int32_t)((int32_t)65535)))) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40)))))
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_41 = __this->get_compressionStrategy_50();
		if ((((int32_t)L_41) == ((int32_t)2)))
		{
			goto IL_014b;
		}
	}
	{
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = DeflateManager_longest_match_mAC7C7089DF02D1AC715D6D82E82F858AB5CADDB0(__this, L_42, /*hidden argument*/NULL);
		__this->set_match_length_42(L_43);
	}

IL_014b:
	{
		int32_t L_44 = __this->get_match_length_42();
		if ((((int32_t)L_44) > ((int32_t)5)))
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_45 = __this->get_compressionStrategy_50();
		if ((((int32_t)L_45) == ((int32_t)1)))
		{
			goto IL_018a;
		}
	}
	{
		int32_t L_46 = __this->get_match_length_42();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_47 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_48 = __this->get_strstart_45();
		int32_t L_49 = __this->get_match_start_46();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_49))) <= ((int32_t)((int32_t)4096))))
		{
			goto IL_0197;
		}
	}

IL_018a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_50 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		__this->set_match_length_42(((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)1)));
	}

IL_0197:
	{
		int32_t L_51 = __this->get_prev_length_48();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_52 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0306;
		}
	}
	{
		int32_t L_53 = __this->get_match_length_42();
		int32_t L_54 = __this->get_prev_length_48();
		if ((((int32_t)L_53) > ((int32_t)L_54)))
		{
			goto IL_0306;
		}
	}
	{
		int32_t L_55 = __this->get_strstart_45();
		int32_t L_56 = __this->get_lookahead_47();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_57 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56)), (int32_t)L_57));
		int32_t L_58 = __this->get_strstart_45();
		int32_t L_59 = __this->get_prev_match_43();
		int32_t L_60 = __this->get_prev_length_48();
		int32_t L_61 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		bool L_62;
		L_62 = DeflateManager__tr_tally_mC60BFC2741CD6B0F4A7C74EB491EF9391B79B360(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)1)), (int32_t)L_59)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)L_61)), /*hidden argument*/NULL);
		V_1 = L_62;
		int32_t L_63 = __this->get_lookahead_47();
		int32_t L_64 = __this->get_prev_length_48();
		__this->set_lookahead_47(((int32_t)il2cpp_codegen_subtract((int32_t)L_63, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)1)))));
		int32_t L_65 = __this->get_prev_length_48();
		__this->set_prev_length_48(((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)2)));
	}

IL_0211:
	{
		int32_t L_66 = __this->get_strstart_45();
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		V_3 = L_67;
		__this->set_strstart_45(L_67);
		int32_t L_68 = V_3;
		int32_t L_69 = V_2;
		if ((((int32_t)L_68) > ((int32_t)L_69)))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_70 = __this->get_ins_h_35();
		int32_t L_71 = __this->get_hash_shift_39();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_72 = __this->get_window_31();
		int32_t L_73 = __this->get_strstart_45();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_74 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		int32_t L_75 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)1))));
		uint8_t L_76 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75));
		int32_t L_77 = __this->get_hash_mask_38();
		__this->set_ins_h_35(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_70<<(int32_t)((int32_t)((int32_t)L_71&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_76&(int32_t)((int32_t)255)))))&(int32_t)L_77)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_78 = __this->get_head_34();
		int32_t L_79 = __this->get_ins_h_35();
		int32_t L_80 = L_79;
		int16_t L_81 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		V_0 = ((int32_t)((int32_t)L_81&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_82 = __this->get_prev_33();
		int32_t L_83 = __this->get_strstart_45();
		int32_t L_84 = __this->get_w_mask_30();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_85 = __this->get_head_34();
		int32_t L_86 = __this->get_ins_h_35();
		int32_t L_87 = L_86;
		int16_t L_88 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_87));
		(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_83&(int32_t)L_84))), (int16_t)L_88);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_89 = __this->get_head_34();
		int32_t L_90 = __this->get_ins_h_35();
		int32_t L_91 = __this->get_strstart_45();
		(L_89)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90), (int16_t)((int16_t)((int16_t)L_91)));
	}

IL_02aa:
	{
		int32_t L_92 = __this->get_prev_length_48();
		int32_t L_93 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_92, (int32_t)1));
		V_3 = L_93;
		__this->set_prev_length_48(L_93);
		int32_t L_94 = V_3;
		if (L_94)
		{
			goto IL_0211;
		}
	}
	{
		__this->set_match_available_44(0);
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_95 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		__this->set_match_length_42(((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)1)));
		int32_t L_96 = __this->get_strstart_45();
		__this->set_strstart_45(((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1)));
		bool L_97 = V_1;
		if (!L_97)
		{
			goto IL_0301;
		}
	}
	{
		DeflateManager_flush_block_only_m377B129B393042403173E0FEA03DB34A1EABF8F5(__this, (bool)0, /*hidden argument*/NULL);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_98 = __this->get__codec_21();
		int32_t L_99 = L_98->get_AvailableBytesOut_6();
		if (L_99)
		{
			goto IL_0301;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0301:
	{
		goto IL_0391;
	}

IL_0306:
	{
		int32_t L_100 = __this->get_match_available_44();
		if (!L_100)
		{
			goto IL_036e;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_101 = __this->get_window_31();
		int32_t L_102 = __this->get_strstart_45();
		int32_t L_103 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_102, (int32_t)1));
		uint8_t L_104 = (L_101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_103));
		bool L_105;
		L_105 = DeflateManager__tr_tally_mC60BFC2741CD6B0F4A7C74EB491EF9391B79B360(__this, 0, ((int32_t)((int32_t)L_104&(int32_t)((int32_t)255))), /*hidden argument*/NULL);
		V_1 = L_105;
		bool L_106 = V_1;
		if (!L_106)
		{
			goto IL_033b;
		}
	}
	{
		DeflateManager_flush_block_only_m377B129B393042403173E0FEA03DB34A1EABF8F5(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_033b:
	{
		int32_t L_107 = __this->get_strstart_45();
		__this->set_strstart_45(((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1)));
		int32_t L_108 = __this->get_lookahead_47();
		__this->set_lookahead_47(((int32_t)il2cpp_codegen_subtract((int32_t)L_108, (int32_t)1)));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_109 = __this->get__codec_21();
		int32_t L_110 = L_109->get_AvailableBytesOut_6();
		if (L_110)
		{
			goto IL_0369;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0369:
	{
		goto IL_0391;
	}

IL_036e:
	{
		__this->set_match_available_44(1);
		int32_t L_111 = __this->get_strstart_45();
		__this->set_strstart_45(((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)1)));
		int32_t L_112 = __this->get_lookahead_47();
		__this->set_lookahead_47(((int32_t)il2cpp_codegen_subtract((int32_t)L_112, (int32_t)1)));
	}

IL_0391:
	{
		goto IL_0002;
	}

IL_0396:
	{
		int32_t L_113 = __this->get_match_available_44();
		if (!L_113)
		{
			goto IL_03c5;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_114 = __this->get_window_31();
		int32_t L_115 = __this->get_strstart_45();
		int32_t L_116 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_115, (int32_t)1));
		uint8_t L_117 = (L_114)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_116));
		bool L_118;
		L_118 = DeflateManager__tr_tally_mC60BFC2741CD6B0F4A7C74EB491EF9391B79B360(__this, 0, ((int32_t)((int32_t)L_117&(int32_t)((int32_t)255))), /*hidden argument*/NULL);
		V_1 = L_118;
		__this->set_match_available_44(0);
	}

IL_03c5:
	{
		int32_t L_119 = ___flush0;
		DeflateManager_flush_block_only_m377B129B393042403173E0FEA03DB34A1EABF8F5(__this, (bool)((((int32_t)L_119) == ((int32_t)4))? 1 : 0), /*hidden argument*/NULL);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_120 = __this->get__codec_21();
		int32_t L_121 = L_120->get_AvailableBytesOut_6();
		if (L_121)
		{
			goto IL_03ea;
		}
	}
	{
		int32_t L_122 = ___flush0;
		if ((!(((uint32_t)L_122) == ((uint32_t)4))))
		{
			goto IL_03e8;
		}
	}
	{
		return (int32_t)(2);
	}

IL_03e8:
	{
		return (int32_t)(0);
	}

IL_03ea:
	{
		int32_t L_123 = ___flush0;
		if ((!(((uint32_t)L_123) == ((uint32_t)4))))
		{
			goto IL_03f7;
		}
	}
	{
		G_B46_0 = 3;
		goto IL_03f8;
	}

IL_03f7:
	{
		G_B46_0 = 1;
	}

IL_03f8:
	{
		return (int32_t)(G_B46_0);
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::longest_match(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_longest_match_mAC7C7089DF02D1AC715D6D82E82F858AB5CADDB0 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___cur_match0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint8_t V_9 = 0x0;
	uint8_t V_10 = 0x0;
	int32_t G_B3_0 = 0;
	{
		Config_tC68F920487AC05FF8321319B93D3B73EEF943750 * L_0 = __this->get_config_41();
		int32_t L_1 = L_0->get_MaxChainLength_3();
		V_0 = L_1;
		int32_t L_2 = __this->get_strstart_45();
		V_1 = L_2;
		int32_t L_3 = __this->get_prev_length_48();
		V_4 = L_3;
		int32_t L_4 = __this->get_strstart_45();
		int32_t L_5 = __this->get_w_size_28();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_6 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_18();
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_7 = __this->get_strstart_45();
		int32_t L_8 = __this->get_w_size_28();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_9 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_18();
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))));
		goto IL_004b;
	}

IL_004a:
	{
		G_B3_0 = 0;
	}

IL_004b:
	{
		V_5 = G_B3_0;
		Config_tC68F920487AC05FF8321319B93D3B73EEF943750 * L_10 = __this->get_config_41();
		int32_t L_11 = L_10->get_NiceLength_2();
		V_6 = L_11;
		int32_t L_12 = __this->get_w_mask_30();
		V_7 = L_12;
		int32_t L_13 = __this->get_strstart_45();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_14 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MAX_MATCH_17();
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_window_31();
		int32_t L_16 = V_1;
		int32_t L_17 = V_4;
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)), (int32_t)1));
		uint8_t L_19 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_9 = L_19;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = __this->get_window_31();
		int32_t L_21 = V_1;
		int32_t L_22 = V_4;
		int32_t L_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22));
		uint8_t L_24 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		V_10 = L_24;
		int32_t L_25 = __this->get_prev_length_48();
		Config_tC68F920487AC05FF8321319B93D3B73EEF943750 * L_26 = __this->get_config_41();
		int32_t L_27 = L_26->get_GoodLength_0();
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_28 = V_0;
		V_0 = ((int32_t)((int32_t)L_28>>(int32_t)2));
	}

IL_00a6:
	{
		int32_t L_29 = V_6;
		int32_t L_30 = __this->get_lookahead_47();
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_31 = __this->get_lookahead_47();
		V_6 = L_31;
	}

IL_00bb:
	{
		int32_t L_32 = ___cur_match0;
		V_2 = L_32;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = __this->get_window_31();
		int32_t L_34 = V_2;
		int32_t L_35 = V_4;
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35));
		uint8_t L_37 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		uint8_t L_38 = V_10;
		if ((!(((uint32_t)L_37) == ((uint32_t)L_38))))
		{
			goto IL_0113;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = __this->get_window_31();
		int32_t L_40 = V_2;
		int32_t L_41 = V_4;
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)L_41)), (int32_t)1));
		uint8_t L_43 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		uint8_t L_44 = V_9;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0113;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = __this->get_window_31();
		int32_t L_46 = V_2;
		int32_t L_47 = L_46;
		uint8_t L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = __this->get_window_31();
		int32_t L_50 = V_1;
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		if ((!(((uint32_t)L_48) == ((uint32_t)L_52))))
		{
			goto IL_0113;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_53 = __this->get_window_31();
		int32_t L_54 = V_2;
		int32_t L_55 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		V_2 = L_55;
		int32_t L_56 = L_55;
		uint8_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_58 = __this->get_window_31();
		int32_t L_59 = V_1;
		int32_t L_60 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		uint8_t L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		if ((((int32_t)L_57) == ((int32_t)L_61)))
		{
			goto IL_0118;
		}
	}

IL_0113:
	{
		goto IL_025f;
	}

IL_0118:
	{
		int32_t L_62 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)2));
		int32_t L_63 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_0120:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = __this->get_window_31();
		int32_t L_65 = V_1;
		int32_t L_66 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
		V_1 = L_66;
		int32_t L_67 = L_66;
		uint8_t L_68 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_69 = __this->get_window_31();
		int32_t L_70 = V_2;
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		V_2 = L_71;
		int32_t L_72 = L_71;
		uint8_t L_73 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		if ((!(((uint32_t)L_68) == ((uint32_t)L_73))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_74 = __this->get_window_31();
		int32_t L_75 = V_1;
		int32_t L_76 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		V_1 = L_76;
		int32_t L_77 = L_76;
		uint8_t L_78 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_79 = __this->get_window_31();
		int32_t L_80 = V_2;
		int32_t L_81 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
		V_2 = L_81;
		int32_t L_82 = L_81;
		uint8_t L_83 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		if ((!(((uint32_t)L_78) == ((uint32_t)L_83))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_84 = __this->get_window_31();
		int32_t L_85 = V_1;
		int32_t L_86 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		V_1 = L_86;
		int32_t L_87 = L_86;
		uint8_t L_88 = (L_84)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_87));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_89 = __this->get_window_31();
		int32_t L_90 = V_2;
		int32_t L_91 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		V_2 = L_91;
		int32_t L_92 = L_91;
		uint8_t L_93 = (L_89)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92));
		if ((!(((uint32_t)L_88) == ((uint32_t)L_93))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_94 = __this->get_window_31();
		int32_t L_95 = V_1;
		int32_t L_96 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
		V_1 = L_96;
		int32_t L_97 = L_96;
		uint8_t L_98 = (L_94)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_99 = __this->get_window_31();
		int32_t L_100 = V_2;
		int32_t L_101 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		V_2 = L_101;
		int32_t L_102 = L_101;
		uint8_t L_103 = (L_99)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_102));
		if ((!(((uint32_t)L_98) == ((uint32_t)L_103))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_104 = __this->get_window_31();
		int32_t L_105 = V_1;
		int32_t L_106 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
		V_1 = L_106;
		int32_t L_107 = L_106;
		uint8_t L_108 = (L_104)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_107));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_109 = __this->get_window_31();
		int32_t L_110 = V_2;
		int32_t L_111 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)1));
		V_2 = L_111;
		int32_t L_112 = L_111;
		uint8_t L_113 = (L_109)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_112));
		if ((!(((uint32_t)L_108) == ((uint32_t)L_113))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_114 = __this->get_window_31();
		int32_t L_115 = V_1;
		int32_t L_116 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)1));
		V_1 = L_116;
		int32_t L_117 = L_116;
		uint8_t L_118 = (L_114)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_117));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_119 = __this->get_window_31();
		int32_t L_120 = V_2;
		int32_t L_121 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
		V_2 = L_121;
		int32_t L_122 = L_121;
		uint8_t L_123 = (L_119)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_122));
		if ((!(((uint32_t)L_118) == ((uint32_t)L_123))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_124 = __this->get_window_31();
		int32_t L_125 = V_1;
		int32_t L_126 = ((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)1));
		V_1 = L_126;
		int32_t L_127 = L_126;
		uint8_t L_128 = (L_124)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_127));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_129 = __this->get_window_31();
		int32_t L_130 = V_2;
		int32_t L_131 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1));
		V_2 = L_131;
		int32_t L_132 = L_131;
		uint8_t L_133 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_132));
		if ((!(((uint32_t)L_128) == ((uint32_t)L_133))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_134 = __this->get_window_31();
		int32_t L_135 = V_1;
		int32_t L_136 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1));
		V_1 = L_136;
		int32_t L_137 = L_136;
		uint8_t L_138 = (L_134)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_137));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_139 = __this->get_window_31();
		int32_t L_140 = V_2;
		int32_t L_141 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)1));
		V_2 = L_141;
		int32_t L_142 = L_141;
		uint8_t L_143 = (L_139)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_142));
		if ((!(((uint32_t)L_138) == ((uint32_t)L_143))))
		{
			goto IL_0210;
		}
	}
	{
		int32_t L_144 = V_1;
		int32_t L_145 = V_8;
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_0120;
		}
	}

IL_0210:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_146 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MAX_MATCH_17();
		int32_t L_147 = V_8;
		int32_t L_148 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_146, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_147, (int32_t)L_148))));
		int32_t L_149 = V_8;
		int32_t L_150 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MAX_MATCH_17();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_149, (int32_t)L_150));
		int32_t L_151 = V_3;
		int32_t L_152 = V_4;
		if ((((int32_t)L_151) <= ((int32_t)L_152)))
		{
			goto IL_025f;
		}
	}
	{
		int32_t L_153 = ___cur_match0;
		__this->set_match_start_46(L_153);
		int32_t L_154 = V_3;
		V_4 = L_154;
		int32_t L_155 = V_3;
		int32_t L_156 = V_6;
		if ((((int32_t)L_155) < ((int32_t)L_156)))
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0284;
	}

IL_0243:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_157 = __this->get_window_31();
		int32_t L_158 = V_1;
		int32_t L_159 = V_4;
		int32_t L_160 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)L_159)), (int32_t)1));
		uint8_t L_161 = (L_157)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_160));
		V_9 = L_161;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_162 = __this->get_window_31();
		int32_t L_163 = V_1;
		int32_t L_164 = V_4;
		int32_t L_165 = ((int32_t)il2cpp_codegen_add((int32_t)L_163, (int32_t)L_164));
		uint8_t L_166 = (L_162)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_165));
		V_10 = L_166;
	}

IL_025f:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_167 = __this->get_prev_33();
		int32_t L_168 = ___cur_match0;
		int32_t L_169 = V_7;
		int32_t L_170 = ((int32_t)((int32_t)L_168&(int32_t)L_169));
		int16_t L_171 = (L_167)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_170));
		int32_t L_172 = ((int32_t)((int32_t)L_171&(int32_t)((int32_t)65535)));
		___cur_match0 = L_172;
		int32_t L_173 = V_5;
		if ((((int32_t)L_172) <= ((int32_t)L_173)))
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_174 = V_0;
		int32_t L_175 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_174, (int32_t)1));
		V_0 = L_175;
		if (L_175)
		{
			goto IL_00bb;
		}
	}

IL_0284:
	{
		int32_t L_176 = V_4;
		int32_t L_177 = __this->get_lookahead_47();
		if ((((int32_t)L_176) > ((int32_t)L_177)))
		{
			goto IL_0294;
		}
	}
	{
		int32_t L_178 = V_4;
		return L_178;
	}

IL_0294:
	{
		int32_t L_179 = __this->get_lookahead_47();
		return L_179;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::get_WantRfc1950HeaderBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_m2420C594D027E6D9DF7451799709A745102F53AA (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__WantRfc1950HeaderBytes_73();
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::set_WantRfc1950HeaderBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_set_WantRfc1950HeaderBytes_m3ACF1F8B2A6FF3AB740DC3F3F42704EB797C837D (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__WantRfc1950HeaderBytes_73(L_0);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,Pathfinding.Ionic.Zlib.CompressionLevel,System.Int32,Pathfinding.Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_m48BDA35C7156E9D75A4CA0C026CB89C527565A4C (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___codec0, int32_t ___level1, int32_t ___bits2, int32_t ___compressionStrategy3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_0 = ___codec0;
		int32_t L_1 = ___level1;
		int32_t L_2 = ___bits2;
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_3 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MEM_LEVEL_DEFAULT_1();
		int32_t L_4 = ___compressionStrategy3;
		int32_t L_5;
		L_5 = DeflateManager_Initialize_mCC58D9403AA146B374F74CC47BB42D11109281F0(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,Pathfinding.Ionic.Zlib.CompressionLevel,System.Int32,System.Int32,Pathfinding.Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_mCC58D9403AA146B374F74CC47BB42D11109281F0 (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___codec0, int32_t ___level1, int32_t ___windowBits2, int32_t ___memLevel3, int32_t ___strategy4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_0 = ___codec0;
		__this->set__codec_21(L_0);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_1 = __this->get__codec_21();
		L_1->set_Message_8((String_t*)NULL);
		int32_t L_2 = ___windowBits2;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)9))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___windowBits2;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)15))))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 * L_4 = (ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m445658A9E8EB52F8F293F14D2CFA83E23577F534(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral540BFF2B585F6DE7F5AA022B07C05975323EFD0E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Initialize_mCC58D9403AA146B374F74CC47BB42D11109281F0_RuntimeMethod_var)));
	}

IL_002e:
	{
		int32_t L_5 = ___memLevel3;
		if ((((int32_t)L_5) < ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_6 = ___memLevel3;
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MEM_LEVEL_MAX_0();
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_005c;
		}
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var)));
		int32_t L_8 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))))->get_MEM_LEVEL_MAX_0();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral796754270F9B2AB25ACA5093B84CF8EAF55BA1AE)), L_10, /*hidden argument*/NULL);
		ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 * L_12 = (ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m445658A9E8EB52F8F293F14D2CFA83E23577F534(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Initialize_mCC58D9403AA146B374F74CC47BB42D11109281F0_RuntimeMethod_var)));
	}

IL_005c:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_13 = __this->get__codec_21();
		L_13->set_dstate_9(__this);
		int32_t L_14 = ___windowBits2;
		__this->set_w_bits_29(L_14);
		int32_t L_15 = __this->get_w_bits_29();
		__this->set_w_size_28(((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)31))))));
		int32_t L_16 = __this->get_w_size_28();
		__this->set_w_mask_30(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)));
		int32_t L_17 = ___memLevel3;
		__this->set_hash_bits_37(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)7)));
		int32_t L_18 = __this->get_hash_bits_37();
		__this->set_hash_size_36(((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)31))))));
		int32_t L_19 = __this->get_hash_size_36();
		__this->set_hash_mask_38(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
		int32_t L_20 = __this->get_hash_bits_37();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_21 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		int32_t L_22 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_MIN_MATCH_16();
		__this->set_hash_shift_39(((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), (int32_t)1))/(int32_t)L_22)));
		int32_t L_23 = __this->get_w_size_28();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)2)));
		__this->set_window_31(L_24);
		int32_t L_25 = __this->get_w_size_28();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_26 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)L_25);
		__this->set_prev_33(L_26);
		int32_t L_27 = __this->get_hash_size_36();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_28 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)L_27);
		__this->set_head_34(L_28);
		int32_t L_29 = ___memLevel3;
		__this->set_lit_bufsize_63(((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)6))&(int32_t)((int32_t)31))))));
		int32_t L_30 = __this->get_lit_bufsize_63();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)4)));
		__this->set_pending_23(L_31);
		int32_t L_32 = __this->get_lit_bufsize_63();
		__this->set__distanceOffset_65(L_32);
		int32_t L_33 = __this->get_lit_bufsize_63();
		__this->set__lengthOffset_62(((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)L_33)));
		int32_t L_34 = ___level1;
		__this->set_compressionLevel_49(L_34);
		int32_t L_35 = ___strategy4;
		__this->set_compressionStrategy_50(L_35);
		DeflateManager_Reset_m8F77EDA9464906DCF8AD5ADEDF5669EDC3470EAD(__this, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_Reset_m8F77EDA9464906DCF8AD5ADEDF5669EDC3470EAD (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B2_0 = NULL;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * G_B3_1 = NULL;
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_0 = __this->get__codec_21();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_1 = __this->get__codec_21();
		int64_t L_2 = ((int64_t)((int64_t)0));
		V_0 = L_2;
		L_1->set_TotalBytesOut_7(L_2);
		int64_t L_3 = V_0;
		L_0->set_TotalBytesIn_3(L_3);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_4 = __this->get__codec_21();
		L_4->set_Message_8((String_t*)NULL);
		__this->set_pendingCount_25(0);
		__this->set_nextPending_24(0);
		__this->set_Rfc1950BytesEmitted_72((bool)0);
		bool L_5;
		L_5 = DeflateManager_get_WantRfc1950HeaderBytes_m2420C594D027E6D9DF7451799709A745102F53AA_inline(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_5)
		{
			G_B2_0 = __this;
			goto IL_0052;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_6 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_INIT_STATE_5();
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0057;
	}

IL_0052:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_BUSY_STATE_6();
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0057:
	{
		G_B3_1->set_status_22(G_B3_0);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_8 = __this->get__codec_21();
		IL2CPP_RUNTIME_CLASS_INIT(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var);
		uint32_t L_9;
		L_9 = Adler_Adler32_m153E4796B41C8C0F63E6A07CD399E82C1B6590C5(0, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, 0, 0, /*hidden argument*/NULL);
		L_8->set__Adler32_11(L_9);
		__this->set_last_flush_27(0);
		DeflateManager__InitializeTreeData_m11FA22EF02183D92147B12CF678A34056FE43323(__this, /*hidden argument*/NULL);
		DeflateManager__InitializeLazyMatch_m93CE9EE1E0A971FC8EB0C4E3E5F05F8A288F9E9E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::SetDeflater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_SetDeflater_m79ECE95C882C362B5441BED32AB1A8518731DF6B (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_DeflateFast_m581DC29E70B25483D32715B437E9C78645F13A88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_DeflateNone_m4ADD4D81644AB170760CD10278CB7AB755FE30DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_DeflateSlow_mBDE310D1679649CCDA75FC4265B29F8C03A58137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Config_tC68F920487AC05FF8321319B93D3B73EEF943750 * L_0 = __this->get_config_41();
		int32_t L_1 = L_0->get_Flavor_4();
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_0068;
	}

IL_0023:
	{
		CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E * L_3 = (CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E *)il2cpp_codegen_object_new(CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E_il2cpp_TypeInfo_var);
		CompressFunc__ctor_m1C9781D4AA74E0505AC7C626A02E9CCEB0DA5EAA(L_3, __this, (intptr_t)((intptr_t)DeflateManager_DeflateNone_m4ADD4D81644AB170760CD10278CB7AB755FE30DF_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_DeflateFunction_2(L_3);
		goto IL_0068;
	}

IL_003a:
	{
		CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E * L_4 = (CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E *)il2cpp_codegen_object_new(CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E_il2cpp_TypeInfo_var);
		CompressFunc__ctor_m1C9781D4AA74E0505AC7C626A02E9CCEB0DA5EAA(L_4, __this, (intptr_t)((intptr_t)DeflateManager_DeflateFast_m581DC29E70B25483D32715B437E9C78645F13A88_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_DeflateFunction_2(L_4);
		goto IL_0068;
	}

IL_0051:
	{
		CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E * L_5 = (CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E *)il2cpp_codegen_object_new(CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E_il2cpp_TypeInfo_var);
		CompressFunc__ctor_m1C9781D4AA74E0505AC7C626A02E9CCEB0DA5EAA(L_5, __this, (intptr_t)((intptr_t)DeflateManager_DeflateSlow_mBDE310D1679649CCDA75FC4265B29F8C03A58137_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_DeflateFunction_2(L_5);
		goto IL_0068;
	}

IL_0068:
	{
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Deflate(Pathfinding.Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Deflate_m7AE6047796DA4D2D682E871641C784B932406E2E (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B56_0 = 0;
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_0 = __this->get__codec_21();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0->get_OutputBuffer_4();
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_2 = __this->get__codec_21();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get_InputBuffer_0();
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_4 = __this->get__codec_21();
		int32_t L_5 = L_4->get_AvailableBytesIn_2();
		if (L_5)
		{
			goto IL_0047;
		}
	}

IL_0030:
	{
		int32_t L_6 = __this->get_status_22();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_FINISH_STATE_7();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_8 = ___flush0;
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_0074;
		}
	}

IL_0047:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_9 = __this->get__codec_21();
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))))->get__ErrorMessage_3();
		int32_t L_11 = 4;
		String_t* L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		L_9->set_Message_8(L_12);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_13 = __this->get__codec_21();
		String_t* L_14 = L_13->get_Message_8();
		String_t* L_15;
		L_15 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DE4583466E161AC08D14AD37D8B70B8580B3627)), L_14, /*hidden argument*/NULL);
		ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 * L_16 = (ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m445658A9E8EB52F8F293F14D2CFA83E23577F534(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Deflate_m7AE6047796DA4D2D682E871641C784B932406E2E_RuntimeMethod_var)));
	}

IL_0074:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_17 = __this->get__codec_21();
		int32_t L_18 = L_17->get_AvailableBytesOut_6();
		if (L_18)
		{
			goto IL_00a1;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_19 = __this->get__codec_21();
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))))->get__ErrorMessage_3();
		int32_t L_21 = 7;
		String_t* L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		L_19->set_Message_8(L_22);
		ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 * L_23 = (ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m445658A9E8EB52F8F293F14D2CFA83E23577F534(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB6E4583683A19BA1CBC201CAD5FFABF027A5B94A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Deflate_m7AE6047796DA4D2D682E871641C784B932406E2E_RuntimeMethod_var)));
	}

IL_00a1:
	{
		int32_t L_24 = __this->get_last_flush_27();
		V_0 = L_24;
		int32_t L_25 = ___flush0;
		__this->set_last_flush_27(L_25);
		int32_t L_26 = __this->get_status_22();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_27 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_INIT_STATE_5();
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_021f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_28 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_Z_DEFLATED_8();
		int32_t L_29 = __this->get_w_bits_29();
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)8))<<(int32_t)4))))<<(int32_t)8));
		int32_t L_30 = __this->get_compressionLevel_49();
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1))&(int32_t)((int32_t)255)))>>(int32_t)1));
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) <= ((int32_t)3)))
		{
			goto IL_00ec;
		}
	}
	{
		V_2 = 3;
	}

IL_00ec:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		V_1 = ((int32_t)((int32_t)L_32|(int32_t)((int32_t)((int32_t)L_33<<(int32_t)6))));
		int32_t L_34 = __this->get_strstart_45();
		if (!L_34)
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_35 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_36 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_PRESET_DICT_4();
		V_1 = ((int32_t)((int32_t)L_35|(int32_t)L_36));
	}

IL_0105:
	{
		int32_t L_37 = V_1;
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)31), (int32_t)((int32_t)((int32_t)L_38%(int32_t)((int32_t)31)))))));
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_39 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_BUSY_STATE_6();
		__this->set_status_22(L_39);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = __this->get_pending_23();
		int32_t L_41 = __this->get_pendingCount_25();
		int32_t L_42 = L_41;
		V_3 = L_42;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
		int32_t L_43 = V_3;
		int32_t L_44 = V_1;
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_44>>(int32_t)8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = __this->get_pending_23();
		int32_t L_46 = __this->get_pendingCount_25();
		int32_t L_47 = L_46;
		V_3 = L_47;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1)));
		int32_t L_48 = V_3;
		int32_t L_49 = V_1;
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (uint8_t)((int32_t)((uint8_t)L_49)));
		int32_t L_50 = __this->get_strstart_45();
		if (!L_50)
		{
			goto IL_020b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_51 = __this->get_pending_23();
		int32_t L_52 = __this->get_pendingCount_25();
		int32_t L_53 = L_52;
		V_3 = L_53;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1)));
		int32_t L_54 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_55 = __this->get__codec_21();
		uint32_t L_56 = L_55->get__Adler32_11();
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_56&(int32_t)((int32_t)-16777216)))>>((int32_t)24))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_57 = __this->get_pending_23();
		int32_t L_58 = __this->get_pendingCount_25();
		int32_t L_59 = L_58;
		V_3 = L_59;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1)));
		int32_t L_60 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_61 = __this->get__codec_21();
		uint32_t L_62 = L_61->get__Adler32_11();
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_62&(int32_t)((int32_t)16711680)))>>((int32_t)16))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = __this->get_pending_23();
		int32_t L_64 = __this->get_pendingCount_25();
		int32_t L_65 = L_64;
		V_3 = L_65;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1)));
		int32_t L_66 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_67 = __this->get__codec_21();
		uint32_t L_68 = L_67->get__Adler32_11();
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_68&(int32_t)((int32_t)65280)))>>8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_69 = __this->get_pending_23();
		int32_t L_70 = __this->get_pendingCount_25();
		int32_t L_71 = L_70;
		V_3 = L_71;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1)));
		int32_t L_72 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_73 = __this->get__codec_21();
		uint32_t L_74 = L_73->get__Adler32_11();
		(L_69)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_74&(int32_t)((int32_t)255))))));
	}

IL_020b:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_75 = __this->get__codec_21();
		IL2CPP_RUNTIME_CLASS_INIT(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var);
		uint32_t L_76;
		L_76 = Adler_Adler32_m153E4796B41C8C0F63E6A07CD399E82C1B6590C5(0, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, 0, 0, /*hidden argument*/NULL);
		L_75->set__Adler32_11(L_76);
	}

IL_021f:
	{
		int32_t L_77 = __this->get_pendingCount_25();
		if (!L_77)
		{
			goto IL_0253;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_78 = __this->get__codec_21();
		ZlibCodec_flush_pending_m06EF71CF66CDF4748E225060DDCA7391A58987C1(L_78, /*hidden argument*/NULL);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_79 = __this->get__codec_21();
		int32_t L_80 = L_79->get_AvailableBytesOut_6();
		if (L_80)
		{
			goto IL_024e;
		}
	}
	{
		__this->set_last_flush_27((-1));
		return 0;
	}

IL_024e:
	{
		goto IL_0273;
	}

IL_0253:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_81 = __this->get__codec_21();
		int32_t L_82 = L_81->get_AvailableBytesIn_2();
		if (L_82)
		{
			goto IL_0273;
		}
	}
	{
		int32_t L_83 = ___flush0;
		int32_t L_84 = V_0;
		if ((((int32_t)L_83) > ((int32_t)L_84)))
		{
			goto IL_0273;
		}
	}
	{
		int32_t L_85 = ___flush0;
		if ((((int32_t)L_85) == ((int32_t)4)))
		{
			goto IL_0273;
		}
	}
	{
		return 0;
	}

IL_0273:
	{
		int32_t L_86 = __this->get_status_22();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_87 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_FINISH_STATE_7();
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_02b0;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_88 = __this->get__codec_21();
		int32_t L_89 = L_88->get_AvailableBytesIn_2();
		if (!L_89)
		{
			goto IL_02b0;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_90 = __this->get__codec_21();
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_91 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))))->get__ErrorMessage_3();
		int32_t L_92 = 7;
		String_t* L_93 = (L_91)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92));
		L_90->set_Message_8(L_93);
		ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 * L_94 = (ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m445658A9E8EB52F8F293F14D2CFA83E23577F534(L_94, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5882879161B7C9D56B5A1120EF8EF366916857FF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Deflate_m7AE6047796DA4D2D682E871641C784B932406E2E_RuntimeMethod_var)));
	}

IL_02b0:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_95 = __this->get__codec_21();
		int32_t L_96 = L_95->get_AvailableBytesIn_2();
		if (L_96)
		{
			goto IL_02e1;
		}
	}
	{
		int32_t L_97 = __this->get_lookahead_47();
		if (L_97)
		{
			goto IL_02e1;
		}
	}
	{
		int32_t L_98 = ___flush0;
		if (!L_98)
		{
			goto IL_03a5;
		}
	}
	{
		int32_t L_99 = __this->get_status_22();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_100 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_FINISH_STATE_7();
		if ((((int32_t)L_99) == ((int32_t)L_100)))
		{
			goto IL_03a5;
		}
	}

IL_02e1:
	{
		CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E * L_101 = __this->get_DeflateFunction_2();
		int32_t L_102 = ___flush0;
		int32_t L_103;
		L_103 = CompressFunc_Invoke_m4A5F01717E558B9E12A9CF0BE5B000BDB378E09D(L_101, L_102, /*hidden argument*/NULL);
		V_4 = L_103;
		int32_t L_104 = V_4;
		if ((((int32_t)L_104) == ((int32_t)2)))
		{
			goto IL_02ff;
		}
	}
	{
		int32_t L_105 = V_4;
		if ((!(((uint32_t)L_105) == ((uint32_t)3))))
		{
			goto IL_030a;
		}
	}

IL_02ff:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var);
		int32_t L_106 = ((DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF_il2cpp_TypeInfo_var))->get_FINISH_STATE_7();
		__this->set_status_22(L_106);
	}

IL_030a:
	{
		int32_t L_107 = V_4;
		if (!L_107)
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_108 = V_4;
		if ((!(((uint32_t)L_108) == ((uint32_t)2))))
		{
			goto IL_0332;
		}
	}

IL_0319:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_109 = __this->get__codec_21();
		int32_t L_110 = L_109->get_AvailableBytesOut_6();
		if (L_110)
		{
			goto IL_0330;
		}
	}
	{
		__this->set_last_flush_27((-1));
	}

IL_0330:
	{
		return 0;
	}

IL_0332:
	{
		int32_t L_111 = V_4;
		if ((!(((uint32_t)L_111) == ((uint32_t)1))))
		{
			goto IL_03a5;
		}
	}
	{
		int32_t L_112 = ___flush0;
		if ((!(((uint32_t)L_112) == ((uint32_t)1))))
		{
			goto IL_034c;
		}
	}
	{
		DeflateManager__tr_align_m1076086A7E698192105E93EA1EFD63F896D97BCD(__this, /*hidden argument*/NULL);
		goto IL_0381;
	}

IL_034c:
	{
		DeflateManager__tr_stored_block_mE9692FBE125A35C18AFC94EB4EF7DB43C6A9CC01(__this, 0, 0, (bool)0, /*hidden argument*/NULL);
		int32_t L_113 = ___flush0;
		if ((!(((uint32_t)L_113) == ((uint32_t)3))))
		{
			goto IL_0381;
		}
	}
	{
		V_5 = 0;
		goto IL_0374;
	}

IL_0364:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_114 = __this->get_head_34();
		int32_t L_115 = V_5;
		(L_114)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_115), (int16_t)0);
		int32_t L_116 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
	}

IL_0374:
	{
		int32_t L_117 = V_5;
		int32_t L_118 = __this->get_hash_size_36();
		if ((((int32_t)L_117) < ((int32_t)L_118)))
		{
			goto IL_0364;
		}
	}

IL_0381:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_119 = __this->get__codec_21();
		ZlibCodec_flush_pending_m06EF71CF66CDF4748E225060DDCA7391A58987C1(L_119, /*hidden argument*/NULL);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_120 = __this->get__codec_21();
		int32_t L_121 = L_120->get_AvailableBytesOut_6();
		if (L_121)
		{
			goto IL_03a5;
		}
	}
	{
		__this->set_last_flush_27((-1));
		return 0;
	}

IL_03a5:
	{
		int32_t L_122 = ___flush0;
		if ((((int32_t)L_122) == ((int32_t)4)))
		{
			goto IL_03ae;
		}
	}
	{
		return 0;
	}

IL_03ae:
	{
		bool L_123;
		L_123 = DeflateManager_get_WantRfc1950HeaderBytes_m2420C594D027E6D9DF7451799709A745102F53AA_inline(__this, /*hidden argument*/NULL);
		if (!L_123)
		{
			goto IL_03c4;
		}
	}
	{
		bool L_124 = __this->get_Rfc1950BytesEmitted_72();
		if (!L_124)
		{
			goto IL_03c6;
		}
	}

IL_03c4:
	{
		return 1;
	}

IL_03c6:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_125 = __this->get_pending_23();
		int32_t L_126 = __this->get_pendingCount_25();
		int32_t L_127 = L_126;
		V_3 = L_127;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1)));
		int32_t L_128 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_129 = __this->get__codec_21();
		uint32_t L_130 = L_129->get__Adler32_11();
		(L_125)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_128), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_130&(int32_t)((int32_t)-16777216)))>>((int32_t)24))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_131 = __this->get_pending_23();
		int32_t L_132 = __this->get_pendingCount_25();
		int32_t L_133 = L_132;
		V_3 = L_133;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1)));
		int32_t L_134 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_135 = __this->get__codec_21();
		uint32_t L_136 = L_135->get__Adler32_11();
		(L_131)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_134), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_136&(int32_t)((int32_t)16711680)))>>((int32_t)16))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_137 = __this->get_pending_23();
		int32_t L_138 = __this->get_pendingCount_25();
		int32_t L_139 = L_138;
		V_3 = L_139;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1)));
		int32_t L_140 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_141 = __this->get__codec_21();
		uint32_t L_142 = L_141->get__Adler32_11();
		(L_137)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_140), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_142&(int32_t)((int32_t)65280)))>>8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_143 = __this->get_pending_23();
		int32_t L_144 = __this->get_pendingCount_25();
		int32_t L_145 = L_144;
		V_3 = L_145;
		__this->set_pendingCount_25(((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)1)));
		int32_t L_146 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_147 = __this->get__codec_21();
		uint32_t L_148 = L_147->get__Adler32_11();
		(L_143)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_146), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_148&(int32_t)((int32_t)255))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_149 = __this->get__codec_21();
		ZlibCodec_flush_pending_m06EF71CF66CDF4748E225060DDCA7391A58987C1(L_149, /*hidden argument*/NULL);
		__this->set_Rfc1950BytesEmitted_72((bool)1);
		int32_t L_150 = __this->get_pendingCount_25();
		if (!L_150)
		{
			goto IL_0499;
		}
	}
	{
		G_B56_0 = 0;
		goto IL_049a;
	}

IL_0499:
	{
		G_B56_0 = 1;
	}

IL_049a:
	{
		return G_B56_0;
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
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m4533545169BEE775D2AFCF17F8A86C29059A33AD (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		DeflateStream__ctor_m21699EE525FA312D7678545AA7AA03FEA3414100(__this, L_0, L_1, 6, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m21699EE525FA312D7678545AA7AA03FEA3414100 (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4(__this, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		__this->set__innerStream_5(L_0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___stream0;
		int32_t L_2 = ___mode1;
		int32_t L_3 = ___level2;
		bool L_4 = ___leaveOpen3;
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_5 = (ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 *)il2cpp_codegen_object_new(ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56_il2cpp_TypeInfo_var);
		ZlibBaseStream__ctor_m03ED40F967F38842310D740EA90C4252C887652B(L_5, L_1, L_2, L_3, ((int32_t)1951), L_4, /*hidden argument*/NULL);
		__this->set__baseStream_4(L_5);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_BufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_BufferSize_mBFE4A583A9CF6781BC043FDA31691B401392F6FF (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_BufferSize_mBFE4A583A9CF6781BC043FDA31691B401392F6FF_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get__workingBuffer_11();
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 * L_4 = (ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m445658A9E8EB52F8F293F14D2CFA83E23577F534(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A538D87C765D16B9229A517D7D588C30AF3D5AE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_BufferSize_mBFE4A583A9CF6781BC043FDA31691B401392F6FF_RuntimeMethod_var)));
	}

IL_0031:
	{
		int32_t L_5 = ___value0;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)1024))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = ___value0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_7);
		int32_t L_9 = ((int32_t)1024);
		RuntimeObject * L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3301E1AE1BCA5C134551471AB287F2443E658618)), L_8, L_10, /*hidden argument*/NULL);
		ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 * L_12 = (ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m445658A9E8EB52F8F293F14D2CFA83E23577F534(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_BufferSize_mBFE4A583A9CF6781BC043FDA31691B401392F6FF_RuntimeMethod_var)));
	}

IL_005c:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_13 = __this->get__baseStream_4();
		int32_t L_14 = ___value0;
		L_13->set__bufferSize_12(L_14);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_Strategy(Pathfinding.Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Strategy_mEC54F37788973D6B9E2FC0B2DB6AE6DE3CE2CAED (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Strategy_mEC54F37788973D6B9E2FC0B2DB6AE6DE3CE2CAED_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_4();
		int32_t L_3 = ___value0;
		L_2->set_Strategy_15(L_3);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Dispose_mF074864B898C7513D7181AF9E274E7D32D698270 (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, bool ___disposing0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = __this->get__disposed_6();
			if (L_0)
			{
				goto IL_002e;
			}
		}

IL_000b:
		{
			bool L_1 = ___disposing0;
			if (!L_1)
			{
				goto IL_0027;
			}
		}

IL_0011:
		{
			ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_4();
			if (!L_2)
			{
				goto IL_0027;
			}
		}

IL_001c:
		{
			ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_3 = __this->get__baseStream_4();
			VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_3);
		}

IL_0027:
		{
			__this->set__disposed_6((bool)1);
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		bool L_4 = ___disposing0;
		Stream_Dispose_mDC5C7A9933446223A84ED106AE3E949E644FB0BE(__this, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanRead_mC50338B3882D1143A33C12F073EB04E0F8EED951 (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_CanRead_mC50338B3882D1143A33C12F073EB04E0F8EED951_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_4();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = L_2->get__stream_14();
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		return L_4;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanSeek_m2C6C109D4867CD313084FA7B5A8B72B321E87ED6 (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanWrite_m639184A38EF770267272BB304D2B227574347617 (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_CanWrite_m639184A38EF770267272BB304D2B227574347617_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_4();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = L_2->get__stream_14();
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		return L_4;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Flush_m383897913A2F5C2FEDB967C25ED6AE20B9687C81 (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Flush_m383897913A2F5C2FEDB967C25ED6AE20B9687C81_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_4();
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Flush() */, L_2);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Length_m81952064A6E67B5DF1DE811CAE7908F43F10E23B (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Length_m81952064A6E67B5DF1DE811CAE7908F43F10E23B_RuntimeMethod_var)));
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Position_m31884A37CAD654CD2D288D4777298669EDAA2180 (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, const RuntimeMethod* method)
{
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_0 = __this->get__baseStream_4();
		int32_t L_1 = L_0->get__streamMode_5();
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_4();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_3 = L_2->get__z_4();
		int64_t L_4 = L_3->get_TotalBytesOut_7();
		return L_4;
	}

IL_0021:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_5 = __this->get__baseStream_4();
		int32_t L_6 = L_5->get__streamMode_5();
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0043;
		}
	}
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_7 = __this->get__baseStream_4();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_8 = L_7->get__z_4();
		int64_t L_9 = L_8->get_TotalBytesIn_3();
		return L_9;
	}

IL_0043:
	{
		return ((int64_t)((int64_t)0));
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Position_m05FCE777B02D2CAD223BFC7CDF62AD143BA39962 (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Position_m05FCE777B02D2CAD223BFC7CDF62AD143BA39962_RuntimeMethod_var)));
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_m34B5CA2E2A76E35CEEC5C4BD000564B05A3CDE84 (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m34B5CA2E2A76E35CEEC5C4BD000564B05A3CDE84_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		int32_t L_6;
		L_6 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_Seek_m00F1AD98D01048CB9089A2942915D69C0A4B19C9 (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Seek_m00F1AD98D01048CB9089A2942915D69C0A4B19C9_RuntimeMethod_var)));
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetLength_m770CCC9600C21228DD24DFC88EC15C6A5BD03752 (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_SetLength_m770CCC9600C21228DD24DFC88EC15C6A5BD03752_RuntimeMethod_var)));
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Write_m20796F10EA31CA767E5CB938E6BCEA62C66AD9C9 (DeflateStream_t5C9B809DE9C663812F3F961734B09D55BAE52B5D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_m20796F10EA31CA767E5CB938E6BCEA62C66AD9C9_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pathfinding.Ionic.Zip.ExtractProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractProgressEventArgs__ctor_m7AC9FC96F598AD10A7732476568780B8C3B4B859 (ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * __this, String_t* ___archiveName0, int32_t ___flavor1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___archiveName0;
		int32_t L_1 = ___flavor1;
		ZipProgressEventArgs__ctor_m09D67B6E0D0EFC521631A2D390054CBECDAE427A(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zip.ExtractProgressEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractProgressEventArgs__ctor_m50E4662C7235590D92A376A69764398416A81658 (ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * __this, const RuntimeMethod* method)
{
	{
		ZipProgressEventArgs__ctor_m14E34A6FBC7ABA811BD9BE6688AEED4BFCE8A665(__this, /*hidden argument*/NULL);
		return;
	}
}
// Pathfinding.Ionic.Zip.ExtractProgressEventArgs Pathfinding.Ionic.Zip.ExtractProgressEventArgs::BeforeExtractEntry(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * ExtractProgressEventArgs_BeforeExtractEntry_mF7A23D669026FDAEA4411C2FA62BDD6C98AD568D (String_t* ___archiveName0, ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * ___entry1, String_t* ___extractLocation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * V_0 = NULL;
	ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * V_1 = NULL;
	{
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_0 = (ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C *)il2cpp_codegen_object_new(ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C_il2cpp_TypeInfo_var);
		ExtractProgressEventArgs__ctor_m50E4662C7235590D92A376A69764398416A81658(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_1 = V_1;
		String_t* L_2 = ___archiveName0;
		ZipProgressEventArgs_set_ArchiveName_mC327D87BD4E328D49C656AB66DC24B326158F10B_inline(L_1, L_2, /*hidden argument*/NULL);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_3 = V_1;
		ZipProgressEventArgs_set_EventType_m3896585F34A49B78CC8EFC5D9A9F901BB12B5249_inline(L_3, ((int32_t)17), /*hidden argument*/NULL);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_4 = V_1;
		ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * L_5 = ___entry1;
		ZipProgressEventArgs_set_CurrentEntry_m696C96599ED44B6BD426D880ED02F552E5568F74_inline(L_4, L_5, /*hidden argument*/NULL);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_6 = V_1;
		String_t* L_7 = ___extractLocation2;
		L_6->set__target_8(L_7);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_8 = V_1;
		V_0 = L_8;
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_9 = V_0;
		return L_9;
	}
}
// Pathfinding.Ionic.Zip.ExtractProgressEventArgs Pathfinding.Ionic.Zip.ExtractProgressEventArgs::ExtractExisting(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * ExtractProgressEventArgs_ExtractExisting_mDFF095B6852C57CBC4582EE9D0EA5F35587A65CE (String_t* ___archiveName0, ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * ___entry1, String_t* ___extractLocation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * V_0 = NULL;
	ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * V_1 = NULL;
	{
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_0 = (ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C *)il2cpp_codegen_object_new(ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C_il2cpp_TypeInfo_var);
		ExtractProgressEventArgs__ctor_m50E4662C7235590D92A376A69764398416A81658(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_1 = V_1;
		String_t* L_2 = ___archiveName0;
		ZipProgressEventArgs_set_ArchiveName_mC327D87BD4E328D49C656AB66DC24B326158F10B_inline(L_1, L_2, /*hidden argument*/NULL);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_3 = V_1;
		ZipProgressEventArgs_set_EventType_m3896585F34A49B78CC8EFC5D9A9F901BB12B5249_inline(L_3, ((int32_t)19), /*hidden argument*/NULL);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_4 = V_1;
		ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * L_5 = ___entry1;
		ZipProgressEventArgs_set_CurrentEntry_m696C96599ED44B6BD426D880ED02F552E5568F74_inline(L_4, L_5, /*hidden argument*/NULL);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_6 = V_1;
		String_t* L_7 = ___extractLocation2;
		L_6->set__target_8(L_7);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_8 = V_1;
		V_0 = L_8;
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_9 = V_0;
		return L_9;
	}
}
// Pathfinding.Ionic.Zip.ExtractProgressEventArgs Pathfinding.Ionic.Zip.ExtractProgressEventArgs::AfterExtractEntry(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * ExtractProgressEventArgs_AfterExtractEntry_m53E78EB4A7963B9ACDE06E53904DCB3F60288FA0 (String_t* ___archiveName0, ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * ___entry1, String_t* ___extractLocation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * V_0 = NULL;
	ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * V_1 = NULL;
	{
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_0 = (ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C *)il2cpp_codegen_object_new(ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C_il2cpp_TypeInfo_var);
		ExtractProgressEventArgs__ctor_m50E4662C7235590D92A376A69764398416A81658(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_1 = V_1;
		String_t* L_2 = ___archiveName0;
		ZipProgressEventArgs_set_ArchiveName_mC327D87BD4E328D49C656AB66DC24B326158F10B_inline(L_1, L_2, /*hidden argument*/NULL);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_3 = V_1;
		ZipProgressEventArgs_set_EventType_m3896585F34A49B78CC8EFC5D9A9F901BB12B5249_inline(L_3, ((int32_t)18), /*hidden argument*/NULL);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_4 = V_1;
		ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * L_5 = ___entry1;
		ZipProgressEventArgs_set_CurrentEntry_m696C96599ED44B6BD426D880ED02F552E5568F74_inline(L_4, L_5, /*hidden argument*/NULL);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_6 = V_1;
		String_t* L_7 = ___extractLocation2;
		L_6->set__target_8(L_7);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_8 = V_1;
		V_0 = L_8;
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_9 = V_0;
		return L_9;
	}
}
// Pathfinding.Ionic.Zip.ExtractProgressEventArgs Pathfinding.Ionic.Zip.ExtractProgressEventArgs::ByteUpdate(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * ExtractProgressEventArgs_ByteUpdate_m25B3D6F08ABA9FDA992CD525CA96D27ACEBBA5B6 (String_t* ___archiveName0, ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * ___entry1, int64_t ___bytesWritten2, int64_t ___totalBytes3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * V_0 = NULL;
	{
		String_t* L_0 = ___archiveName0;
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_1 = (ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C *)il2cpp_codegen_object_new(ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C_il2cpp_TypeInfo_var);
		ExtractProgressEventArgs__ctor_m7AC9FC96F598AD10A7732476568780B8C3B4B859(L_1, L_0, ((int32_t)20), /*hidden argument*/NULL);
		V_0 = L_1;
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_2 = V_0;
		String_t* L_3 = ___archiveName0;
		ZipProgressEventArgs_set_ArchiveName_mC327D87BD4E328D49C656AB66DC24B326158F10B_inline(L_2, L_3, /*hidden argument*/NULL);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_4 = V_0;
		ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * L_5 = ___entry1;
		ZipProgressEventArgs_set_CurrentEntry_m696C96599ED44B6BD426D880ED02F552E5568F74_inline(L_4, L_5, /*hidden argument*/NULL);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_6 = V_0;
		int64_t L_7 = ___bytesWritten2;
		ZipProgressEventArgs_set_BytesTransferred_m39E2F33784CAEF8F8FB2E8D3C95E2F3EB0C91AA4_inline(L_6, L_7, /*hidden argument*/NULL);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_8 = V_0;
		int64_t L_9 = ___totalBytes3;
		ZipProgressEventArgs_set_TotalBytesToTransfer_mE16CD00C26FEBFB8EEA1EF3285EE3E61B0AE3D27_inline(L_8, L_9, /*hidden argument*/NULL);
		ExtractProgressEventArgs_t7CB8C89F975F5C1F7EDF7AEABE310D5489D8B66C * L_10 = V_0;
		return L_10;
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
// System.Void Pathfinding.Ionic.Zlib.GZipStream::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__cctor_m2313AEF7E70361D6221A5AF12DC361DEAC080CA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE577106AF74D4E432DDB4785DA3B2BE486F67838);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		((GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_il2cpp_TypeInfo_var))->set__unixEpoch_11(L_0);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1;
		L_1 = Encoding_GetEncoding_mD5352F1522341280E9025D16463E63916549F9E3(_stringLiteralE577106AF74D4E432DDB4785DA3B2BE486F67838, /*hidden argument*/NULL);
		((GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_il2cpp_TypeInfo_var))->set_iso8859dash1_12(L_1);
		return;
	}
}
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_Comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GZipStream_get_Comment_mA704699D0769105965CFFF5F24D12E4FBDD55718 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__Comment_10();
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_Comment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Comment_m8B41963F317D29651C733C1BE6981A0FCBA7994D (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_7();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_Comment_m8B41963F317D29651C733C1BE6981A0FCBA7994D_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_2 = ___value0;
		__this->set__Comment_10(L_2);
		return;
	}
}
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_FileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GZipStream_get_FileName_mBD624C5F107A207CB65CD7DBB0BC76B9121C7D69 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__FileName_9();
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_FileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_FileName_mF7F67442CFAF08D147006A6A9A944FB3ACBC73E2 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_7();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_FileName_mF7F67442CFAF08D147006A6A9A944FB3ACBC73E2_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_2 = ___value0;
		__this->set__FileName_9(L_2);
		String_t* L_3 = __this->get__FileName_9();
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		String_t* L_4 = __this->get__FileName_9();
		int32_t L_5;
		L_5 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_6 = __this->get__FileName_9();
		String_t* L_7;
		L_7 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_6, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, /*hidden argument*/NULL);
		__this->set__FileName_9(L_7);
	}

IL_005a:
	{
		String_t* L_8 = __this->get__FileName_9();
		bool L_9;
		L_9 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_8, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t * L_10 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FC4F45EF48BB08BC4D6C5BC2A71B64139E0FEE4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_FileName_mF7F67442CFAF08D147006A6A9A944FB3ACBC73E2_RuntimeMethod_var)));
	}

IL_007a:
	{
		String_t* L_11 = __this->get__FileName_9();
		int32_t L_12;
		L_12 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_11, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_13 = __this->get__FileName_9();
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_13, /*hidden argument*/NULL);
		__this->set__FileName_9(L_14);
	}

IL_00a1:
	{
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanRead_m9A0436364A7B476355E605476E7C7B485FEEE0F8 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_7();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_CanRead_m9A0436364A7B476355E605476E7C7B485FEEE0F8_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_6();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = L_2->get__stream_14();
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		return L_4;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanSeek_mCBEF6111D3EAA463131BEAA17B57B76F8963B4C6 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanWrite_mF9B02A9B6FD41BCF6DA6755BF522C0DC51A0DBA2 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_7();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_CanWrite_mF9B02A9B6FD41BCF6DA6755BF522C0DC51A0DBA2_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_6();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = L_2->get__stream_14();
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		return L_4;
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Flush_m38A859489B8A7689795C215D087D93DBAE2807A1 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_7();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Flush_m38A859489B8A7689795C215D087D93DBAE2807A1_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_6();
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Flush() */, L_2);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Length_m2EF07CFF61C76C77107C0700D028667CBB7DFDE7 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Length_m2EF07CFF61C76C77107C0700D028667CBB7DFDE7_RuntimeMethod_var)));
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Position_mB467EC65C0C3CA47B39625BFBA8F7125E78F4D40 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method)
{
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_0 = __this->get__baseStream_6();
		int32_t L_1 = L_0->get__streamMode_5();
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_6();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_3 = L_2->get__z_4();
		int64_t L_4 = L_3->get_TotalBytesOut_7();
		int32_t L_5 = __this->get__headerByteCount_5();
		return ((int64_t)il2cpp_codegen_add((int64_t)L_4, (int64_t)((int64_t)((int64_t)L_5))));
	}

IL_0029:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_6 = __this->get__baseStream_6();
		int32_t L_7 = L_6->get__streamMode_5();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_8 = __this->get__baseStream_6();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_9 = L_8->get__z_4();
		int64_t L_10 = L_9->get_TotalBytesIn_3();
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_11 = __this->get__baseStream_6();
		int32_t L_12 = L_11->get__gzipHeaderByteCount_20();
		return ((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)((int64_t)((int64_t)L_12))));
	}

IL_0058:
	{
		return ((int64_t)((int64_t)0));
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Position_m84D7558360EB5D90039606D3812C33E65E447609 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_Position_m84D7558360EB5D90039606D3812C33E65E447609_RuntimeMethod_var)));
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_Read_m620416245929A9DC7C9BAC61200BFD0292FC5477 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get__disposed_7();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Read_m620416245929A9DC7C9BAC61200BFD0292FC5477_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		int32_t L_6;
		L_6 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		V_0 = L_6;
		bool L_7 = __this->get__firstReadDone_8();
		if (L_7)
		{
			goto IL_0059;
		}
	}
	{
		__this->set__firstReadDone_8((bool)1);
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_8 = __this->get__baseStream_6();
		String_t* L_9 = L_8->get__GzipFileName_17();
		GZipStream_set_FileName_mF7F67442CFAF08D147006A6A9A944FB3ACBC73E2(__this, L_9, /*hidden argument*/NULL);
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_10 = __this->get__baseStream_6();
		String_t* L_11 = L_10->get__GzipComment_18();
		GZipStream_set_Comment_m8B41963F317D29651C733C1BE6981A0FCBA7994D(__this, L_11, /*hidden argument*/NULL);
	}

IL_0059:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_Seek_m1EE10B8AC98F52423C5F27D52A21D370801CC470 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Seek_m1EE10B8AC98F52423C5F27D52A21D370801CC470_RuntimeMethod_var)));
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_SetLength_m2EDEF961754C706AD959AE4893928801DDE92D45 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_SetLength_m2EDEF961754C706AD959AE4893928801DDE92D45_RuntimeMethod_var)));
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Write_mF61D298E2F37945196DE23D33B26A34E994130D4 (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_7();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Write_mF61D298E2F37945196DE23D33B26A34E994130D4_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_2 = __this->get__baseStream_6();
		int32_t L_3 = L_2->get__streamMode_5();
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_4 = __this->get__baseStream_6();
		bool L_5;
		L_5 = ZlibBaseStream_get__wantCompress_m7D67B45731CDD6E922A03E1064CDE47A2489D5BD(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_6;
		L_6 = GZipStream_EmitHeader_m89687E2FECB7A400BC01E03ABF2FA6756A983F0B(__this, /*hidden argument*/NULL);
		__this->set__headerByteCount_5(L_6);
		goto IL_004e;
	}

IL_0048:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_7 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Write_mF61D298E2F37945196DE23D33B26A34E994130D4_RuntimeMethod_var)));
	}

IL_004e:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_8 = __this->get__baseStream_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___buffer0;
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___count2;
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, L_10, L_11);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::EmitHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_EmitHeader_m89687E2FECB7A400BC01E03ABF2FA6756A983F0B (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B6_0 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		String_t* L_0;
		L_0 = GZipStream_get_Comment_mA704699D0769105965CFFF5F24D12E4FBDD55718_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(NULL));
		goto IL_0021;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_il2cpp_TypeInfo_var);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1 = ((GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_il2cpp_TypeInfo_var))->get_iso8859dash1_12();
		String_t* L_2;
		L_2 = GZipStream_get_Comment_mA704699D0769105965CFFF5F24D12E4FBDD55718_inline(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		G_B3_0 = L_3;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		String_t* L_4;
		L_4 = GZipStream_get_FileName_mBD624C5F107A207CB65CD7DBB0BC76B9121C7D69_inline(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		G_B6_0 = ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(NULL));
		goto IL_0043;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_il2cpp_TypeInfo_var);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_5 = ((GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_il2cpp_TypeInfo_var))->get_iso8859dash1_12();
		String_t* L_6;
		L_6 = GZipStream_get_FileName_mBD624C5F107A207CB65CD7DBB0BC76B9121C7D69_inline(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
		G_B6_0 = L_7;
	}

IL_0043:
	{
		V_1 = G_B6_0;
		String_t* L_8;
		L_8 = GZipStream_get_Comment_mA704699D0769105965CFFF5F24D12E4FBDD55718_inline(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_005a;
	}

IL_0055:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		G_B9_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)1));
	}

IL_005a:
	{
		V_2 = G_B9_0;
		String_t* L_10;
		L_10 = GZipStream_get_FileName_mBD624C5F107A207CB65CD7DBB0BC76B9121C7D69_inline(__this, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_006c;
		}
	}
	{
		G_B12_0 = 0;
		goto IL_0071;
	}

IL_006c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_1;
		G_B12_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))), (int32_t)1));
	}

IL_0071:
	{
		V_3 = G_B12_0;
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)10), (int32_t)L_12)), (int32_t)L_13));
		int32_t L_14 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_14);
		V_5 = L_15;
		V_6 = 0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = V_5;
		int32_t L_17 = V_6;
		int32_t L_18 = L_17;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)31));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_5;
		int32_t L_20 = V_6;
		int32_t L_21 = L_20;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)((int32_t)139));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = V_5;
		int32_t L_23 = V_6;
		int32_t L_24 = L_23;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)8);
		V_7 = (uint8_t)0;
		String_t* L_25;
		L_25 = GZipStream_get_Comment_mA704699D0769105965CFFF5F24D12E4FBDD55718_inline(__this, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00c2;
		}
	}
	{
		uint8_t L_26 = V_7;
		V_7 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_26^(int32_t)((int32_t)16)))));
	}

IL_00c2:
	{
		String_t* L_27;
		L_27 = GZipStream_get_FileName_mBD624C5F107A207CB65CD7DBB0BC76B9121C7D69_inline(__this, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00d4;
		}
	}
	{
		uint8_t L_28 = V_7;
		V_7 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_28^(int32_t)8))));
	}

IL_00d4:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = V_5;
		int32_t L_30 = V_6;
		int32_t L_31 = L_30;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		uint8_t L_32 = V_7;
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)L_32);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * L_33 = __this->get_address_of_LastModified_4();
		bool L_34;
		L_34 = Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_inline((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)L_33, /*hidden argument*/Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		if (L_34)
		{
			goto IL_0100;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_35;
		L_35 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB((&L_36), L_35, /*hidden argument*/Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		__this->set_LastModified_4(L_36);
	}

IL_0100:
	{
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * L_37 = __this->get_address_of_LastModified_4();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_38;
		L_38 = Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)L_37, /*hidden argument*/Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_39 = ((GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9_il2cpp_TypeInfo_var))->get__unixEpoch_11();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_40;
		L_40 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_38, L_39, /*hidden argument*/NULL);
		V_8 = L_40;
		double L_41;
		L_41 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_8), /*hidden argument*/NULL);
		V_9 = il2cpp_codegen_cast_double_to_int<int32_t>(L_41);
		int32_t L_42 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43;
		L_43 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_42, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = V_5;
		int32_t L_45 = V_6;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_43, 0, (RuntimeArray *)(RuntimeArray *)L_44, L_45, 4, /*hidden argument*/NULL);
		int32_t L_46 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)4));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47 = V_5;
		int32_t L_48 = V_6;
		int32_t L_49 = L_48;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49), (uint8_t)0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = V_5;
		int32_t L_51 = V_6;
		int32_t L_52 = L_51;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52), (uint8_t)((int32_t)255));
		int32_t L_53 = V_3;
		if (!L_53)
		{
			goto IL_017a;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_55 = V_5;
		int32_t L_56 = V_6;
		int32_t L_57 = V_3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_54, 0, (RuntimeArray *)(RuntimeArray *)L_55, L_56, ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_58 = V_6;
		int32_t L_59 = V_3;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)1))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_60 = V_5;
		int32_t L_61 = V_6;
		int32_t L_62 = L_61;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)0);
	}

IL_017a:
	{
		int32_t L_63 = V_2;
		if (!L_63)
		{
			goto IL_01a1;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_65 = V_5;
		int32_t L_66 = V_6;
		int32_t L_67 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_64, 0, (RuntimeArray *)(RuntimeArray *)L_65, L_66, ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_70 = V_5;
		int32_t L_71 = V_6;
		int32_t L_72 = L_71;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72), (uint8_t)0);
	}

IL_01a1:
	{
		ZlibBaseStream_tB2216DAD9179F003DE142FED210000A8BAB04C56 * L_73 = __this->get__baseStream_6();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_74 = L_73->get__stream_14();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_75 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_76 = V_5;
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_74, L_75, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_77 = V_5;
		return ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)));
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
// System.Void Pathfinding.Ionic.Zlib.InfTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__ctor_m2A77C6807707632B404E072D8E8DB37C5C4EED21 (InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InfTree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__cctor_m0DBA370915C76614E37928D0725B12F2BE3B3ED8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D5_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D6_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D7_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D8_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D9_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2DA_6_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1536));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D5_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var))->set_fixed_tl_0(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D6_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var))->set_fixed_td_1(L_4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D7_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var))->set_cplens_2(L_7);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = L_9;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D8_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var))->set_cplext_3(L_10);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = L_12;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2D9_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		((InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var))->set_cpdist_4(L_13);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = L_15;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2DA_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		((InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var))->set_cpdext_5(L_16);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m0DBB4F24E944FF5E4FA44E6A1342EBA79D9B3086 (InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___d4, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___e5, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___t6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m7, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp8, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hn9, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___v10, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B56_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B56_1 = NULL;
	int32_t G_B55_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B55_1 = NULL;
	int32_t G_B57_0 = 0;
	int32_t G_B57_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B57_2 = NULL;
	int32_t G_B75_0 = 0;
	{
		V_9 = 0;
		int32_t L_0 = ___n2;
		V_4 = L_0;
	}

IL_0006:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_c_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___b0;
		int32_t L_3 = ___bindex1;
		int32_t L_4 = V_9;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		int32_t L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		int32_t* L_7 = ((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)));
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_9 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0006;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = __this->get_c_8();
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ___n2;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0049;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = ___t6;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = ___m7;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		return 0;
	}

IL_0049:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = ___m7;
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_7 = L_20;
		V_5 = 1;
		goto IL_0070;
	}

IL_0057:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = __this->get_c_8();
		int32_t L_22 = V_5;
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		if (!L_24)
		{
			goto IL_006a;
		}
	}
	{
		goto IL_0079;
	}

IL_006a:
	{
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0070:
	{
		int32_t L_26 = V_5;
		if ((((int32_t)L_26) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0057;
		}
	}

IL_0079:
	{
		int32_t L_27 = V_5;
		V_6 = L_27;
		int32_t L_28 = V_7;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_30 = V_5;
		V_7 = L_30;
	}

IL_008a:
	{
		V_4 = ((int32_t)15);
		goto IL_00ac;
	}

IL_0093:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = __this->get_c_8();
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		if (!L_34)
		{
			goto IL_00a6;
		}
	}
	{
		goto IL_00b3;
	}

IL_00a6:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1));
	}

IL_00ac:
	{
		int32_t L_36 = V_4;
		if (L_36)
		{
			goto IL_0093;
		}
	}

IL_00b3:
	{
		int32_t L_37 = V_4;
		V_2 = L_37;
		int32_t L_38 = V_7;
		int32_t L_39 = V_4;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_40 = V_4;
		V_7 = L_40;
	}

IL_00c3:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = ___m7;
		int32_t L_42 = V_7;
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_42);
		int32_t L_43 = V_5;
		V_13 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_43&(int32_t)((int32_t)31)))));
		goto IL_00fb;
	}

IL_00d7:
	{
		int32_t L_44 = V_13;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = __this->get_c_8();
		int32_t L_46 = V_5;
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)L_48));
		V_13 = L_49;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_00ef;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_00ef:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		int32_t L_51 = V_13;
		V_13 = ((int32_t)((int32_t)L_51<<(int32_t)1));
	}

IL_00fb:
	{
		int32_t L_52 = V_5;
		int32_t L_53 = V_4;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_54 = V_13;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = __this->get_c_8();
		int32_t L_56 = V_4;
		int32_t L_57 = L_56;
		int32_t L_58 = (L_55)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_58));
		V_13 = L_59;
		if ((((int32_t)L_59) >= ((int32_t)0)))
		{
			goto IL_011c;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_011c:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60 = __this->get_c_8();
		int32_t L_61 = V_4;
		int32_t* L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)));
		int32_t L_63 = *((int32_t*)L_62);
		int32_t L_64 = V_13;
		*((int32_t*)L_62) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)L_64));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_65 = __this->get_x_11();
		int32_t L_66 = 0;
		V_5 = L_66;
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_66);
		V_9 = 1;
		V_12 = 2;
		goto IL_016a;
	}

IL_0146:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = __this->get_x_11();
		int32_t L_68 = V_12;
		int32_t L_69 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_70 = __this->get_c_8();
		int32_t L_71 = V_9;
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		int32_t L_74 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)L_73));
		V_5 = L_74;
		(L_67)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68), (int32_t)L_74);
		int32_t L_75 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		int32_t L_76 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_016a:
	{
		int32_t L_77 = V_4;
		int32_t L_78 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)1));
		V_4 = L_78;
		if (L_78)
		{
			goto IL_0146;
		}
	}
	{
		V_4 = 0;
		V_9 = 0;
	}

IL_017c:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_79 = ___b0;
		int32_t L_80 = ___bindex1;
		int32_t L_81 = V_9;
		int32_t L_82 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)L_81));
		int32_t L_83 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = L_83;
		V_5 = L_84;
		if (!L_84)
		{
			goto IL_01a6;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_85 = ___v10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_86 = __this->get_x_11();
		int32_t L_87 = V_5;
		int32_t* L_88 = ((L_86)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_87)));
		int32_t L_89 = *((int32_t*)L_88);
		int32_t L_90 = L_89;
		V_15 = L_90;
		*((int32_t*)L_88) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		int32_t L_91 = V_15;
		int32_t L_92 = V_4;
		(L_85)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91), (int32_t)L_92);
	}

IL_01a6:
	{
		int32_t L_93 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
		int32_t L_94 = V_4;
		int32_t L_95 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		V_4 = L_95;
		int32_t L_96 = ___n2;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_017c;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_97 = __this->get_x_11();
		int32_t L_98 = V_2;
		int32_t L_99 = L_98;
		int32_t L_100 = (L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_99));
		___n2 = L_100;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_101 = __this->get_x_11();
		int32_t L_102 = 0;
		V_4 = L_102;
		(L_101)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_102);
		V_9 = 0;
		V_3 = (-1);
		int32_t L_103 = V_7;
		V_11 = ((-L_103));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_104 = __this->get_u_10();
		(L_104)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		V_10 = 0;
		V_14 = 0;
		goto IL_04a3;
	}

IL_01ed:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_105 = __this->get_c_8();
		int32_t L_106 = V_6;
		int32_t L_107 = L_106;
		int32_t L_108 = (L_105)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_107));
		V_0 = L_108;
		goto IL_0493;
	}

IL_01fc:
	{
		goto IL_033d;
	}

IL_0201:
	{
		int32_t L_109 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
		int32_t L_110 = V_11;
		int32_t L_111 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)L_111));
		int32_t L_112 = V_2;
		int32_t L_113 = V_11;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_112, (int32_t)L_113));
		int32_t L_114 = V_14;
		int32_t L_115 = V_7;
		if ((((int32_t)L_114) <= ((int32_t)L_115)))
		{
			goto IL_0222;
		}
	}
	{
		int32_t L_116 = V_7;
		G_B38_0 = L_116;
		goto IL_0224;
	}

IL_0222:
	{
		int32_t L_117 = V_14;
		G_B38_0 = L_117;
	}

IL_0224:
	{
		V_14 = G_B38_0;
		int32_t L_118 = V_6;
		int32_t L_119 = V_11;
		int32_t L_120 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)L_119));
		V_5 = L_120;
		int32_t L_121 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_120&(int32_t)((int32_t)31)))));
		V_1 = L_121;
		int32_t L_122 = V_0;
		if ((((int32_t)L_121) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1)))))
		{
			goto IL_028c;
		}
	}
	{
		int32_t L_123 = V_1;
		int32_t L_124 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_123, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1))));
		int32_t L_125 = V_6;
		V_12 = L_125;
		int32_t L_126 = V_5;
		int32_t L_127 = V_14;
		if ((((int32_t)L_126) >= ((int32_t)L_127)))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_027e;
	}

IL_0255:
	{
		int32_t L_128 = V_1;
		int32_t L_129 = ((int32_t)((int32_t)L_128<<(int32_t)1));
		V_1 = L_129;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_130 = __this->get_c_8();
		int32_t L_131 = V_12;
		int32_t L_132 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
		V_12 = L_132;
		int32_t L_133 = L_132;
		int32_t L_134 = (L_130)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_133));
		if ((((int32_t)L_129) > ((int32_t)L_134)))
		{
			goto IL_0272;
		}
	}
	{
		goto IL_028c;
	}

IL_0272:
	{
		int32_t L_135 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_136 = __this->get_c_8();
		int32_t L_137 = V_12;
		int32_t L_138 = L_137;
		int32_t L_139 = (L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_138));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_135, (int32_t)L_139));
	}

IL_027e:
	{
		int32_t L_140 = V_5;
		int32_t L_141 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)1));
		V_5 = L_141;
		int32_t L_142 = V_14;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_0255;
		}
	}

IL_028c:
	{
		int32_t L_143 = V_5;
		V_14 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_143&(int32_t)((int32_t)31)))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_144 = ___hn9;
		int32_t L_145 = 0;
		int32_t L_146 = (L_144)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)L_147))) <= ((int32_t)((int32_t)1440))))
		{
			goto IL_02a9;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_02a9:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_148 = __this->get_u_10();
		int32_t L_149 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_150 = ___hn9;
		int32_t L_151 = 0;
		int32_t L_152 = (L_150)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_151));
		int32_t L_153 = L_152;
		V_10 = L_153;
		(L_148)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_149), (int32_t)L_153);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_154 = ___hn9;
		int32_t* L_155 = ((L_154)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_156 = *((int32_t*)L_155);
		int32_t L_157 = V_14;
		*((int32_t*)L_155) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_156, (int32_t)L_157));
		int32_t L_158 = V_3;
		if (!L_158)
		{
			goto IL_0337;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_159 = __this->get_x_11();
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		(L_159)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_160), (int32_t)L_161);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_162 = __this->get_r_9();
		int32_t L_163 = V_5;
		(L_162)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)((int32_t)((int8_t)((int8_t)L_163)))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_164 = __this->get_r_9();
		int32_t L_165 = V_7;
		(L_164)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)((int32_t)((int8_t)((int8_t)L_165)))));
		int32_t L_166 = V_4;
		int32_t L_167 = V_11;
		int32_t L_168 = V_7;
		int32_t L_169;
		L_169 = SharedUtils_URShift_m2A309426D3A3C6AD731279C364EE4F139F85A39C(L_166, ((int32_t)il2cpp_codegen_subtract((int32_t)L_167, (int32_t)L_168)), /*hidden argument*/NULL);
		V_5 = L_169;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_170 = __this->get_r_9();
		int32_t L_171 = V_10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_172 = __this->get_u_10();
		int32_t L_173 = V_3;
		int32_t L_174 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_173, (int32_t)1));
		int32_t L_175 = (L_172)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_174));
		int32_t L_176 = V_5;
		(L_170)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_171, (int32_t)L_175)), (int32_t)L_176)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_177 = __this->get_r_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_178 = ___hp8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_179 = __this->get_u_10();
		int32_t L_180 = V_3;
		int32_t L_181 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_180, (int32_t)1));
		int32_t L_182 = (L_179)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = V_5;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_177, 0, (RuntimeArray *)(RuntimeArray *)L_178, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)L_183)), (int32_t)3)), 3, /*hidden argument*/NULL);
		goto IL_033d;
	}

IL_0337:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_184 = ___t6;
		int32_t L_185 = V_10;
		(L_184)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_185);
	}

IL_033d:
	{
		int32_t L_186 = V_6;
		int32_t L_187 = V_11;
		int32_t L_188 = V_7;
		if ((((int32_t)L_186) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_187, (int32_t)L_188)))))
		{
			goto IL_0201;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_189 = __this->get_r_9();
		int32_t L_190 = V_6;
		int32_t L_191 = V_11;
		(L_189)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)((int32_t)((int8_t)((int8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_190, (int32_t)L_191)))))));
		int32_t L_192 = V_9;
		int32_t L_193 = ___n2;
		if ((((int32_t)L_192) < ((int32_t)L_193)))
		{
			goto IL_0372;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_194 = __this->get_r_9();
		(L_194)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)192));
		goto IL_03e9;
	}

IL_0372:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_195 = ___v10;
		int32_t L_196 = V_9;
		int32_t L_197 = L_196;
		int32_t L_198 = (L_195)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = ___s3;
		if ((((int32_t)L_198) >= ((int32_t)L_199)))
		{
			goto IL_03b6;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_200 = __this->get_r_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_201 = ___v10;
		int32_t L_202 = V_9;
		int32_t L_203 = L_202;
		int32_t L_204 = (L_201)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_203));
		G_B55_0 = 0;
		G_B55_1 = L_200;
		if ((((int32_t)L_204) >= ((int32_t)((int32_t)256))))
		{
			G_B56_0 = 0;
			G_B56_1 = L_200;
			goto IL_039a;
		}
	}
	{
		G_B57_0 = 0;
		G_B57_1 = G_B55_0;
		G_B57_2 = G_B55_1;
		goto IL_039c;
	}

IL_039a:
	{
		G_B57_0 = ((int32_t)96);
		G_B57_1 = G_B56_0;
		G_B57_2 = G_B56_1;
	}

IL_039c:
	{
		(G_B57_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B57_1), (int32_t)((int32_t)((int32_t)((int8_t)((int8_t)G_B57_0)))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_205 = __this->get_r_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_206 = ___v10;
		int32_t L_207 = V_9;
		int32_t L_208 = L_207;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_208, (int32_t)1));
		int32_t L_209 = L_208;
		int32_t L_210 = (L_206)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_209));
		(L_205)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)L_210);
		goto IL_03e9;
	}

IL_03b6:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_211 = __this->get_r_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_212 = ___e5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_213 = ___v10;
		int32_t L_214 = V_9;
		int32_t L_215 = L_214;
		int32_t L_216 = (L_213)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = ___s3;
		int32_t L_218 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_216, (int32_t)L_217));
		int32_t L_219 = (L_212)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_218));
		(L_211)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)((int32_t)((int8_t)((int8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_219, (int32_t)((int32_t)16))), (int32_t)((int32_t)64))))))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_220 = __this->get_r_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_221 = ___d4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_222 = ___v10;
		int32_t L_223 = V_9;
		int32_t L_224 = L_223;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_224, (int32_t)1));
		int32_t L_225 = L_224;
		int32_t L_226 = (L_222)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = ___s3;
		int32_t L_228 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_226, (int32_t)L_227));
		int32_t L_229 = (L_221)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_228));
		(L_220)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)L_229);
	}

IL_03e9:
	{
		int32_t L_230 = V_6;
		int32_t L_231 = V_11;
		V_1 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_230, (int32_t)L_231))&(int32_t)((int32_t)31)))));
		int32_t L_232 = V_4;
		int32_t L_233 = V_11;
		int32_t L_234;
		L_234 = SharedUtils_URShift_m2A309426D3A3C6AD731279C364EE4F139F85A39C(L_232, L_233, /*hidden argument*/NULL);
		V_5 = L_234;
		goto IL_0420;
	}

IL_0404:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_235 = __this->get_r_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_236 = ___hp8;
		int32_t L_237 = V_10;
		int32_t L_238 = V_5;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_235, 0, (RuntimeArray *)(RuntimeArray *)L_236, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_237, (int32_t)L_238)), (int32_t)3)), 3, /*hidden argument*/NULL);
		int32_t L_239 = V_5;
		int32_t L_240 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_239, (int32_t)L_240));
	}

IL_0420:
	{
		int32_t L_241 = V_5;
		int32_t L_242 = V_14;
		if ((((int32_t)L_241) < ((int32_t)L_242)))
		{
			goto IL_0404;
		}
	}
	{
		int32_t L_243 = V_6;
		V_5 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_243, (int32_t)1))&(int32_t)((int32_t)31)))));
		goto IL_044a;
	}

IL_0439:
	{
		int32_t L_244 = V_4;
		int32_t L_245 = V_5;
		V_4 = ((int32_t)((int32_t)L_244^(int32_t)L_245));
		int32_t L_246 = V_5;
		int32_t L_247;
		L_247 = SharedUtils_URShift_m2A309426D3A3C6AD731279C364EE4F139F85A39C(L_246, 1, /*hidden argument*/NULL);
		V_5 = L_247;
	}

IL_044a:
	{
		int32_t L_248 = V_4;
		int32_t L_249 = V_5;
		if (((int32_t)((int32_t)L_248&(int32_t)L_249)))
		{
			goto IL_0439;
		}
	}
	{
		int32_t L_250 = V_4;
		int32_t L_251 = V_5;
		V_4 = ((int32_t)((int32_t)L_250^(int32_t)L_251));
		int32_t L_252 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_252&(int32_t)((int32_t)31))))), (int32_t)1));
		goto IL_0481;
	}

IL_046b:
	{
		int32_t L_253 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_253, (int32_t)1));
		int32_t L_254 = V_11;
		int32_t L_255 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_254, (int32_t)L_255));
		int32_t L_256 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_256&(int32_t)((int32_t)31))))), (int32_t)1));
	}

IL_0481:
	{
		int32_t L_257 = V_4;
		int32_t L_258 = V_8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_259 = __this->get_x_11();
		int32_t L_260 = V_3;
		int32_t L_261 = L_260;
		int32_t L_262 = (L_259)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_261));
		if ((!(((uint32_t)((int32_t)((int32_t)L_257&(int32_t)L_258))) == ((uint32_t)L_262))))
		{
			goto IL_046b;
		}
	}

IL_0493:
	{
		int32_t L_263 = V_0;
		int32_t L_264 = L_263;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_264, (int32_t)1));
		if (L_264)
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_265 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_265, (int32_t)1));
	}

IL_04a3:
	{
		int32_t L_266 = V_6;
		int32_t L_267 = V_2;
		if ((((int32_t)L_266) <= ((int32_t)L_267)))
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_268 = V_13;
		if (!L_268)
		{
			goto IL_04c0;
		}
	}
	{
		int32_t L_269 = V_2;
		if ((((int32_t)L_269) == ((int32_t)1)))
		{
			goto IL_04c0;
		}
	}
	{
		G_B75_0 = ((int32_t)-5);
		goto IL_04c1;
	}

IL_04c0:
	{
		G_B75_0 = 0;
	}

IL_04c1:
	{
		return G_B75_0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_m347A37E60C6252196D29081A7D3B80BEA37617AD (InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bb1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tb2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp3, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___z4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		InfTree_initWorkArea_mD703DCFDF695C52A359B1B4649B8601E59F20EFB(__this, ((int32_t)19), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_hn_6();
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___c0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___tb2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ___bb1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___hp3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_hn_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get_v_7();
		int32_t L_7;
		L_7 = InfTree_huft_build_m0DBB4F24E944FF5E4FA44E6A1342EBA79D9B3086(__this, L_1, 0, ((int32_t)19), ((int32_t)19), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0049;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_9 = ___z4;
		L_9->set_Message_8(_stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4);
		goto IL_0068;
	}

IL_0049:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-5))))
		{
			goto IL_0059;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = ___bb1;
		int32_t L_12 = 0;
		int32_t L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		if (L_13)
		{
			goto IL_0068;
		}
	}

IL_0059:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_14 = ___z4;
		L_14->set_Message_8(_stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94);
		V_0 = ((int32_t)-3);
	}

IL_0068:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m9FBBA434F5E6E7F27F7C4686144D22EC5346B77E (InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bl3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bd4, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl5, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp7, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___z8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		InfTree_initWorkArea_mD703DCFDF695C52A359B1B4649B8601E59F20EFB(__this, ((int32_t)288), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_hn_6();
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___c2;
		int32_t L_2 = ___nl0;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ((InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var))->get_cplens_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ((InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var))->get_cplext_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ___tl5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ___bl3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ___hp7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_hn_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = __this->get_v_7();
		int32_t L_10;
		L_10 = InfTree_huft_build_m0DBB4F24E944FF5E4FA44E6A1342EBA79D9B3086(__this, L_1, 0, L_2, ((int32_t)257), L_3, L_4, L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_004e;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = ___bl3;
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_0080;
		}
	}

IL_004e:
	{
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0067;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_16 = ___z8;
		L_16->set_Message_8(_stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0);
		goto IL_007e;
	}

IL_0067:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-4))))
		{
			goto IL_007e;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_18 = ___z8;
		L_18->set_Message_8(_stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4);
		V_0 = ((int32_t)-3);
	}

IL_007e:
	{
		int32_t L_19 = V_0;
		return L_19;
	}

IL_0080:
	{
		InfTree_initWorkArea_mD703DCFDF695C52A359B1B4649B8601E59F20EFB(__this, ((int32_t)288), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = ___c2;
		int32_t L_21 = ___nl0;
		int32_t L_22 = ___nd1;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = ((InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var))->get_cpdist_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = ((InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var))->get_cpdext_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = ___td6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = ___bd4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = ___hp7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = __this->get_hn_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = __this->get_v_7();
		int32_t L_30;
		L_30 = InfTree_huft_build_m0DBB4F24E944FF5E4FA44E6A1342EBA79D9B3086(__this, L_20, L_21, L_22, 0, L_23, L_24, L_25, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		int32_t L_31 = V_0;
		if (L_31)
		{
			goto IL_00cc;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = ___bd4;
		int32_t L_33 = 0;
		int32_t L_34 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		if (L_34)
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_35 = ___nl0;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)257))))
		{
			goto IL_011a;
		}
	}

IL_00cc:
	{
		int32_t L_36 = V_0;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_00e5;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_37 = ___z8;
		L_37->set_Message_8(_stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE);
		goto IL_0118;
	}

IL_00e5:
	{
		int32_t L_38 = V_0;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_0101;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_39 = ___z8;
		L_39->set_Message_8(_stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C);
		V_0 = ((int32_t)-3);
		goto IL_0118;
	}

IL_0101:
	{
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-4))))
		{
			goto IL_0118;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_41 = ___z8;
		L_41->set_Message_8(_stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6);
		V_0 = ((int32_t)-3);
	}

IL_0118:
	{
		int32_t L_42 = V_0;
		return L_42;
	}

IL_011a:
	{
		return 0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_mB46A6C5BF86A8B98F74ABA786628831D0DBC2786 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bl0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bd1, Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___tl2, Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___td3, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___z4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___bl0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___bd1;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)5);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_2 = ___tl2;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ((InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var))->get_fixed_tl_0();
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_3);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_4 = ___td3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ((InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var))->get_fixed_td_1();
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_5);
		return 0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InfTree::initWorkArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree_initWorkArea_mD703DCFDF695C52A359B1B4649B8601E59F20EFB (InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * __this, int32_t ___vsize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_hn_6();
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_hn_6(L_1);
		int32_t L_2 = ___vsize0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_v_7(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_c_8(L_4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_r_9(L_5);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		__this->set_u_10(L_6);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_x_11(L_7);
		goto IL_00c7;
	}

IL_005b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_v_7();
		int32_t L_9 = ___vsize0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))) >= ((int32_t)L_9)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_10 = ___vsize0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->set_v_7(L_11);
	}

IL_0075:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = __this->get_v_7();
		int32_t L_13 = ___vsize0;
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_12, 0, L_13, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = __this->get_c_8();
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_14, 0, ((int32_t)16), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = __this->get_r_9();
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = __this->get_r_9();
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = __this->get_r_9();
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = __this->get_u_10();
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_18, 0, ((int32_t)15), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = __this->get_x_11();
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_19, 0, ((int32_t)16), /*hidden argument*/NULL);
	}

IL_00c7:
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
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::.ctor(Pathfinding.Ionic.Zlib.ZlibCodec,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks__ctor_mD0CE44F5D81A1F6BC11EA4558017B571FF60F639 (InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * __this, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___codec0, RuntimeObject * ___checkfn1, int32_t ___w2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_bb_6(L_0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_tb_7(L_1);
		InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * L_2 = (InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD *)il2cpp_codegen_object_new(InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD_il2cpp_TypeInfo_var);
		InflateCodes__ctor_mDBA1454A1AB0FC83F0984E74C049DE6E99F54F15(L_2, /*hidden argument*/NULL);
		__this->set_codes_8(L_2);
		InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * L_3 = (InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF *)il2cpp_codegen_object_new(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var);
		InfTree__ctor_m2A77C6807707632B404E072D8E8DB37C5C4EED21(L_3, /*hidden argument*/NULL);
		__this->set_inftree_20(L_3);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_4 = ___codec0;
		__this->set__codec_10(L_4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4320));
		__this->set_hufts_13(L_5);
		int32_t L_6 = ___w2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_window_14(L_7);
		int32_t L_8 = ___w2;
		__this->set_end_15(L_8);
		RuntimeObject * L_9 = ___checkfn1;
		__this->set_checkfn_18(L_9);
		__this->set_mode_1(0);
		uint32_t L_10;
		L_10 = InflateBlocks_Reset_m0004AF627D19ADFC96D2E3B49336BFD200DA8605(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks__cctor_mDFA908850041430D69D13467339957CA6A6F6644 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2DB_7_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tCB7292346C967B6EA43DD5292355484A285496A4____U24fieldU2DB_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_il2cpp_TypeInfo_var))->set_border_0(L_1);
		return;
	}
}
// System.UInt32 Pathfinding.Ionic.Zlib.InflateBlocks::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InflateBlocks_Reset_m0004AF627D19ADFC96D2E3B49336BFD200DA8605 (InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		uint32_t L_0 = __this->get_check_19();
		V_0 = L_0;
		__this->set_mode_1(0);
		__this->set_bitk_11(0);
		__this->set_bitb_12(0);
		int32_t L_1 = 0;
		V_1 = L_1;
		__this->set_writeAt_17(L_1);
		int32_t L_2 = V_1;
		__this->set_readAt_16(L_2);
		RuntimeObject * L_3 = __this->get_checkfn_18();
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_4 = __this->get__codec_10();
		IL2CPP_RUNTIME_CLASS_INIT(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = Adler_Adler32_m153E4796B41C8C0F63E6A07CD399E82C1B6590C5(0, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, 0, 0, /*hidden argument*/NULL);
		uint32_t L_6 = L_5;
		V_2 = L_6;
		__this->set_check_19(L_6);
		uint32_t L_7 = V_2;
		L_4->set__Adler32_11(L_7);
	}

IL_0054:
	{
		uint32_t L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::Process(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Process_m64CF9B43E2600B7E5FC18DE3A9EA4FF4DD517E42 (InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * __this, int32_t ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_9 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_10 = NULL;
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* V_11 = NULL;
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_17 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_18 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_19 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_20 = NULL;
	int32_t G_B3_0 = 0;
	InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * G_B29_0 = NULL;
	InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * G_B28_0 = NULL;
	int32_t G_B32_0 = 0;
	InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * G_B32_1 = NULL;
	InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * G_B31_0 = NULL;
	InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * G_B30_0 = NULL;
	int32_t G_B41_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B51_0 = 0;
	InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * G_B62_0 = NULL;
	InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * G_B61_0 = NULL;
	int32_t G_B63_0 = 0;
	InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * G_B63_1 = NULL;
	int32_t G_B108_0 = 0;
	int32_t G_B111_0 = 0;
	int32_t G_B124_0 = 0;
	int32_t G_B138_0 = 0;
	int32_t G_B144_0 = 0;
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_0 = __this->get__codec_10();
		int32_t L_1 = L_0->get_NextIn_1();
		V_3 = L_1;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_2 = __this->get__codec_10();
		int32_t L_3 = L_2->get_AvailableBytesIn_2();
		V_4 = L_3;
		int32_t L_4 = __this->get_bitb_12();
		V_1 = L_4;
		int32_t L_5 = __this->get_bitk_11();
		V_2 = L_5;
		int32_t L_6 = __this->get_writeAt_17();
		V_5 = L_6;
		int32_t L_7 = V_5;
		int32_t L_8 = __this->get_readAt_16();
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_9 = __this->get_readAt_16();
		int32_t L_10 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10)), (int32_t)1));
		goto IL_0055;
	}

IL_004c:
	{
		int32_t L_11 = __this->get_end_15();
		int32_t L_12 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12));
	}

IL_0055:
	{
		V_6 = G_B3_0;
	}

IL_0057:
	{
		int32_t L_13 = __this->get_mode_1();
		V_7 = L_13;
		int32_t L_14 = V_7;
		switch (L_14)
		{
			case 0:
			{
				goto IL_0093;
			}
			case 1:
			{
				goto IL_0278;
			}
			case 2:
			{
				goto IL_03dd;
			}
			case 3:
			{
				goto IL_05f8;
			}
			case 4:
			{
				goto IL_0794;
			}
			case 5:
			{
				goto IL_0965;
			}
			case 6:
			{
				goto IL_0da6;
			}
			case 7:
			{
				goto IL_0e90;
			}
			case 8:
			{
				goto IL_0f45;
			}
			case 9:
			{
				goto IL_0f9f;
			}
		}
	}
	{
		goto IL_0ffa;
	}

IL_0093:
	{
		goto IL_0127;
	}

IL_0098:
	{
		int32_t L_15 = V_4;
		if (!L_15)
		{
			goto IL_00a7;
		}
	}
	{
		___r0 = 0;
		goto IL_00fe;
	}

IL_00a7:
	{
		int32_t L_16 = V_1;
		__this->set_bitb_12(L_16);
		int32_t L_17 = V_2;
		__this->set_bitk_11(L_17);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_18 = __this->get__codec_10();
		int32_t L_19 = V_4;
		L_18->set_AvailableBytesIn_2(L_19);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_20 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_21 = L_20;
		int64_t L_22 = L_21->get_TotalBytesIn_3();
		int32_t L_23 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_24 = __this->get__codec_10();
		int32_t L_25 = L_24->get_NextIn_1();
		L_21->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_25)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_26 = __this->get__codec_10();
		int32_t L_27 = V_3;
		L_26->set_NextIn_1(L_27);
		int32_t L_28 = V_5;
		__this->set_writeAt_17(L_28);
		int32_t L_29 = ___r0;
		int32_t L_30;
		L_30 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_00fe:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
		int32_t L_32 = V_1;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_33 = __this->get__codec_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = L_33->get_InputBuffer_0();
		int32_t L_35 = V_3;
		int32_t L_36 = L_35;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = V_2;
		V_1 = ((int32_t)((int32_t)L_32|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_38&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)31)))))));
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)8));
	}

IL_0127:
	{
		int32_t L_41 = V_2;
		if ((((int32_t)L_41) < ((int32_t)3)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_42 = V_1;
		V_0 = ((int32_t)((int32_t)L_42&(int32_t)7));
		int32_t L_43 = V_0;
		__this->set_last_9(((int32_t)((int32_t)L_43&(int32_t)1)));
		int32_t L_44 = V_0;
		V_8 = ((int32_t)((uint32_t)L_44>>1));
		uint32_t L_45 = V_8;
		switch (L_45)
		{
			case 0:
			{
				goto IL_015c;
			}
			case 1:
			{
				goto IL_017f;
			}
			case 2:
			{
				goto IL_01e4;
			}
			case 3:
			{
				goto IL_01f8;
			}
		}
	}
	{
		goto IL_0273;
	}

IL_015c:
	{
		int32_t L_46 = V_1;
		V_1 = ((int32_t)((int32_t)L_46>>(int32_t)3));
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)3));
		int32_t L_48 = V_2;
		V_0 = ((int32_t)((int32_t)L_48&(int32_t)7));
		int32_t L_49 = V_1;
		int32_t L_50 = V_0;
		V_1 = ((int32_t)((int32_t)L_49>>(int32_t)((int32_t)((int32_t)L_50&(int32_t)((int32_t)31)))));
		int32_t L_51 = V_2;
		int32_t L_52 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)L_52));
		__this->set_mode_1(1);
		goto IL_0273;
	}

IL_017f:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_9 = L_53;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_54 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_10 = L_54;
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_55 = (Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)SZArrayNew(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var, (uint32_t)1);
		V_11 = L_55;
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_56 = (Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)SZArrayNew(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var, (uint32_t)1);
		V_12 = L_56;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = V_9;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_58 = V_10;
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_59 = V_11;
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_60 = V_12;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_61 = __this->get__codec_10();
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF_il2cpp_TypeInfo_var);
		int32_t L_62;
		L_62 = InfTree_inflate_trees_fixed_mB46A6C5BF86A8B98F74ABA786628831D0DBC2786(L_57, L_58, L_59, L_60, L_61, /*hidden argument*/NULL);
		InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * L_63 = __this->get_codes_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = V_9;
		int32_t L_65 = 0;
		int32_t L_66 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = V_10;
		int32_t L_68 = 0;
		int32_t L_69 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_70 = V_11;
		int32_t L_71 = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_72 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_73 = V_12;
		int32_t L_74 = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_75 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		InflateCodes_Init_m430E7A20BB8578131F8BB656985D674F60B3CBAA(L_63, L_66, L_69, L_72, 0, L_75, 0, /*hidden argument*/NULL);
		int32_t L_76 = V_1;
		V_1 = ((int32_t)((int32_t)L_76>>(int32_t)3));
		int32_t L_77 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)3));
		__this->set_mode_1(6);
		goto IL_0273;
	}

IL_01e4:
	{
		int32_t L_78 = V_1;
		V_1 = ((int32_t)((int32_t)L_78>>(int32_t)3));
		int32_t L_79 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)3));
		__this->set_mode_1(3);
		goto IL_0273;
	}

IL_01f8:
	{
		int32_t L_80 = V_1;
		V_1 = ((int32_t)((int32_t)L_80>>(int32_t)3));
		int32_t L_81 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)3));
		__this->set_mode_1(((int32_t)9));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_82 = __this->get__codec_10();
		L_82->set_Message_8(_stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06);
		___r0 = ((int32_t)-3);
		int32_t L_83 = V_1;
		__this->set_bitb_12(L_83);
		int32_t L_84 = V_2;
		__this->set_bitk_11(L_84);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_85 = __this->get__codec_10();
		int32_t L_86 = V_4;
		L_85->set_AvailableBytesIn_2(L_86);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_87 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_88 = L_87;
		int64_t L_89 = L_88->get_TotalBytesIn_3();
		int32_t L_90 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_91 = __this->get__codec_10();
		int32_t L_92 = L_91->get_NextIn_1();
		L_88->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_89, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)L_92)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_93 = __this->get__codec_10();
		int32_t L_94 = V_3;
		L_93->set_NextIn_1(L_94);
		int32_t L_95 = V_5;
		__this->set_writeAt_17(L_95);
		int32_t L_96 = ___r0;
		int32_t L_97;
		L_97 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_96, /*hidden argument*/NULL);
		return L_97;
	}

IL_0273:
	{
		goto IL_1055;
	}

IL_0278:
	{
		goto IL_030c;
	}

IL_027d:
	{
		int32_t L_98 = V_4;
		if (!L_98)
		{
			goto IL_028c;
		}
	}
	{
		___r0 = 0;
		goto IL_02e3;
	}

IL_028c:
	{
		int32_t L_99 = V_1;
		__this->set_bitb_12(L_99);
		int32_t L_100 = V_2;
		__this->set_bitk_11(L_100);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_101 = __this->get__codec_10();
		int32_t L_102 = V_4;
		L_101->set_AvailableBytesIn_2(L_102);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_103 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_104 = L_103;
		int64_t L_105 = L_104->get_TotalBytesIn_3();
		int32_t L_106 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_107 = __this->get__codec_10();
		int32_t L_108 = L_107->get_NextIn_1();
		L_104->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_105, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)L_108)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_109 = __this->get__codec_10();
		int32_t L_110 = V_3;
		L_109->set_NextIn_1(L_110);
		int32_t L_111 = V_5;
		__this->set_writeAt_17(L_111);
		int32_t L_112 = ___r0;
		int32_t L_113;
		L_113 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_112, /*hidden argument*/NULL);
		return L_113;
	}

IL_02e3:
	{
		int32_t L_114 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_114, (int32_t)1));
		int32_t L_115 = V_1;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_116 = __this->get__codec_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_117 = L_116->get_InputBuffer_0();
		int32_t L_118 = V_3;
		int32_t L_119 = L_118;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1));
		int32_t L_120 = L_119;
		uint8_t L_121 = (L_117)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_120));
		int32_t L_122 = V_2;
		V_1 = ((int32_t)((int32_t)L_115|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_121&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_122&(int32_t)((int32_t)31)))))));
		int32_t L_123 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)8));
	}

IL_030c:
	{
		int32_t L_124 = V_2;
		if ((((int32_t)L_124) < ((int32_t)((int32_t)32))))
		{
			goto IL_027d;
		}
	}
	{
		int32_t L_125 = V_1;
		int32_t L_126 = V_1;
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((~L_125))>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)65535)))) == ((int32_t)((int32_t)((int32_t)L_126&(int32_t)((int32_t)65535))))))
		{
			goto IL_039e;
		}
	}
	{
		__this->set_mode_1(((int32_t)9));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_127 = __this->get__codec_10();
		L_127->set_Message_8(_stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113);
		___r0 = ((int32_t)-3);
		int32_t L_128 = V_1;
		__this->set_bitb_12(L_128);
		int32_t L_129 = V_2;
		__this->set_bitk_11(L_129);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_130 = __this->get__codec_10();
		int32_t L_131 = V_4;
		L_130->set_AvailableBytesIn_2(L_131);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_132 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_133 = L_132;
		int64_t L_134 = L_133->get_TotalBytesIn_3();
		int32_t L_135 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_136 = __this->get__codec_10();
		int32_t L_137 = L_136->get_NextIn_1();
		L_133->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_134, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_135, (int32_t)L_137)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_138 = __this->get__codec_10();
		int32_t L_139 = V_3;
		L_138->set_NextIn_1(L_139);
		int32_t L_140 = V_5;
		__this->set_writeAt_17(L_140);
		int32_t L_141 = ___r0;
		int32_t L_142;
		L_142 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_141, /*hidden argument*/NULL);
		return L_142;
	}

IL_039e:
	{
		int32_t L_143 = V_1;
		__this->set_left_2(((int32_t)((int32_t)L_143&(int32_t)((int32_t)65535))));
		int32_t L_144 = 0;
		V_2 = L_144;
		V_1 = L_144;
		int32_t L_145 = __this->get_left_2();
		G_B28_0 = __this;
		if (!L_145)
		{
			G_B29_0 = __this;
			goto IL_03c1;
		}
	}
	{
		G_B32_0 = 2;
		G_B32_1 = G_B28_0;
		goto IL_03d3;
	}

IL_03c1:
	{
		int32_t L_146 = __this->get_last_9();
		G_B30_0 = G_B29_0;
		if (!L_146)
		{
			G_B31_0 = G_B29_0;
			goto IL_03d2;
		}
	}
	{
		G_B32_0 = 7;
		G_B32_1 = G_B30_0;
		goto IL_03d3;
	}

IL_03d2:
	{
		G_B32_0 = 0;
		G_B32_1 = G_B31_0;
	}

IL_03d3:
	{
		G_B32_1->set_mode_1(G_B32_0);
		goto IL_1055;
	}

IL_03dd:
	{
		int32_t L_147 = V_4;
		if (L_147)
		{
			goto IL_043b;
		}
	}
	{
		int32_t L_148 = V_1;
		__this->set_bitb_12(L_148);
		int32_t L_149 = V_2;
		__this->set_bitk_11(L_149);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_150 = __this->get__codec_10();
		int32_t L_151 = V_4;
		L_150->set_AvailableBytesIn_2(L_151);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_152 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_153 = L_152;
		int64_t L_154 = L_153->get_TotalBytesIn_3();
		int32_t L_155 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_156 = __this->get__codec_10();
		int32_t L_157 = L_156->get_NextIn_1();
		L_153->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_154, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_155, (int32_t)L_157)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_158 = __this->get__codec_10();
		int32_t L_159 = V_3;
		L_158->set_NextIn_1(L_159);
		int32_t L_160 = V_5;
		__this->set_writeAt_17(L_160);
		int32_t L_161 = ___r0;
		int32_t L_162;
		L_162 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_161, /*hidden argument*/NULL);
		return L_162;
	}

IL_043b:
	{
		int32_t L_163 = V_6;
		if (L_163)
		{
			goto IL_056e;
		}
	}
	{
		int32_t L_164 = V_5;
		int32_t L_165 = __this->get_end_15();
		if ((!(((uint32_t)L_164) == ((uint32_t)L_165))))
		{
			goto IL_0485;
		}
	}
	{
		int32_t L_166 = __this->get_readAt_16();
		if (!L_166)
		{
			goto IL_0485;
		}
	}
	{
		V_5 = 0;
		int32_t L_167 = V_5;
		int32_t L_168 = __this->get_readAt_16();
		if ((((int32_t)L_167) >= ((int32_t)L_168)))
		{
			goto IL_047a;
		}
	}
	{
		int32_t L_169 = __this->get_readAt_16();
		int32_t L_170 = V_5;
		G_B41_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_169, (int32_t)L_170)), (int32_t)1));
		goto IL_0483;
	}

IL_047a:
	{
		int32_t L_171 = __this->get_end_15();
		int32_t L_172 = V_5;
		G_B41_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_171, (int32_t)L_172));
	}

IL_0483:
	{
		V_6 = G_B41_0;
	}

IL_0485:
	{
		int32_t L_173 = V_6;
		if (L_173)
		{
			goto IL_056e;
		}
	}
	{
		int32_t L_174 = V_5;
		__this->set_writeAt_17(L_174);
		int32_t L_175 = ___r0;
		int32_t L_176;
		L_176 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_175, /*hidden argument*/NULL);
		___r0 = L_176;
		int32_t L_177 = __this->get_writeAt_17();
		V_5 = L_177;
		int32_t L_178 = V_5;
		int32_t L_179 = __this->get_readAt_16();
		if ((((int32_t)L_178) >= ((int32_t)L_179)))
		{
			goto IL_04c2;
		}
	}
	{
		int32_t L_180 = __this->get_readAt_16();
		int32_t L_181 = V_5;
		G_B46_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_180, (int32_t)L_181)), (int32_t)1));
		goto IL_04cb;
	}

IL_04c2:
	{
		int32_t L_182 = __this->get_end_15();
		int32_t L_183 = V_5;
		G_B46_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_182, (int32_t)L_183));
	}

IL_04cb:
	{
		V_6 = G_B46_0;
		int32_t L_184 = V_5;
		int32_t L_185 = __this->get_end_15();
		if ((!(((uint32_t)L_184) == ((uint32_t)L_185))))
		{
			goto IL_0510;
		}
	}
	{
		int32_t L_186 = __this->get_readAt_16();
		if (!L_186)
		{
			goto IL_0510;
		}
	}
	{
		V_5 = 0;
		int32_t L_187 = V_5;
		int32_t L_188 = __this->get_readAt_16();
		if ((((int32_t)L_187) >= ((int32_t)L_188)))
		{
			goto IL_0505;
		}
	}
	{
		int32_t L_189 = __this->get_readAt_16();
		int32_t L_190 = V_5;
		G_B51_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_189, (int32_t)L_190)), (int32_t)1));
		goto IL_050e;
	}

IL_0505:
	{
		int32_t L_191 = __this->get_end_15();
		int32_t L_192 = V_5;
		G_B51_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_191, (int32_t)L_192));
	}

IL_050e:
	{
		V_6 = G_B51_0;
	}

IL_0510:
	{
		int32_t L_193 = V_6;
		if (L_193)
		{
			goto IL_056e;
		}
	}
	{
		int32_t L_194 = V_1;
		__this->set_bitb_12(L_194);
		int32_t L_195 = V_2;
		__this->set_bitk_11(L_195);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_196 = __this->get__codec_10();
		int32_t L_197 = V_4;
		L_196->set_AvailableBytesIn_2(L_197);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_198 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_199 = L_198;
		int64_t L_200 = L_199->get_TotalBytesIn_3();
		int32_t L_201 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_202 = __this->get__codec_10();
		int32_t L_203 = L_202->get_NextIn_1();
		L_199->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_200, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_201, (int32_t)L_203)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_204 = __this->get__codec_10();
		int32_t L_205 = V_3;
		L_204->set_NextIn_1(L_205);
		int32_t L_206 = V_5;
		__this->set_writeAt_17(L_206);
		int32_t L_207 = ___r0;
		int32_t L_208;
		L_208 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_207, /*hidden argument*/NULL);
		return L_208;
	}

IL_056e:
	{
		___r0 = 0;
		int32_t L_209 = __this->get_left_2();
		V_0 = L_209;
		int32_t L_210 = V_0;
		int32_t L_211 = V_4;
		if ((((int32_t)L_210) <= ((int32_t)L_211)))
		{
			goto IL_0583;
		}
	}
	{
		int32_t L_212 = V_4;
		V_0 = L_212;
	}

IL_0583:
	{
		int32_t L_213 = V_0;
		int32_t L_214 = V_6;
		if ((((int32_t)L_213) <= ((int32_t)L_214)))
		{
			goto IL_058e;
		}
	}
	{
		int32_t L_215 = V_6;
		V_0 = L_215;
	}

IL_058e:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_216 = __this->get__codec_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_217 = L_216->get_InputBuffer_0();
		int32_t L_218 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_219 = __this->get_window_14();
		int32_t L_220 = V_5;
		int32_t L_221 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_217, L_218, (RuntimeArray *)(RuntimeArray *)L_219, L_220, L_221, /*hidden argument*/NULL);
		int32_t L_222 = V_3;
		int32_t L_223 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_222, (int32_t)L_223));
		int32_t L_224 = V_4;
		int32_t L_225 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_224, (int32_t)L_225));
		int32_t L_226 = V_5;
		int32_t L_227 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_226, (int32_t)L_227));
		int32_t L_228 = V_6;
		int32_t L_229 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_228, (int32_t)L_229));
		int32_t L_230 = __this->get_left_2();
		int32_t L_231 = V_0;
		int32_t L_232 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_230, (int32_t)L_231));
		V_13 = L_232;
		__this->set_left_2(L_232);
		int32_t L_233 = V_13;
		if (!L_233)
		{
			goto IL_05db;
		}
	}
	{
		goto IL_1055;
	}

IL_05db:
	{
		int32_t L_234 = __this->get_last_9();
		G_B61_0 = __this;
		if (!L_234)
		{
			G_B62_0 = __this;
			goto IL_05ed;
		}
	}
	{
		G_B63_0 = 7;
		G_B63_1 = G_B61_0;
		goto IL_05ee;
	}

IL_05ed:
	{
		G_B63_0 = 0;
		G_B63_1 = G_B62_0;
	}

IL_05ee:
	{
		G_B63_1->set_mode_1(G_B63_0);
		goto IL_1055;
	}

IL_05f8:
	{
		goto IL_068c;
	}

IL_05fd:
	{
		int32_t L_235 = V_4;
		if (!L_235)
		{
			goto IL_060c;
		}
	}
	{
		___r0 = 0;
		goto IL_0663;
	}

IL_060c:
	{
		int32_t L_236 = V_1;
		__this->set_bitb_12(L_236);
		int32_t L_237 = V_2;
		__this->set_bitk_11(L_237);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_238 = __this->get__codec_10();
		int32_t L_239 = V_4;
		L_238->set_AvailableBytesIn_2(L_239);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_240 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_241 = L_240;
		int64_t L_242 = L_241->get_TotalBytesIn_3();
		int32_t L_243 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_244 = __this->get__codec_10();
		int32_t L_245 = L_244->get_NextIn_1();
		L_241->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_242, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_243, (int32_t)L_245)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_246 = __this->get__codec_10();
		int32_t L_247 = V_3;
		L_246->set_NextIn_1(L_247);
		int32_t L_248 = V_5;
		__this->set_writeAt_17(L_248);
		int32_t L_249 = ___r0;
		int32_t L_250;
		L_250 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_249, /*hidden argument*/NULL);
		return L_250;
	}

IL_0663:
	{
		int32_t L_251 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_251, (int32_t)1));
		int32_t L_252 = V_1;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_253 = __this->get__codec_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_254 = L_253->get_InputBuffer_0();
		int32_t L_255 = V_3;
		int32_t L_256 = L_255;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_256, (int32_t)1));
		int32_t L_257 = L_256;
		uint8_t L_258 = (L_254)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_257));
		int32_t L_259 = V_2;
		V_1 = ((int32_t)((int32_t)L_252|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_258&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_259&(int32_t)((int32_t)31)))))));
		int32_t L_260 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_260, (int32_t)8));
	}

IL_068c:
	{
		int32_t L_261 = V_2;
		if ((((int32_t)L_261) < ((int32_t)((int32_t)14))))
		{
			goto IL_05fd;
		}
	}
	{
		int32_t L_262 = V_1;
		int32_t L_263 = ((int32_t)((int32_t)L_262&(int32_t)((int32_t)16383)));
		V_0 = L_263;
		__this->set_table_3(L_263);
		int32_t L_264 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_264&(int32_t)((int32_t)31)))) > ((int32_t)((int32_t)29))))
		{
			goto IL_06bb;
		}
	}
	{
		int32_t L_265 = V_0;
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_265>>(int32_t)5))&(int32_t)((int32_t)31)))) <= ((int32_t)((int32_t)29))))
		{
			goto IL_072e;
		}
	}

IL_06bb:
	{
		__this->set_mode_1(((int32_t)9));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_266 = __this->get__codec_10();
		L_266->set_Message_8(_stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43);
		___r0 = ((int32_t)-3);
		int32_t L_267 = V_1;
		__this->set_bitb_12(L_267);
		int32_t L_268 = V_2;
		__this->set_bitk_11(L_268);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_269 = __this->get__codec_10();
		int32_t L_270 = V_4;
		L_269->set_AvailableBytesIn_2(L_270);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_271 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_272 = L_271;
		int64_t L_273 = L_272->get_TotalBytesIn_3();
		int32_t L_274 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_275 = __this->get__codec_10();
		int32_t L_276 = L_275->get_NextIn_1();
		L_272->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_273, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_274, (int32_t)L_276)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_277 = __this->get__codec_10();
		int32_t L_278 = V_3;
		L_277->set_NextIn_1(L_278);
		int32_t L_279 = V_5;
		__this->set_writeAt_17(L_279);
		int32_t L_280 = ___r0;
		int32_t L_281;
		L_281 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_280, /*hidden argument*/NULL);
		return L_281;
	}

IL_072e:
	{
		int32_t L_282 = V_0;
		int32_t L_283 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)258), (int32_t)((int32_t)((int32_t)L_282&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_283>>(int32_t)5))&(int32_t)((int32_t)31)))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_284 = __this->get_blens_5();
		if (!L_284)
		{
			goto IL_0759;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_285 = __this->get_blens_5();
		int32_t L_286 = V_0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_285)->max_length)))) >= ((int32_t)L_286)))
		{
			goto IL_076a;
		}
	}

IL_0759:
	{
		int32_t L_287 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_288 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_287);
		__this->set_blens_5(L_288);
		goto IL_0777;
	}

IL_076a:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_289 = __this->get_blens_5();
		int32_t L_290 = V_0;
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_289, 0, L_290, /*hidden argument*/NULL);
	}

IL_0777:
	{
		int32_t L_291 = V_1;
		V_1 = ((int32_t)((int32_t)L_291>>(int32_t)((int32_t)14)));
		int32_t L_292 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_292, (int32_t)((int32_t)14)));
		__this->set_index_4(0);
		__this->set_mode_1(4);
		goto IL_0794;
	}

IL_0794:
	{
		goto IL_085f;
	}

IL_0799:
	{
		goto IL_082d;
	}

IL_079e:
	{
		int32_t L_293 = V_4;
		if (!L_293)
		{
			goto IL_07ad;
		}
	}
	{
		___r0 = 0;
		goto IL_0804;
	}

IL_07ad:
	{
		int32_t L_294 = V_1;
		__this->set_bitb_12(L_294);
		int32_t L_295 = V_2;
		__this->set_bitk_11(L_295);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_296 = __this->get__codec_10();
		int32_t L_297 = V_4;
		L_296->set_AvailableBytesIn_2(L_297);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_298 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_299 = L_298;
		int64_t L_300 = L_299->get_TotalBytesIn_3();
		int32_t L_301 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_302 = __this->get__codec_10();
		int32_t L_303 = L_302->get_NextIn_1();
		L_299->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_300, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_301, (int32_t)L_303)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_304 = __this->get__codec_10();
		int32_t L_305 = V_3;
		L_304->set_NextIn_1(L_305);
		int32_t L_306 = V_5;
		__this->set_writeAt_17(L_306);
		int32_t L_307 = ___r0;
		int32_t L_308;
		L_308 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_307, /*hidden argument*/NULL);
		return L_308;
	}

IL_0804:
	{
		int32_t L_309 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_309, (int32_t)1));
		int32_t L_310 = V_1;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_311 = __this->get__codec_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_312 = L_311->get_InputBuffer_0();
		int32_t L_313 = V_3;
		int32_t L_314 = L_313;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_314, (int32_t)1));
		int32_t L_315 = L_314;
		uint8_t L_316 = (L_312)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_315));
		int32_t L_317 = V_2;
		V_1 = ((int32_t)((int32_t)L_310|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_316&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_317&(int32_t)((int32_t)31)))))));
		int32_t L_318 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_318, (int32_t)8));
	}

IL_082d:
	{
		int32_t L_319 = V_2;
		if ((((int32_t)L_319) < ((int32_t)3)))
		{
			goto IL_079e;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_320 = __this->get_blens_5();
		IL2CPP_RUNTIME_CLASS_INIT(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_321 = ((InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_il2cpp_TypeInfo_var))->get_border_0();
		int32_t L_322 = __this->get_index_4();
		int32_t L_323 = L_322;
		V_13 = L_323;
		__this->set_index_4(((int32_t)il2cpp_codegen_add((int32_t)L_323, (int32_t)1)));
		int32_t L_324 = V_13;
		int32_t L_325 = L_324;
		int32_t L_326 = (L_321)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = V_1;
		(L_320)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_326), (int32_t)((int32_t)((int32_t)L_327&(int32_t)7)));
		int32_t L_328 = V_1;
		V_1 = ((int32_t)((int32_t)L_328>>(int32_t)3));
		int32_t L_329 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_329, (int32_t)3));
	}

IL_085f:
	{
		int32_t L_330 = __this->get_index_4();
		int32_t L_331 = __this->get_table_3();
		if ((((int32_t)L_330) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)((int32_t)((int32_t)L_331>>(int32_t)((int32_t)10))))))))
		{
			goto IL_0799;
		}
	}
	{
		goto IL_089b;
	}

IL_087a:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_332 = __this->get_blens_5();
		IL2CPP_RUNTIME_CLASS_INIT(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_333 = ((InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_il2cpp_TypeInfo_var))->get_border_0();
		int32_t L_334 = __this->get_index_4();
		int32_t L_335 = L_334;
		V_13 = L_335;
		__this->set_index_4(((int32_t)il2cpp_codegen_add((int32_t)L_335, (int32_t)1)));
		int32_t L_336 = V_13;
		int32_t L_337 = L_336;
		int32_t L_338 = (L_333)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_337));
		(L_332)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_338), (int32_t)0);
	}

IL_089b:
	{
		int32_t L_339 = __this->get_index_4();
		if ((((int32_t)L_339) < ((int32_t)((int32_t)19))))
		{
			goto IL_087a;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_340 = __this->get_bb_6();
		(L_340)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)7);
		InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * L_341 = __this->get_inftree_20();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_342 = __this->get_blens_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_343 = __this->get_bb_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_344 = __this->get_tb_7();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_345 = __this->get_hufts_13();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_346 = __this->get__codec_10();
		int32_t L_347;
		L_347 = InfTree_inflate_trees_bits_m347A37E60C6252196D29081A7D3B80BEA37617AD(L_341, L_342, L_343, L_344, L_345, L_346, /*hidden argument*/NULL);
		V_0 = L_347;
		int32_t L_348 = V_0;
		if (!L_348)
		{
			goto IL_0952;
		}
	}
	{
		int32_t L_349 = V_0;
		___r0 = L_349;
		int32_t L_350 = ___r0;
		if ((!(((uint32_t)L_350) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_08fb;
		}
	}
	{
		__this->set_blens_5((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		__this->set_mode_1(((int32_t)9));
	}

IL_08fb:
	{
		int32_t L_351 = V_1;
		__this->set_bitb_12(L_351);
		int32_t L_352 = V_2;
		__this->set_bitk_11(L_352);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_353 = __this->get__codec_10();
		int32_t L_354 = V_4;
		L_353->set_AvailableBytesIn_2(L_354);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_355 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_356 = L_355;
		int64_t L_357 = L_356->get_TotalBytesIn_3();
		int32_t L_358 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_359 = __this->get__codec_10();
		int32_t L_360 = L_359->get_NextIn_1();
		L_356->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_357, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_358, (int32_t)L_360)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_361 = __this->get__codec_10();
		int32_t L_362 = V_3;
		L_361->set_NextIn_1(L_362);
		int32_t L_363 = V_5;
		__this->set_writeAt_17(L_363);
		int32_t L_364 = ___r0;
		int32_t L_365;
		L_365 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_364, /*hidden argument*/NULL);
		return L_365;
	}

IL_0952:
	{
		__this->set_index_4(0);
		__this->set_mode_1(5);
		goto IL_0965;
	}

IL_0965:
	{
		int32_t L_366 = __this->get_table_3();
		V_0 = L_366;
		int32_t L_367 = __this->get_index_4();
		int32_t L_368 = V_0;
		int32_t L_369 = V_0;
		if ((((int32_t)L_367) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)258), (int32_t)((int32_t)((int32_t)L_368&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_369>>(int32_t)5))&(int32_t)((int32_t)31))))))))
		{
			goto IL_098d;
		}
	}
	{
		goto IL_0c8b;
	}

IL_098d:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_370 = __this->get_bb_6();
		int32_t L_371 = 0;
		int32_t L_372 = (L_370)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_371));
		V_0 = L_372;
		goto IL_0a2a;
	}

IL_099b:
	{
		int32_t L_373 = V_4;
		if (!L_373)
		{
			goto IL_09aa;
		}
	}
	{
		___r0 = 0;
		goto IL_0a01;
	}

IL_09aa:
	{
		int32_t L_374 = V_1;
		__this->set_bitb_12(L_374);
		int32_t L_375 = V_2;
		__this->set_bitk_11(L_375);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_376 = __this->get__codec_10();
		int32_t L_377 = V_4;
		L_376->set_AvailableBytesIn_2(L_377);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_378 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_379 = L_378;
		int64_t L_380 = L_379->get_TotalBytesIn_3();
		int32_t L_381 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_382 = __this->get__codec_10();
		int32_t L_383 = L_382->get_NextIn_1();
		L_379->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_380, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_381, (int32_t)L_383)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_384 = __this->get__codec_10();
		int32_t L_385 = V_3;
		L_384->set_NextIn_1(L_385);
		int32_t L_386 = V_5;
		__this->set_writeAt_17(L_386);
		int32_t L_387 = ___r0;
		int32_t L_388;
		L_388 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_387, /*hidden argument*/NULL);
		return L_388;
	}

IL_0a01:
	{
		int32_t L_389 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_389, (int32_t)1));
		int32_t L_390 = V_1;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_391 = __this->get__codec_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_392 = L_391->get_InputBuffer_0();
		int32_t L_393 = V_3;
		int32_t L_394 = L_393;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_394, (int32_t)1));
		int32_t L_395 = L_394;
		uint8_t L_396 = (L_392)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_395));
		int32_t L_397 = V_2;
		V_1 = ((int32_t)((int32_t)L_390|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_396&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_397&(int32_t)((int32_t)31)))))));
		int32_t L_398 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_398, (int32_t)8));
	}

IL_0a2a:
	{
		int32_t L_399 = V_2;
		int32_t L_400 = V_0;
		if ((((int32_t)L_399) < ((int32_t)L_400)))
		{
			goto IL_099b;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_401 = __this->get_hufts_13();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_402 = __this->get_tb_7();
		int32_t L_403 = 0;
		int32_t L_404 = (L_402)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_403));
		int32_t L_405 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_406 = ((InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_407 = V_0;
		int32_t L_408 = L_407;
		int32_t L_409 = (L_406)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_408));
		int32_t L_410 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_404, (int32_t)((int32_t)((int32_t)L_405&(int32_t)L_409)))), (int32_t)3)), (int32_t)1));
		int32_t L_411 = (L_401)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_410));
		V_0 = L_411;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_412 = __this->get_hufts_13();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_413 = __this->get_tb_7();
		int32_t L_414 = 0;
		int32_t L_415 = (L_413)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_414));
		int32_t L_416 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_417 = ((InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_418 = V_0;
		int32_t L_419 = L_418;
		int32_t L_420 = (L_417)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_419));
		int32_t L_421 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_415, (int32_t)((int32_t)((int32_t)L_416&(int32_t)L_420)))), (int32_t)3)), (int32_t)2));
		int32_t L_422 = (L_412)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_421));
		V_16 = L_422;
		int32_t L_423 = V_16;
		if ((((int32_t)L_423) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0aa3;
		}
	}
	{
		int32_t L_424 = V_1;
		int32_t L_425 = V_0;
		V_1 = ((int32_t)((int32_t)L_424>>(int32_t)((int32_t)((int32_t)L_425&(int32_t)((int32_t)31)))));
		int32_t L_426 = V_2;
		int32_t L_427 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_426, (int32_t)L_427));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_428 = __this->get_blens_5();
		int32_t L_429 = __this->get_index_4();
		int32_t L_430 = L_429;
		V_13 = L_430;
		__this->set_index_4(((int32_t)il2cpp_codegen_add((int32_t)L_430, (int32_t)1)));
		int32_t L_431 = V_13;
		int32_t L_432 = V_16;
		(L_428)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_431), (int32_t)L_432);
		goto IL_0c86;
	}

IL_0aa3:
	{
		int32_t L_433 = V_16;
		if ((!(((uint32_t)L_433) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0ab2;
		}
	}
	{
		G_B108_0 = 7;
		goto IL_0ab7;
	}

IL_0ab2:
	{
		int32_t L_434 = V_16;
		G_B108_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_434, (int32_t)((int32_t)14)));
	}

IL_0ab7:
	{
		V_14 = G_B108_0;
		int32_t L_435 = V_16;
		if ((!(((uint32_t)L_435) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0ac9;
		}
	}
	{
		G_B111_0 = ((int32_t)11);
		goto IL_0aca;
	}

IL_0ac9:
	{
		G_B111_0 = 3;
	}

IL_0aca:
	{
		V_15 = G_B111_0;
		goto IL_0b60;
	}

IL_0ad1:
	{
		int32_t L_436 = V_4;
		if (!L_436)
		{
			goto IL_0ae0;
		}
	}
	{
		___r0 = 0;
		goto IL_0b37;
	}

IL_0ae0:
	{
		int32_t L_437 = V_1;
		__this->set_bitb_12(L_437);
		int32_t L_438 = V_2;
		__this->set_bitk_11(L_438);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_439 = __this->get__codec_10();
		int32_t L_440 = V_4;
		L_439->set_AvailableBytesIn_2(L_440);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_441 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_442 = L_441;
		int64_t L_443 = L_442->get_TotalBytesIn_3();
		int32_t L_444 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_445 = __this->get__codec_10();
		int32_t L_446 = L_445->get_NextIn_1();
		L_442->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_443, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_444, (int32_t)L_446)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_447 = __this->get__codec_10();
		int32_t L_448 = V_3;
		L_447->set_NextIn_1(L_448);
		int32_t L_449 = V_5;
		__this->set_writeAt_17(L_449);
		int32_t L_450 = ___r0;
		int32_t L_451;
		L_451 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_450, /*hidden argument*/NULL);
		return L_451;
	}

IL_0b37:
	{
		int32_t L_452 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_452, (int32_t)1));
		int32_t L_453 = V_1;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_454 = __this->get__codec_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_455 = L_454->get_InputBuffer_0();
		int32_t L_456 = V_3;
		int32_t L_457 = L_456;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_457, (int32_t)1));
		int32_t L_458 = L_457;
		uint8_t L_459 = (L_455)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_458));
		int32_t L_460 = V_2;
		V_1 = ((int32_t)((int32_t)L_453|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_459&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_460&(int32_t)((int32_t)31)))))));
		int32_t L_461 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_461, (int32_t)8));
	}

IL_0b60:
	{
		int32_t L_462 = V_2;
		int32_t L_463 = V_0;
		int32_t L_464 = V_14;
		if ((((int32_t)L_462) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_463, (int32_t)L_464)))))
		{
			goto IL_0ad1;
		}
	}
	{
		int32_t L_465 = V_1;
		int32_t L_466 = V_0;
		V_1 = ((int32_t)((int32_t)L_465>>(int32_t)((int32_t)((int32_t)L_466&(int32_t)((int32_t)31)))));
		int32_t L_467 = V_2;
		int32_t L_468 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_467, (int32_t)L_468));
		int32_t L_469 = V_15;
		int32_t L_470 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_471 = ((InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_472 = V_14;
		int32_t L_473 = L_472;
		int32_t L_474 = (L_471)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_473));
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_469, (int32_t)((int32_t)((int32_t)L_470&(int32_t)L_474))));
		int32_t L_475 = V_1;
		int32_t L_476 = V_14;
		V_1 = ((int32_t)((int32_t)L_475>>(int32_t)((int32_t)((int32_t)L_476&(int32_t)((int32_t)31)))));
		int32_t L_477 = V_2;
		int32_t L_478 = V_14;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_477, (int32_t)L_478));
		int32_t L_479 = __this->get_index_4();
		V_14 = L_479;
		int32_t L_480 = __this->get_table_3();
		V_0 = L_480;
		int32_t L_481 = V_14;
		int32_t L_482 = V_15;
		int32_t L_483 = V_0;
		int32_t L_484 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_481, (int32_t)L_482))) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)258), (int32_t)((int32_t)((int32_t)L_483&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_484>>(int32_t)5))&(int32_t)((int32_t)31))))))))
		{
			goto IL_0bcc;
		}
	}
	{
		int32_t L_485 = V_16;
		if ((!(((uint32_t)L_485) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0c46;
		}
	}
	{
		int32_t L_486 = V_14;
		if ((((int32_t)L_486) >= ((int32_t)1)))
		{
			goto IL_0c46;
		}
	}

IL_0bcc:
	{
		__this->set_blens_5((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		__this->set_mode_1(((int32_t)9));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_487 = __this->get__codec_10();
		L_487->set_Message_8(_stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384);
		___r0 = ((int32_t)-3);
		int32_t L_488 = V_1;
		__this->set_bitb_12(L_488);
		int32_t L_489 = V_2;
		__this->set_bitk_11(L_489);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_490 = __this->get__codec_10();
		int32_t L_491 = V_4;
		L_490->set_AvailableBytesIn_2(L_491);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_492 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_493 = L_492;
		int64_t L_494 = L_493->get_TotalBytesIn_3();
		int32_t L_495 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_496 = __this->get__codec_10();
		int32_t L_497 = L_496->get_NextIn_1();
		L_493->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_494, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_495, (int32_t)L_497)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_498 = __this->get__codec_10();
		int32_t L_499 = V_3;
		L_498->set_NextIn_1(L_499);
		int32_t L_500 = V_5;
		__this->set_writeAt_17(L_500);
		int32_t L_501 = ___r0;
		int32_t L_502;
		L_502 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_501, /*hidden argument*/NULL);
		return L_502;
	}

IL_0c46:
	{
		int32_t L_503 = V_16;
		if ((!(((uint32_t)L_503) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0c5f;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_504 = __this->get_blens_5();
		int32_t L_505 = V_14;
		int32_t L_506 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_505, (int32_t)1));
		int32_t L_507 = (L_504)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_506));
		G_B124_0 = L_507;
		goto IL_0c60;
	}

IL_0c5f:
	{
		G_B124_0 = 0;
	}

IL_0c60:
	{
		V_16 = G_B124_0;
	}

IL_0c62:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_508 = __this->get_blens_5();
		int32_t L_509 = V_14;
		int32_t L_510 = L_509;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_510, (int32_t)1));
		int32_t L_511 = V_16;
		(L_508)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_510), (int32_t)L_511);
		int32_t L_512 = V_15;
		int32_t L_513 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_512, (int32_t)1));
		V_15 = L_513;
		if (L_513)
		{
			goto IL_0c62;
		}
	}
	{
		int32_t L_514 = V_14;
		__this->set_index_4(L_514);
	}

IL_0c86:
	{
		goto IL_0965;
	}

IL_0c8b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_515 = __this->get_tb_7();
		(L_515)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_516 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_517 = L_516;
		(L_517)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		V_17 = L_517;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_518 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_519 = L_518;
		(L_519)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)6);
		V_18 = L_519;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_520 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_19 = L_520;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_521 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_20 = L_521;
		int32_t L_522 = __this->get_table_3();
		V_0 = L_522;
		InfTree_t53256069DB2E468CA29302B088C7835ADA5BB6BF * L_523 = __this->get_inftree_20();
		int32_t L_524 = V_0;
		int32_t L_525 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_526 = __this->get_blens_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_527 = V_17;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_528 = V_18;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_529 = V_19;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_530 = V_20;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_531 = __this->get_hufts_13();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_532 = __this->get__codec_10();
		int32_t L_533;
		L_533 = InfTree_inflate_trees_dynamic_m9FBBA434F5E6E7F27F7C4686144D22EC5346B77E(L_523, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)257), (int32_t)((int32_t)((int32_t)L_524&(int32_t)((int32_t)31))))), ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_525>>(int32_t)5))&(int32_t)((int32_t)31))))), L_526, L_527, L_528, L_529, L_530, L_531, L_532, /*hidden argument*/NULL);
		V_0 = L_533;
		int32_t L_534 = V_0;
		if (!L_534)
		{
			goto IL_0d73;
		}
	}
	{
		int32_t L_535 = V_0;
		if ((!(((uint32_t)L_535) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0d19;
		}
	}
	{
		__this->set_blens_5((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		__this->set_mode_1(((int32_t)9));
	}

IL_0d19:
	{
		int32_t L_536 = V_0;
		___r0 = L_536;
		int32_t L_537 = V_1;
		__this->set_bitb_12(L_537);
		int32_t L_538 = V_2;
		__this->set_bitk_11(L_538);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_539 = __this->get__codec_10();
		int32_t L_540 = V_4;
		L_539->set_AvailableBytesIn_2(L_540);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_541 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_542 = L_541;
		int64_t L_543 = L_542->get_TotalBytesIn_3();
		int32_t L_544 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_545 = __this->get__codec_10();
		int32_t L_546 = L_545->get_NextIn_1();
		L_542->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_543, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_544, (int32_t)L_546)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_547 = __this->get__codec_10();
		int32_t L_548 = V_3;
		L_547->set_NextIn_1(L_548);
		int32_t L_549 = V_5;
		__this->set_writeAt_17(L_549);
		int32_t L_550 = ___r0;
		int32_t L_551;
		L_551 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_550, /*hidden argument*/NULL);
		return L_551;
	}

IL_0d73:
	{
		InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * L_552 = __this->get_codes_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_553 = V_17;
		int32_t L_554 = 0;
		int32_t L_555 = (L_553)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_554));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_556 = V_18;
		int32_t L_557 = 0;
		int32_t L_558 = (L_556)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_557));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_559 = __this->get_hufts_13();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_560 = V_19;
		int32_t L_561 = 0;
		int32_t L_562 = (L_560)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_561));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_563 = __this->get_hufts_13();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_564 = V_20;
		int32_t L_565 = 0;
		int32_t L_566 = (L_564)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_565));
		InflateCodes_Init_m430E7A20BB8578131F8BB656985D674F60B3CBAA(L_552, L_555, L_558, L_559, L_562, L_563, L_566, /*hidden argument*/NULL);
		__this->set_mode_1(6);
		goto IL_0da6;
	}

IL_0da6:
	{
		int32_t L_567 = V_1;
		__this->set_bitb_12(L_567);
		int32_t L_568 = V_2;
		__this->set_bitk_11(L_568);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_569 = __this->get__codec_10();
		int32_t L_570 = V_4;
		L_569->set_AvailableBytesIn_2(L_570);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_571 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_572 = L_571;
		int64_t L_573 = L_572->get_TotalBytesIn_3();
		int32_t L_574 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_575 = __this->get__codec_10();
		int32_t L_576 = L_575->get_NextIn_1();
		L_572->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_573, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_574, (int32_t)L_576)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_577 = __this->get__codec_10();
		int32_t L_578 = V_3;
		L_577->set_NextIn_1(L_578);
		int32_t L_579 = V_5;
		__this->set_writeAt_17(L_579);
		InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * L_580 = __this->get_codes_8();
		int32_t L_581 = ___r0;
		int32_t L_582;
		L_582 = InflateCodes_Process_mD0374DE1E690212193132DE2545916D3F7ADFEE3(L_580, __this, L_581, /*hidden argument*/NULL);
		___r0 = L_582;
		int32_t L_583 = ___r0;
		if ((((int32_t)L_583) == ((int32_t)1)))
		{
			goto IL_0e13;
		}
	}
	{
		int32_t L_584 = ___r0;
		int32_t L_585;
		L_585 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_584, /*hidden argument*/NULL);
		return L_585;
	}

IL_0e13:
	{
		___r0 = 0;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_586 = __this->get__codec_10();
		int32_t L_587 = L_586->get_NextIn_1();
		V_3 = L_587;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_588 = __this->get__codec_10();
		int32_t L_589 = L_588->get_AvailableBytesIn_2();
		V_4 = L_589;
		int32_t L_590 = __this->get_bitb_12();
		V_1 = L_590;
		int32_t L_591 = __this->get_bitk_11();
		V_2 = L_591;
		int32_t L_592 = __this->get_writeAt_17();
		V_5 = L_592;
		int32_t L_593 = V_5;
		int32_t L_594 = __this->get_readAt_16();
		if ((((int32_t)L_593) >= ((int32_t)L_594)))
		{
			goto IL_0e62;
		}
	}
	{
		int32_t L_595 = __this->get_readAt_16();
		int32_t L_596 = V_5;
		G_B138_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_595, (int32_t)L_596)), (int32_t)1));
		goto IL_0e6b;
	}

IL_0e62:
	{
		int32_t L_597 = __this->get_end_15();
		int32_t L_598 = V_5;
		G_B138_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_597, (int32_t)L_598));
	}

IL_0e6b:
	{
		V_6 = G_B138_0;
		int32_t L_599 = __this->get_last_9();
		if (L_599)
		{
			goto IL_0e84;
		}
	}
	{
		__this->set_mode_1(0);
		goto IL_1055;
	}

IL_0e84:
	{
		__this->set_mode_1(7);
		goto IL_0e90;
	}

IL_0e90:
	{
		int32_t L_600 = V_5;
		__this->set_writeAt_17(L_600);
		int32_t L_601 = ___r0;
		int32_t L_602;
		L_602 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_601, /*hidden argument*/NULL);
		___r0 = L_602;
		int32_t L_603 = __this->get_writeAt_17();
		V_5 = L_603;
		int32_t L_604 = V_5;
		int32_t L_605 = __this->get_readAt_16();
		if ((((int32_t)L_604) >= ((int32_t)L_605)))
		{
			goto IL_0ec6;
		}
	}
	{
		int32_t L_606 = __this->get_readAt_16();
		int32_t L_607 = V_5;
		G_B144_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_606, (int32_t)L_607)), (int32_t)1));
		goto IL_0ecf;
	}

IL_0ec6:
	{
		int32_t L_608 = __this->get_end_15();
		int32_t L_609 = V_5;
		G_B144_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_608, (int32_t)L_609));
	}

IL_0ecf:
	{
		V_6 = G_B144_0;
		int32_t L_610 = __this->get_readAt_16();
		int32_t L_611 = __this->get_writeAt_17();
		if ((((int32_t)L_610) == ((int32_t)L_611)))
		{
			goto IL_0f39;
		}
	}
	{
		int32_t L_612 = V_1;
		__this->set_bitb_12(L_612);
		int32_t L_613 = V_2;
		__this->set_bitk_11(L_613);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_614 = __this->get__codec_10();
		int32_t L_615 = V_4;
		L_614->set_AvailableBytesIn_2(L_615);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_616 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_617 = L_616;
		int64_t L_618 = L_617->get_TotalBytesIn_3();
		int32_t L_619 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_620 = __this->get__codec_10();
		int32_t L_621 = L_620->get_NextIn_1();
		L_617->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_618, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_619, (int32_t)L_621)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_622 = __this->get__codec_10();
		int32_t L_623 = V_3;
		L_622->set_NextIn_1(L_623);
		int32_t L_624 = V_5;
		__this->set_writeAt_17(L_624);
		int32_t L_625 = ___r0;
		int32_t L_626;
		L_626 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_625, /*hidden argument*/NULL);
		return L_626;
	}

IL_0f39:
	{
		__this->set_mode_1(8);
		goto IL_0f45;
	}

IL_0f45:
	{
		___r0 = 1;
		int32_t L_627 = V_1;
		__this->set_bitb_12(L_627);
		int32_t L_628 = V_2;
		__this->set_bitk_11(L_628);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_629 = __this->get__codec_10();
		int32_t L_630 = V_4;
		L_629->set_AvailableBytesIn_2(L_630);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_631 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_632 = L_631;
		int64_t L_633 = L_632->get_TotalBytesIn_3();
		int32_t L_634 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_635 = __this->get__codec_10();
		int32_t L_636 = L_635->get_NextIn_1();
		L_632->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_633, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_634, (int32_t)L_636)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_637 = __this->get__codec_10();
		int32_t L_638 = V_3;
		L_637->set_NextIn_1(L_638);
		int32_t L_639 = V_5;
		__this->set_writeAt_17(L_639);
		int32_t L_640 = ___r0;
		int32_t L_641;
		L_641 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_640, /*hidden argument*/NULL);
		return L_641;
	}

IL_0f9f:
	{
		___r0 = ((int32_t)-3);
		int32_t L_642 = V_1;
		__this->set_bitb_12(L_642);
		int32_t L_643 = V_2;
		__this->set_bitk_11(L_643);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_644 = __this->get__codec_10();
		int32_t L_645 = V_4;
		L_644->set_AvailableBytesIn_2(L_645);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_646 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_647 = L_646;
		int64_t L_648 = L_647->get_TotalBytesIn_3();
		int32_t L_649 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_650 = __this->get__codec_10();
		int32_t L_651 = L_650->get_NextIn_1();
		L_647->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_648, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_649, (int32_t)L_651)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_652 = __this->get__codec_10();
		int32_t L_653 = V_3;
		L_652->set_NextIn_1(L_653);
		int32_t L_654 = V_5;
		__this->set_writeAt_17(L_654);
		int32_t L_655 = ___r0;
		int32_t L_656;
		L_656 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_655, /*hidden argument*/NULL);
		return L_656;
	}

IL_0ffa:
	{
		___r0 = ((int32_t)-2);
		int32_t L_657 = V_1;
		__this->set_bitb_12(L_657);
		int32_t L_658 = V_2;
		__this->set_bitk_11(L_658);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_659 = __this->get__codec_10();
		int32_t L_660 = V_4;
		L_659->set_AvailableBytesIn_2(L_660);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_661 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_662 = L_661;
		int64_t L_663 = L_662->get_TotalBytesIn_3();
		int32_t L_664 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_665 = __this->get__codec_10();
		int32_t L_666 = L_665->get_NextIn_1();
		L_662->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_663, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_664, (int32_t)L_666)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_667 = __this->get__codec_10();
		int32_t L_668 = V_3;
		L_667->set_NextIn_1(L_668);
		int32_t L_669 = V_5;
		__this->set_writeAt_17(L_669);
		int32_t L_670 = ___r0;
		int32_t L_671;
		L_671 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(__this, L_670, /*hidden argument*/NULL);
		return L_671;
	}

IL_1055:
	{
		goto IL_0057;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks_Free_mF7252CE952F18E4A108114591CD821372E0C2CBF (InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0;
		L_0 = InflateBlocks_Reset_m0004AF627D19ADFC96D2E3B49336BFD200DA8605(__this, /*hidden argument*/NULL);
		__this->set_window_14((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		__this->set_hufts_13((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::Flush(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636 (InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * __this, int32_t ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	{
		V_1 = 0;
		goto IL_0175;
	}

IL_0007:
	{
		int32_t L_0 = V_1;
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_1 = __this->get_readAt_16();
		int32_t L_2 = __this->get_writeAt_17();
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = __this->get_writeAt_17();
		G_B5_0 = L_3;
		goto IL_002f;
	}

IL_0029:
	{
		int32_t L_4 = __this->get_end_15();
		G_B5_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = __this->get_readAt_16();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)G_B5_0, (int32_t)L_5));
		goto IL_004a;
	}

IL_003c:
	{
		int32_t L_6 = __this->get_writeAt_17();
		int32_t L_7 = __this->get_readAt_16();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
	}

IL_004a:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_9 = ___r0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_005b;
		}
	}
	{
		___r0 = 0;
	}

IL_005b:
	{
		int32_t L_10 = ___r0;
		return L_10;
	}

IL_005d:
	{
		int32_t L_11 = V_0;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_12 = __this->get__codec_10();
		int32_t L_13 = L_12->get_AvailableBytesOut_6();
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_007a;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_14 = __this->get__codec_10();
		int32_t L_15 = L_14->get_AvailableBytesOut_6();
		V_0 = L_15;
	}

IL_007a:
	{
		int32_t L_16 = V_0;
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_17 = ___r0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_008b;
		}
	}
	{
		___r0 = 0;
	}

IL_008b:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_18 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_19 = L_18;
		int32_t L_20 = L_19->get_AvailableBytesOut_6();
		int32_t L_21 = V_0;
		L_19->set_AvailableBytesOut_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_22 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_23 = L_22;
		int64_t L_24 = L_23->get_TotalBytesOut_7();
		int32_t L_25 = V_0;
		L_23->set_TotalBytesOut_7(((int64_t)il2cpp_codegen_add((int64_t)L_24, (int64_t)((int64_t)((int64_t)L_25)))));
		RuntimeObject * L_26 = __this->get_checkfn_18();
		if (!L_26)
		{
			goto IL_00e9;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_27 = __this->get__codec_10();
		uint32_t L_28 = __this->get_check_19();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = __this->get_window_14();
		int32_t L_30 = __this->get_readAt_16();
		int32_t L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Adler_t5E77A3AF1D749499F3594EEB1EFDF76550AE1985_il2cpp_TypeInfo_var);
		uint32_t L_32;
		L_32 = Adler_Adler32_m153E4796B41C8C0F63E6A07CD399E82C1B6590C5(L_28, L_29, L_30, L_31, /*hidden argument*/NULL);
		uint32_t L_33 = L_32;
		V_2 = L_33;
		__this->set_check_19(L_33);
		uint32_t L_34 = V_2;
		L_27->set__Adler32_11(L_34);
	}

IL_00e9:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = __this->get_window_14();
		int32_t L_36 = __this->get_readAt_16();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_37 = __this->get__codec_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = L_37->get_OutputBuffer_4();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_39 = __this->get__codec_10();
		int32_t L_40 = L_39->get_NextOut_5();
		int32_t L_41 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_35, L_36, (RuntimeArray *)(RuntimeArray *)L_38, L_40, L_41, /*hidden argument*/NULL);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_42 = __this->get__codec_10();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_43 = L_42;
		int32_t L_44 = L_43->get_NextOut_5();
		int32_t L_45 = V_0;
		L_43->set_NextOut_5(((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_45)));
		int32_t L_46 = __this->get_readAt_16();
		int32_t L_47 = V_0;
		__this->set_readAt_16(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47)));
		int32_t L_48 = __this->get_readAt_16();
		int32_t L_49 = __this->get_end_15();
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_016d;
		}
	}
	{
		int32_t L_50 = V_1;
		if (L_50)
		{
			goto IL_016d;
		}
	}
	{
		__this->set_readAt_16(0);
		int32_t L_51 = __this->get_writeAt_17();
		int32_t L_52 = __this->get_end_15();
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0168;
		}
	}
	{
		__this->set_writeAt_17(0);
	}

IL_0168:
	{
		goto IL_0171;
	}

IL_016d:
	{
		int32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0171:
	{
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0175:
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) < ((int32_t)2)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_56 = ___r0;
		return L_56;
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
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes__ctor_mDBA1454A1AB0FC83F0984E74C049DE6E99F54F15 (InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes_Init_m430E7A20BB8578131F8BB656985D674F60B3CBAA (InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td4, int32_t ___td_index5, const RuntimeMethod* method)
{
	{
		__this->set_mode_0(0);
		int32_t L_0 = ___bl0;
		__this->set_lbits_8((uint8_t)((int32_t)((uint8_t)L_0)));
		int32_t L_1 = ___bd1;
		__this->set_dbits_9((uint8_t)((int32_t)((uint8_t)L_1)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___tl2;
		__this->set_ltree_10(L_2);
		int32_t L_3 = ___tl_index3;
		__this->set_ltree_index_11(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___td4;
		__this->set_dtree_12(L_4);
		int32_t L_5 = ___td_index5;
		__this->set_dtree_index_13(L_5);
		__this->set_tree_2((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::Process(Pathfinding.Ionic.Zlib.InflateBlocks,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_Process_mD0374DE1E690212193132DE2545916D3F7ADFEE3 (InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * __this, InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * ___blocks0, int32_t ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * V_10 = NULL;
	int32_t V_11 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * G_B14_0 = NULL;
	InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * G_B15_1 = NULL;
	int32_t G_B67_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B77_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B96_0 = 0;
	int32_t G_B101_0 = 0;
	int32_t G_B110_0 = 0;
	{
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_0 = ___blocks0;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_1 = L_0->get__codec_10();
		V_10 = L_1;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_2 = V_10;
		int32_t L_3 = L_2->get_NextIn_1();
		V_5 = L_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_4 = V_10;
		int32_t L_5 = L_4->get_AvailableBytesIn_2();
		V_6 = L_5;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_6 = ___blocks0;
		int32_t L_7 = L_6->get_bitb_12();
		V_3 = L_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_8 = ___blocks0;
		int32_t L_9 = L_8->get_bitk_11();
		V_4 = L_9;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_10 = ___blocks0;
		int32_t L_11 = L_10->get_writeAt_17();
		V_7 = L_11;
		int32_t L_12 = V_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_13 = ___blocks0;
		int32_t L_14 = L_13->get_readAt_16();
		if ((((int32_t)L_12) >= ((int32_t)L_14)))
		{
			goto IL_0056;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_15 = ___blocks0;
		int32_t L_16 = L_15->get_readAt_16();
		int32_t L_17 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), (int32_t)1));
		goto IL_005f;
	}

IL_0056:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_18 = ___blocks0;
		int32_t L_19 = L_18->get_end_15();
		int32_t L_20 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20));
	}

IL_005f:
	{
		V_8 = G_B3_0;
	}

IL_0061:
	{
		int32_t L_21 = __this->get_mode_0();
		V_11 = L_21;
		int32_t L_22 = V_11;
		switch (L_22)
		{
			case 0:
			{
				goto IL_009d;
			}
			case 1:
			{
				goto IL_01c4;
			}
			case 2:
			{
				goto IL_0387;
			}
			case 3:
			{
				goto IL_0471;
			}
			case 4:
			{
				goto IL_05fd;
			}
			case 5:
			{
				goto IL_06c3;
			}
			case 6:
			{
				goto IL_0868;
			}
			case 7:
			{
				goto IL_09b8;
			}
			case 8:
			{
				goto IL_0a7a;
			}
			case 9:
			{
				goto IL_0ac7;
			}
		}
	}
	{
		goto IL_0b15;
	}

IL_009d:
	{
		int32_t L_23 = V_8;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)258))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_24 = V_6;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)10))))
		{
			goto IL_0194;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_25 = ___blocks0;
		int32_t L_26 = V_3;
		L_25->set_bitb_12(L_26);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_27 = ___blocks0;
		int32_t L_28 = V_4;
		L_27->set_bitk_11(L_28);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_29 = V_10;
		int32_t L_30 = V_6;
		L_29->set_AvailableBytesIn_2(L_30);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_31 = V_10;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_32 = L_31;
		int64_t L_33 = L_32->get_TotalBytesIn_3();
		int32_t L_34 = V_5;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_35 = V_10;
		int32_t L_36 = L_35->get_NextIn_1();
		L_32->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_33, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_36)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_37 = V_10;
		int32_t L_38 = V_5;
		L_37->set_NextIn_1(L_38);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_39 = ___blocks0;
		int32_t L_40 = V_7;
		L_39->set_writeAt_17(L_40);
		uint8_t L_41 = __this->get_lbits_8();
		uint8_t L_42 = __this->get_dbits_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = __this->get_ltree_10();
		int32_t L_44 = __this->get_ltree_index_11();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = __this->get_dtree_12();
		int32_t L_46 = __this->get_dtree_index_13();
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_47 = ___blocks0;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_48 = V_10;
		int32_t L_49;
		L_49 = InflateCodes_InflateFast_mC544E2CAA8D6A74DAADEBDF9016874E4E76FDD44(__this, L_41, L_42, L_43, L_44, L_45, L_46, L_47, L_48, /*hidden argument*/NULL);
		___r1 = L_49;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_50 = V_10;
		int32_t L_51 = L_50->get_NextIn_1();
		V_5 = L_51;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_52 = V_10;
		int32_t L_53 = L_52->get_AvailableBytesIn_2();
		V_6 = L_53;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_54 = ___blocks0;
		int32_t L_55 = L_54->get_bitb_12();
		V_3 = L_55;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_56 = ___blocks0;
		int32_t L_57 = L_56->get_bitk_11();
		V_4 = L_57;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_58 = ___blocks0;
		int32_t L_59 = L_58->get_writeAt_17();
		V_7 = L_59;
		int32_t L_60 = V_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_61 = ___blocks0;
		int32_t L_62 = L_61->get_readAt_16();
		if ((((int32_t)L_60) >= ((int32_t)L_62)))
		{
			goto IL_0169;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_63 = ___blocks0;
		int32_t L_64 = L_63->get_readAt_16();
		int32_t L_65 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)L_65)), (int32_t)1));
		goto IL_0172;
	}

IL_0169:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_66 = ___blocks0;
		int32_t L_67 = L_66->get_end_15();
		int32_t L_68 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)L_68));
	}

IL_0172:
	{
		V_8 = G_B11_0;
		int32_t L_69 = ___r1;
		if (!L_69)
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_70 = ___r1;
		G_B13_0 = __this;
		if ((!(((uint32_t)L_70) == ((uint32_t)1))))
		{
			G_B14_0 = __this;
			goto IL_0188;
		}
	}
	{
		G_B15_0 = 7;
		G_B15_1 = G_B13_0;
		goto IL_018a;
	}

IL_0188:
	{
		G_B15_0 = ((int32_t)9);
		G_B15_1 = G_B14_0;
	}

IL_018a:
	{
		G_B15_1->set_mode_0(G_B15_0);
		goto IL_0b63;
	}

IL_0194:
	{
		uint8_t L_71 = __this->get_lbits_8();
		__this->set_need_4(L_71);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_72 = __this->get_ltree_10();
		__this->set_tree_2(L_72);
		int32_t L_73 = __this->get_ltree_index_11();
		__this->set_tree_index_3(L_73);
		__this->set_mode_0(1);
		goto IL_01c4;
	}

IL_01c4:
	{
		int32_t L_74 = __this->get_need_4();
		V_0 = L_74;
		goto IL_0253;
	}

IL_01d0:
	{
		int32_t L_75 = V_6;
		if (!L_75)
		{
			goto IL_01df;
		}
	}
	{
		___r1 = 0;
		goto IL_0229;
	}

IL_01df:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_76 = ___blocks0;
		int32_t L_77 = V_3;
		L_76->set_bitb_12(L_77);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_78 = ___blocks0;
		int32_t L_79 = V_4;
		L_78->set_bitk_11(L_79);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_80 = V_10;
		int32_t L_81 = V_6;
		L_80->set_AvailableBytesIn_2(L_81);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_82 = V_10;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_83 = L_82;
		int64_t L_84 = L_83->get_TotalBytesIn_3();
		int32_t L_85 = V_5;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_86 = V_10;
		int32_t L_87 = L_86->get_NextIn_1();
		L_83->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_84, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)L_87)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_88 = V_10;
		int32_t L_89 = V_5;
		L_88->set_NextIn_1(L_89);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_90 = ___blocks0;
		int32_t L_91 = V_7;
		L_90->set_writeAt_17(L_91);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_92 = ___blocks0;
		int32_t L_93 = ___r1;
		int32_t L_94;
		L_94 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_92, L_93, /*hidden argument*/NULL);
		return L_94;
	}

IL_0229:
	{
		int32_t L_95 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)1));
		int32_t L_96 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_97 = V_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_98 = L_97->get_InputBuffer_0();
		int32_t L_99 = V_5;
		int32_t L_100 = L_99;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		int32_t L_101 = L_100;
		uint8_t L_102 = (L_98)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = V_4;
		V_3 = ((int32_t)((int32_t)L_96|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_102&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_103&(int32_t)((int32_t)31)))))));
		int32_t L_104 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)8));
	}

IL_0253:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_0;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_01d0;
		}
	}
	{
		int32_t L_107 = __this->get_tree_index_3();
		int32_t L_108 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_109 = ((InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_110 = V_0;
		int32_t L_111 = L_110;
		int32_t L_112 = (L_109)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_111));
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)((int32_t)((int32_t)L_108&(int32_t)L_112)))), (int32_t)3));
		int32_t L_113 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_114 = __this->get_tree_2();
		int32_t L_115 = V_1;
		int32_t L_116 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)1));
		int32_t L_117 = (L_114)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_116));
		V_3 = ((int32_t)((int32_t)L_113>>(int32_t)((int32_t)((int32_t)L_117&(int32_t)((int32_t)31)))));
		int32_t L_118 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_119 = __this->get_tree_2();
		int32_t L_120 = V_1;
		int32_t L_121 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
		int32_t L_122 = (L_119)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_121));
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)L_122));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_123 = __this->get_tree_2();
		int32_t L_124 = V_1;
		int32_t L_125 = L_124;
		int32_t L_126 = (L_123)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_125));
		V_2 = L_126;
		int32_t L_127 = V_2;
		if (L_127)
		{
			goto IL_02b8;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_128 = __this->get_tree_2();
		int32_t L_129 = V_1;
		int32_t L_130 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)2));
		int32_t L_131 = (L_128)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_130));
		__this->set_lit_5(L_131);
		__this->set_mode_0(6);
		goto IL_0b63;
	}

IL_02b8:
	{
		int32_t L_132 = V_2;
		if (!((int32_t)((int32_t)L_132&(int32_t)((int32_t)16))))
		{
			goto IL_02e7;
		}
	}
	{
		int32_t L_133 = V_2;
		__this->set_bitsToGet_6(((int32_t)((int32_t)L_133&(int32_t)((int32_t)15))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_134 = __this->get_tree_2();
		int32_t L_135 = V_1;
		int32_t L_136 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)2));
		int32_t L_137 = (L_134)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_136));
		__this->set_len_1(L_137);
		__this->set_mode_0(2);
		goto IL_0b63;
	}

IL_02e7:
	{
		int32_t L_138 = V_2;
		if (((int32_t)((int32_t)L_138&(int32_t)((int32_t)64))))
		{
			goto IL_0310;
		}
	}
	{
		int32_t L_139 = V_2;
		__this->set_need_4(L_139);
		int32_t L_140 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_141 = __this->get_tree_2();
		int32_t L_142 = V_1;
		int32_t L_143 = ((int32_t)il2cpp_codegen_add((int32_t)L_142, (int32_t)2));
		int32_t L_144 = (L_141)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_143));
		__this->set_tree_index_3(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_140/(int32_t)3)), (int32_t)L_144)));
		goto IL_0b63;
	}

IL_0310:
	{
		int32_t L_145 = V_2;
		if (!((int32_t)((int32_t)L_145&(int32_t)((int32_t)32))))
		{
			goto IL_0325;
		}
	}
	{
		__this->set_mode_0(7);
		goto IL_0b63;
	}

IL_0325:
	{
		__this->set_mode_0(((int32_t)9));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_146 = V_10;
		L_146->set_Message_8(_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		___r1 = ((int32_t)-3);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_147 = ___blocks0;
		int32_t L_148 = V_3;
		L_147->set_bitb_12(L_148);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_149 = ___blocks0;
		int32_t L_150 = V_4;
		L_149->set_bitk_11(L_150);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_151 = V_10;
		int32_t L_152 = V_6;
		L_151->set_AvailableBytesIn_2(L_152);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_153 = V_10;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_154 = L_153;
		int64_t L_155 = L_154->get_TotalBytesIn_3();
		int32_t L_156 = V_5;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_157 = V_10;
		int32_t L_158 = L_157->get_NextIn_1();
		L_154->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_155, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_156, (int32_t)L_158)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_159 = V_10;
		int32_t L_160 = V_5;
		L_159->set_NextIn_1(L_160);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_161 = ___blocks0;
		int32_t L_162 = V_7;
		L_161->set_writeAt_17(L_162);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_163 = ___blocks0;
		int32_t L_164 = ___r1;
		int32_t L_165;
		L_165 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_163, L_164, /*hidden argument*/NULL);
		return L_165;
	}

IL_0387:
	{
		int32_t L_166 = __this->get_bitsToGet_6();
		V_0 = L_166;
		goto IL_0416;
	}

IL_0393:
	{
		int32_t L_167 = V_6;
		if (!L_167)
		{
			goto IL_03a2;
		}
	}
	{
		___r1 = 0;
		goto IL_03ec;
	}

IL_03a2:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_168 = ___blocks0;
		int32_t L_169 = V_3;
		L_168->set_bitb_12(L_169);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_170 = ___blocks0;
		int32_t L_171 = V_4;
		L_170->set_bitk_11(L_171);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_172 = V_10;
		int32_t L_173 = V_6;
		L_172->set_AvailableBytesIn_2(L_173);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_174 = V_10;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_175 = L_174;
		int64_t L_176 = L_175->get_TotalBytesIn_3();
		int32_t L_177 = V_5;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_178 = V_10;
		int32_t L_179 = L_178->get_NextIn_1();
		L_175->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_176, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_177, (int32_t)L_179)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_180 = V_10;
		int32_t L_181 = V_5;
		L_180->set_NextIn_1(L_181);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_182 = ___blocks0;
		int32_t L_183 = V_7;
		L_182->set_writeAt_17(L_183);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_184 = ___blocks0;
		int32_t L_185 = ___r1;
		int32_t L_186;
		L_186 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_184, L_185, /*hidden argument*/NULL);
		return L_186;
	}

IL_03ec:
	{
		int32_t L_187 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_187, (int32_t)1));
		int32_t L_188 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_189 = V_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_190 = L_189->get_InputBuffer_0();
		int32_t L_191 = V_5;
		int32_t L_192 = L_191;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_192, (int32_t)1));
		int32_t L_193 = L_192;
		uint8_t L_194 = (L_190)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = V_4;
		V_3 = ((int32_t)((int32_t)L_188|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_194&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_195&(int32_t)((int32_t)31)))))));
		int32_t L_196 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_196, (int32_t)8));
	}

IL_0416:
	{
		int32_t L_197 = V_4;
		int32_t L_198 = V_0;
		if ((((int32_t)L_197) < ((int32_t)L_198)))
		{
			goto IL_0393;
		}
	}
	{
		int32_t L_199 = __this->get_len_1();
		int32_t L_200 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_201 = ((InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_202 = V_0;
		int32_t L_203 = L_202;
		int32_t L_204 = (L_201)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_203));
		__this->set_len_1(((int32_t)il2cpp_codegen_add((int32_t)L_199, (int32_t)((int32_t)((int32_t)L_200&(int32_t)L_204)))));
		int32_t L_205 = V_3;
		int32_t L_206 = V_0;
		V_3 = ((int32_t)((int32_t)L_205>>(int32_t)((int32_t)((int32_t)L_206&(int32_t)((int32_t)31)))));
		int32_t L_207 = V_4;
		int32_t L_208 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_207, (int32_t)L_208));
		uint8_t L_209 = __this->get_dbits_9();
		__this->set_need_4(L_209);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_210 = __this->get_dtree_12();
		__this->set_tree_2(L_210);
		int32_t L_211 = __this->get_dtree_index_13();
		__this->set_tree_index_3(L_211);
		__this->set_mode_0(3);
		goto IL_0471;
	}

IL_0471:
	{
		int32_t L_212 = __this->get_need_4();
		V_0 = L_212;
		goto IL_0500;
	}

IL_047d:
	{
		int32_t L_213 = V_6;
		if (!L_213)
		{
			goto IL_048c;
		}
	}
	{
		___r1 = 0;
		goto IL_04d6;
	}

IL_048c:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_214 = ___blocks0;
		int32_t L_215 = V_3;
		L_214->set_bitb_12(L_215);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_216 = ___blocks0;
		int32_t L_217 = V_4;
		L_216->set_bitk_11(L_217);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_218 = V_10;
		int32_t L_219 = V_6;
		L_218->set_AvailableBytesIn_2(L_219);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_220 = V_10;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_221 = L_220;
		int64_t L_222 = L_221->get_TotalBytesIn_3();
		int32_t L_223 = V_5;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_224 = V_10;
		int32_t L_225 = L_224->get_NextIn_1();
		L_221->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_222, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_223, (int32_t)L_225)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_226 = V_10;
		int32_t L_227 = V_5;
		L_226->set_NextIn_1(L_227);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_228 = ___blocks0;
		int32_t L_229 = V_7;
		L_228->set_writeAt_17(L_229);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_230 = ___blocks0;
		int32_t L_231 = ___r1;
		int32_t L_232;
		L_232 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_230, L_231, /*hidden argument*/NULL);
		return L_232;
	}

IL_04d6:
	{
		int32_t L_233 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_233, (int32_t)1));
		int32_t L_234 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_235 = V_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_236 = L_235->get_InputBuffer_0();
		int32_t L_237 = V_5;
		int32_t L_238 = L_237;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_238, (int32_t)1));
		int32_t L_239 = L_238;
		uint8_t L_240 = (L_236)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_239));
		int32_t L_241 = V_4;
		V_3 = ((int32_t)((int32_t)L_234|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_240&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_241&(int32_t)((int32_t)31)))))));
		int32_t L_242 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_242, (int32_t)8));
	}

IL_0500:
	{
		int32_t L_243 = V_4;
		int32_t L_244 = V_0;
		if ((((int32_t)L_243) < ((int32_t)L_244)))
		{
			goto IL_047d;
		}
	}
	{
		int32_t L_245 = __this->get_tree_index_3();
		int32_t L_246 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_247 = ((InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_248 = V_0;
		int32_t L_249 = L_248;
		int32_t L_250 = (L_247)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_249));
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_245, (int32_t)((int32_t)((int32_t)L_246&(int32_t)L_250)))), (int32_t)3));
		int32_t L_251 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_252 = __this->get_tree_2();
		int32_t L_253 = V_1;
		int32_t L_254 = ((int32_t)il2cpp_codegen_add((int32_t)L_253, (int32_t)1));
		int32_t L_255 = (L_252)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_254));
		V_3 = ((int32_t)((int32_t)L_251>>(int32_t)((int32_t)((int32_t)L_255&(int32_t)((int32_t)31)))));
		int32_t L_256 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_257 = __this->get_tree_2();
		int32_t L_258 = V_1;
		int32_t L_259 = ((int32_t)il2cpp_codegen_add((int32_t)L_258, (int32_t)1));
		int32_t L_260 = (L_257)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_259));
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_256, (int32_t)L_260));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_261 = __this->get_tree_2();
		int32_t L_262 = V_1;
		int32_t L_263 = L_262;
		int32_t L_264 = (L_261)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_263));
		V_2 = L_264;
		int32_t L_265 = V_2;
		if (!((int32_t)((int32_t)L_265&(int32_t)((int32_t)16))))
		{
			goto IL_0572;
		}
	}
	{
		int32_t L_266 = V_2;
		__this->set_bitsToGet_6(((int32_t)((int32_t)L_266&(int32_t)((int32_t)15))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_267 = __this->get_tree_2();
		int32_t L_268 = V_1;
		int32_t L_269 = ((int32_t)il2cpp_codegen_add((int32_t)L_268, (int32_t)2));
		int32_t L_270 = (L_267)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_269));
		__this->set_dist_7(L_270);
		__this->set_mode_0(4);
		goto IL_0b63;
	}

IL_0572:
	{
		int32_t L_271 = V_2;
		if (((int32_t)((int32_t)L_271&(int32_t)((int32_t)64))))
		{
			goto IL_059b;
		}
	}
	{
		int32_t L_272 = V_2;
		__this->set_need_4(L_272);
		int32_t L_273 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_274 = __this->get_tree_2();
		int32_t L_275 = V_1;
		int32_t L_276 = ((int32_t)il2cpp_codegen_add((int32_t)L_275, (int32_t)2));
		int32_t L_277 = (L_274)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_276));
		__this->set_tree_index_3(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_273/(int32_t)3)), (int32_t)L_277)));
		goto IL_0b63;
	}

IL_059b:
	{
		__this->set_mode_0(((int32_t)9));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_278 = V_10;
		L_278->set_Message_8(_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		___r1 = ((int32_t)-3);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_279 = ___blocks0;
		int32_t L_280 = V_3;
		L_279->set_bitb_12(L_280);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_281 = ___blocks0;
		int32_t L_282 = V_4;
		L_281->set_bitk_11(L_282);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_283 = V_10;
		int32_t L_284 = V_6;
		L_283->set_AvailableBytesIn_2(L_284);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_285 = V_10;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_286 = L_285;
		int64_t L_287 = L_286->get_TotalBytesIn_3();
		int32_t L_288 = V_5;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_289 = V_10;
		int32_t L_290 = L_289->get_NextIn_1();
		L_286->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_287, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_288, (int32_t)L_290)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_291 = V_10;
		int32_t L_292 = V_5;
		L_291->set_NextIn_1(L_292);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_293 = ___blocks0;
		int32_t L_294 = V_7;
		L_293->set_writeAt_17(L_294);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_295 = ___blocks0;
		int32_t L_296 = ___r1;
		int32_t L_297;
		L_297 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_295, L_296, /*hidden argument*/NULL);
		return L_297;
	}

IL_05fd:
	{
		int32_t L_298 = __this->get_bitsToGet_6();
		V_0 = L_298;
		goto IL_068c;
	}

IL_0609:
	{
		int32_t L_299 = V_6;
		if (!L_299)
		{
			goto IL_0618;
		}
	}
	{
		___r1 = 0;
		goto IL_0662;
	}

IL_0618:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_300 = ___blocks0;
		int32_t L_301 = V_3;
		L_300->set_bitb_12(L_301);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_302 = ___blocks0;
		int32_t L_303 = V_4;
		L_302->set_bitk_11(L_303);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_304 = V_10;
		int32_t L_305 = V_6;
		L_304->set_AvailableBytesIn_2(L_305);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_306 = V_10;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_307 = L_306;
		int64_t L_308 = L_307->get_TotalBytesIn_3();
		int32_t L_309 = V_5;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_310 = V_10;
		int32_t L_311 = L_310->get_NextIn_1();
		L_307->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_308, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_309, (int32_t)L_311)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_312 = V_10;
		int32_t L_313 = V_5;
		L_312->set_NextIn_1(L_313);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_314 = ___blocks0;
		int32_t L_315 = V_7;
		L_314->set_writeAt_17(L_315);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_316 = ___blocks0;
		int32_t L_317 = ___r1;
		int32_t L_318;
		L_318 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_316, L_317, /*hidden argument*/NULL);
		return L_318;
	}

IL_0662:
	{
		int32_t L_319 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_319, (int32_t)1));
		int32_t L_320 = V_3;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_321 = V_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_322 = L_321->get_InputBuffer_0();
		int32_t L_323 = V_5;
		int32_t L_324 = L_323;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_324, (int32_t)1));
		int32_t L_325 = L_324;
		uint8_t L_326 = (L_322)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = V_4;
		V_3 = ((int32_t)((int32_t)L_320|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_326&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_327&(int32_t)((int32_t)31)))))));
		int32_t L_328 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_328, (int32_t)8));
	}

IL_068c:
	{
		int32_t L_329 = V_4;
		int32_t L_330 = V_0;
		if ((((int32_t)L_329) < ((int32_t)L_330)))
		{
			goto IL_0609;
		}
	}
	{
		int32_t L_331 = __this->get_dist_7();
		int32_t L_332 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_333 = ((InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_334 = V_0;
		int32_t L_335 = L_334;
		int32_t L_336 = (L_333)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_335));
		__this->set_dist_7(((int32_t)il2cpp_codegen_add((int32_t)L_331, (int32_t)((int32_t)((int32_t)L_332&(int32_t)L_336)))));
		int32_t L_337 = V_3;
		int32_t L_338 = V_0;
		V_3 = ((int32_t)((int32_t)L_337>>(int32_t)((int32_t)((int32_t)L_338&(int32_t)((int32_t)31)))));
		int32_t L_339 = V_4;
		int32_t L_340 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_339, (int32_t)L_340));
		__this->set_mode_0(5);
		goto IL_06c3;
	}

IL_06c3:
	{
		int32_t L_341 = V_7;
		int32_t L_342 = __this->get_dist_7();
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_341, (int32_t)L_342));
		goto IL_06de;
	}

IL_06d3:
	{
		int32_t L_343 = V_9;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_344 = ___blocks0;
		int32_t L_345 = L_344->get_end_15();
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_343, (int32_t)L_345));
	}

IL_06de:
	{
		int32_t L_346 = V_9;
		if ((((int32_t)L_346) < ((int32_t)0)))
		{
			goto IL_06d3;
		}
	}
	{
		goto IL_0851;
	}

IL_06eb:
	{
		int32_t L_347 = V_8;
		if (L_347)
		{
			goto IL_0811;
		}
	}
	{
		int32_t L_348 = V_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_349 = ___blocks0;
		int32_t L_350 = L_349->get_end_15();
		if ((!(((uint32_t)L_348) == ((uint32_t)L_350))))
		{
			goto IL_0735;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_351 = ___blocks0;
		int32_t L_352 = L_351->get_readAt_16();
		if (!L_352)
		{
			goto IL_0735;
		}
	}
	{
		V_7 = 0;
		int32_t L_353 = V_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_354 = ___blocks0;
		int32_t L_355 = L_354->get_readAt_16();
		if ((((int32_t)L_353) >= ((int32_t)L_355)))
		{
			goto IL_072a;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_356 = ___blocks0;
		int32_t L_357 = L_356->get_readAt_16();
		int32_t L_358 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_357, (int32_t)L_358)), (int32_t)1));
		goto IL_0733;
	}

IL_072a:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_359 = ___blocks0;
		int32_t L_360 = L_359->get_end_15();
		int32_t L_361 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_360, (int32_t)L_361));
	}

IL_0733:
	{
		V_8 = G_B67_0;
	}

IL_0735:
	{
		int32_t L_362 = V_8;
		if (L_362)
		{
			goto IL_0811;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_363 = ___blocks0;
		int32_t L_364 = V_7;
		L_363->set_writeAt_17(L_364);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_365 = ___blocks0;
		int32_t L_366 = ___r1;
		int32_t L_367;
		L_367 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_365, L_366, /*hidden argument*/NULL);
		___r1 = L_367;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_368 = ___blocks0;
		int32_t L_369 = L_368->get_writeAt_17();
		V_7 = L_369;
		int32_t L_370 = V_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_371 = ___blocks0;
		int32_t L_372 = L_371->get_readAt_16();
		if ((((int32_t)L_370) >= ((int32_t)L_372)))
		{
			goto IL_0772;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_373 = ___blocks0;
		int32_t L_374 = L_373->get_readAt_16();
		int32_t L_375 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_374, (int32_t)L_375)), (int32_t)1));
		goto IL_077b;
	}

IL_0772:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_376 = ___blocks0;
		int32_t L_377 = L_376->get_end_15();
		int32_t L_378 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_377, (int32_t)L_378));
	}

IL_077b:
	{
		V_8 = G_B72_0;
		int32_t L_379 = V_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_380 = ___blocks0;
		int32_t L_381 = L_380->get_end_15();
		if ((!(((uint32_t)L_379) == ((uint32_t)L_381))))
		{
			goto IL_07c0;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_382 = ___blocks0;
		int32_t L_383 = L_382->get_readAt_16();
		if (!L_383)
		{
			goto IL_07c0;
		}
	}
	{
		V_7 = 0;
		int32_t L_384 = V_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_385 = ___blocks0;
		int32_t L_386 = L_385->get_readAt_16();
		if ((((int32_t)L_384) >= ((int32_t)L_386)))
		{
			goto IL_07b5;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_387 = ___blocks0;
		int32_t L_388 = L_387->get_readAt_16();
		int32_t L_389 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_388, (int32_t)L_389)), (int32_t)1));
		goto IL_07be;
	}

IL_07b5:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_390 = ___blocks0;
		int32_t L_391 = L_390->get_end_15();
		int32_t L_392 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_391, (int32_t)L_392));
	}

IL_07be:
	{
		V_8 = G_B77_0;
	}

IL_07c0:
	{
		int32_t L_393 = V_8;
		if (L_393)
		{
			goto IL_0811;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_394 = ___blocks0;
		int32_t L_395 = V_3;
		L_394->set_bitb_12(L_395);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_396 = ___blocks0;
		int32_t L_397 = V_4;
		L_396->set_bitk_11(L_397);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_398 = V_10;
		int32_t L_399 = V_6;
		L_398->set_AvailableBytesIn_2(L_399);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_400 = V_10;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_401 = L_400;
		int64_t L_402 = L_401->get_TotalBytesIn_3();
		int32_t L_403 = V_5;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_404 = V_10;
		int32_t L_405 = L_404->get_NextIn_1();
		L_401->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_402, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_403, (int32_t)L_405)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_406 = V_10;
		int32_t L_407 = V_5;
		L_406->set_NextIn_1(L_407);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_408 = ___blocks0;
		int32_t L_409 = V_7;
		L_408->set_writeAt_17(L_409);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_410 = ___blocks0;
		int32_t L_411 = ___r1;
		int32_t L_412;
		L_412 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_410, L_411, /*hidden argument*/NULL);
		return L_412;
	}

IL_0811:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_413 = ___blocks0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_414 = L_413->get_window_14();
		int32_t L_415 = V_7;
		int32_t L_416 = L_415;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_416, (int32_t)1));
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_417 = ___blocks0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_418 = L_417->get_window_14();
		int32_t L_419 = V_9;
		int32_t L_420 = L_419;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_420, (int32_t)1));
		int32_t L_421 = L_420;
		uint8_t L_422 = (L_418)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_421));
		(L_414)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_416), (uint8_t)L_422);
		int32_t L_423 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_423, (int32_t)1));
		int32_t L_424 = V_9;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_425 = ___blocks0;
		int32_t L_426 = L_425->get_end_15();
		if ((!(((uint32_t)L_424) == ((uint32_t)L_426))))
		{
			goto IL_0843;
		}
	}
	{
		V_9 = 0;
	}

IL_0843:
	{
		int32_t L_427 = __this->get_len_1();
		__this->set_len_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_427, (int32_t)1)));
	}

IL_0851:
	{
		int32_t L_428 = __this->get_len_1();
		if (L_428)
		{
			goto IL_06eb;
		}
	}
	{
		__this->set_mode_0(0);
		goto IL_0b63;
	}

IL_0868:
	{
		int32_t L_429 = V_8;
		if (L_429)
		{
			goto IL_098e;
		}
	}
	{
		int32_t L_430 = V_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_431 = ___blocks0;
		int32_t L_432 = L_431->get_end_15();
		if ((!(((uint32_t)L_430) == ((uint32_t)L_432))))
		{
			goto IL_08b2;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_433 = ___blocks0;
		int32_t L_434 = L_433->get_readAt_16();
		if (!L_434)
		{
			goto IL_08b2;
		}
	}
	{
		V_7 = 0;
		int32_t L_435 = V_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_436 = ___blocks0;
		int32_t L_437 = L_436->get_readAt_16();
		if ((((int32_t)L_435) >= ((int32_t)L_437)))
		{
			goto IL_08a7;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_438 = ___blocks0;
		int32_t L_439 = L_438->get_readAt_16();
		int32_t L_440 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_439, (int32_t)L_440)), (int32_t)1));
		goto IL_08b0;
	}

IL_08a7:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_441 = ___blocks0;
		int32_t L_442 = L_441->get_end_15();
		int32_t L_443 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_442, (int32_t)L_443));
	}

IL_08b0:
	{
		V_8 = G_B91_0;
	}

IL_08b2:
	{
		int32_t L_444 = V_8;
		if (L_444)
		{
			goto IL_098e;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_445 = ___blocks0;
		int32_t L_446 = V_7;
		L_445->set_writeAt_17(L_446);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_447 = ___blocks0;
		int32_t L_448 = ___r1;
		int32_t L_449;
		L_449 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_447, L_448, /*hidden argument*/NULL);
		___r1 = L_449;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_450 = ___blocks0;
		int32_t L_451 = L_450->get_writeAt_17();
		V_7 = L_451;
		int32_t L_452 = V_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_453 = ___blocks0;
		int32_t L_454 = L_453->get_readAt_16();
		if ((((int32_t)L_452) >= ((int32_t)L_454)))
		{
			goto IL_08ef;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_455 = ___blocks0;
		int32_t L_456 = L_455->get_readAt_16();
		int32_t L_457 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_456, (int32_t)L_457)), (int32_t)1));
		goto IL_08f8;
	}

IL_08ef:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_458 = ___blocks0;
		int32_t L_459 = L_458->get_end_15();
		int32_t L_460 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_459, (int32_t)L_460));
	}

IL_08f8:
	{
		V_8 = G_B96_0;
		int32_t L_461 = V_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_462 = ___blocks0;
		int32_t L_463 = L_462->get_end_15();
		if ((!(((uint32_t)L_461) == ((uint32_t)L_463))))
		{
			goto IL_093d;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_464 = ___blocks0;
		int32_t L_465 = L_464->get_readAt_16();
		if (!L_465)
		{
			goto IL_093d;
		}
	}
	{
		V_7 = 0;
		int32_t L_466 = V_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_467 = ___blocks0;
		int32_t L_468 = L_467->get_readAt_16();
		if ((((int32_t)L_466) >= ((int32_t)L_468)))
		{
			goto IL_0932;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_469 = ___blocks0;
		int32_t L_470 = L_469->get_readAt_16();
		int32_t L_471 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_470, (int32_t)L_471)), (int32_t)1));
		goto IL_093b;
	}

IL_0932:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_472 = ___blocks0;
		int32_t L_473 = L_472->get_end_15();
		int32_t L_474 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_473, (int32_t)L_474));
	}

IL_093b:
	{
		V_8 = G_B101_0;
	}

IL_093d:
	{
		int32_t L_475 = V_8;
		if (L_475)
		{
			goto IL_098e;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_476 = ___blocks0;
		int32_t L_477 = V_3;
		L_476->set_bitb_12(L_477);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_478 = ___blocks0;
		int32_t L_479 = V_4;
		L_478->set_bitk_11(L_479);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_480 = V_10;
		int32_t L_481 = V_6;
		L_480->set_AvailableBytesIn_2(L_481);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_482 = V_10;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_483 = L_482;
		int64_t L_484 = L_483->get_TotalBytesIn_3();
		int32_t L_485 = V_5;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_486 = V_10;
		int32_t L_487 = L_486->get_NextIn_1();
		L_483->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_484, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_485, (int32_t)L_487)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_488 = V_10;
		int32_t L_489 = V_5;
		L_488->set_NextIn_1(L_489);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_490 = ___blocks0;
		int32_t L_491 = V_7;
		L_490->set_writeAt_17(L_491);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_492 = ___blocks0;
		int32_t L_493 = ___r1;
		int32_t L_494;
		L_494 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_492, L_493, /*hidden argument*/NULL);
		return L_494;
	}

IL_098e:
	{
		___r1 = 0;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_495 = ___blocks0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_496 = L_495->get_window_14();
		int32_t L_497 = V_7;
		int32_t L_498 = L_497;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_498, (int32_t)1));
		int32_t L_499 = __this->get_lit_5();
		(L_496)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_498), (uint8_t)((int32_t)((uint8_t)L_499)));
		int32_t L_500 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_500, (int32_t)1));
		__this->set_mode_0(0);
		goto IL_0b63;
	}

IL_09b8:
	{
		int32_t L_501 = V_4;
		if ((((int32_t)L_501) <= ((int32_t)7)))
		{
			goto IL_09d2;
		}
	}
	{
		int32_t L_502 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_502, (int32_t)8));
		int32_t L_503 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_503, (int32_t)1));
		int32_t L_504 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_504, (int32_t)1));
	}

IL_09d2:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_505 = ___blocks0;
		int32_t L_506 = V_7;
		L_505->set_writeAt_17(L_506);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_507 = ___blocks0;
		int32_t L_508 = ___r1;
		int32_t L_509;
		L_509 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_507, L_508, /*hidden argument*/NULL);
		___r1 = L_509;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_510 = ___blocks0;
		int32_t L_511 = L_510->get_writeAt_17();
		V_7 = L_511;
		int32_t L_512 = V_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_513 = ___blocks0;
		int32_t L_514 = L_513->get_readAt_16();
		if ((((int32_t)L_512) >= ((int32_t)L_514)))
		{
			goto IL_0a08;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_515 = ___blocks0;
		int32_t L_516 = L_515->get_readAt_16();
		int32_t L_517 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_516, (int32_t)L_517)), (int32_t)1));
		goto IL_0a11;
	}

IL_0a08:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_518 = ___blocks0;
		int32_t L_519 = L_518->get_end_15();
		int32_t L_520 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_519, (int32_t)L_520));
	}

IL_0a11:
	{
		V_8 = G_B110_0;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_521 = ___blocks0;
		int32_t L_522 = L_521->get_readAt_16();
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_523 = ___blocks0;
		int32_t L_524 = L_523->get_writeAt_17();
		if ((((int32_t)L_522) == ((int32_t)L_524)))
		{
			goto IL_0a6e;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_525 = ___blocks0;
		int32_t L_526 = V_3;
		L_525->set_bitb_12(L_526);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_527 = ___blocks0;
		int32_t L_528 = V_4;
		L_527->set_bitk_11(L_528);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_529 = V_10;
		int32_t L_530 = V_6;
		L_529->set_AvailableBytesIn_2(L_530);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_531 = V_10;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_532 = L_531;
		int64_t L_533 = L_532->get_TotalBytesIn_3();
		int32_t L_534 = V_5;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_535 = V_10;
		int32_t L_536 = L_535->get_NextIn_1();
		L_532->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_533, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_534, (int32_t)L_536)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_537 = V_10;
		int32_t L_538 = V_5;
		L_537->set_NextIn_1(L_538);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_539 = ___blocks0;
		int32_t L_540 = V_7;
		L_539->set_writeAt_17(L_540);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_541 = ___blocks0;
		int32_t L_542 = ___r1;
		int32_t L_543;
		L_543 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_541, L_542, /*hidden argument*/NULL);
		return L_543;
	}

IL_0a6e:
	{
		__this->set_mode_0(8);
		goto IL_0a7a;
	}

IL_0a7a:
	{
		___r1 = 1;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_544 = ___blocks0;
		int32_t L_545 = V_3;
		L_544->set_bitb_12(L_545);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_546 = ___blocks0;
		int32_t L_547 = V_4;
		L_546->set_bitk_11(L_547);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_548 = V_10;
		int32_t L_549 = V_6;
		L_548->set_AvailableBytesIn_2(L_549);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_550 = V_10;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_551 = L_550;
		int64_t L_552 = L_551->get_TotalBytesIn_3();
		int32_t L_553 = V_5;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_554 = V_10;
		int32_t L_555 = L_554->get_NextIn_1();
		L_551->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_552, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_553, (int32_t)L_555)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_556 = V_10;
		int32_t L_557 = V_5;
		L_556->set_NextIn_1(L_557);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_558 = ___blocks0;
		int32_t L_559 = V_7;
		L_558->set_writeAt_17(L_559);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_560 = ___blocks0;
		int32_t L_561 = ___r1;
		int32_t L_562;
		L_562 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_560, L_561, /*hidden argument*/NULL);
		return L_562;
	}

IL_0ac7:
	{
		___r1 = ((int32_t)-3);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_563 = ___blocks0;
		int32_t L_564 = V_3;
		L_563->set_bitb_12(L_564);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_565 = ___blocks0;
		int32_t L_566 = V_4;
		L_565->set_bitk_11(L_566);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_567 = V_10;
		int32_t L_568 = V_6;
		L_567->set_AvailableBytesIn_2(L_568);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_569 = V_10;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_570 = L_569;
		int64_t L_571 = L_570->get_TotalBytesIn_3();
		int32_t L_572 = V_5;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_573 = V_10;
		int32_t L_574 = L_573->get_NextIn_1();
		L_570->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_571, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_572, (int32_t)L_574)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_575 = V_10;
		int32_t L_576 = V_5;
		L_575->set_NextIn_1(L_576);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_577 = ___blocks0;
		int32_t L_578 = V_7;
		L_577->set_writeAt_17(L_578);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_579 = ___blocks0;
		int32_t L_580 = ___r1;
		int32_t L_581;
		L_581 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_579, L_580, /*hidden argument*/NULL);
		return L_581;
	}

IL_0b15:
	{
		___r1 = ((int32_t)-2);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_582 = ___blocks0;
		int32_t L_583 = V_3;
		L_582->set_bitb_12(L_583);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_584 = ___blocks0;
		int32_t L_585 = V_4;
		L_584->set_bitk_11(L_585);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_586 = V_10;
		int32_t L_587 = V_6;
		L_586->set_AvailableBytesIn_2(L_587);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_588 = V_10;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_589 = L_588;
		int64_t L_590 = L_589->get_TotalBytesIn_3();
		int32_t L_591 = V_5;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_592 = V_10;
		int32_t L_593 = L_592->get_NextIn_1();
		L_589->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_590, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_591, (int32_t)L_593)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_594 = V_10;
		int32_t L_595 = V_5;
		L_594->set_NextIn_1(L_595);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_596 = ___blocks0;
		int32_t L_597 = V_7;
		L_596->set_writeAt_17(L_597);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_598 = ___blocks0;
		int32_t L_599 = ___r1;
		int32_t L_600;
		L_600 = InflateBlocks_Flush_m94CB2F47CCE900E5BB577B3F235BD758560FD636(L_598, L_599, /*hidden argument*/NULL);
		return L_600;
	}

IL_0b63:
	{
		goto IL_0061;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Pathfinding.Ionic.Zlib.InflateBlocks,Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_InflateFast_mC544E2CAA8D6A74DAADEBDF9016874E4E76FDD44 (InflateCodes_tE9B28FF95FA1B27E178CAE472D716D8E1D49EEAD * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td4, int32_t ___td_index5, InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * ___s6, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___z7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B44_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B66_0 = 0;
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_0 = ___z7;
		int32_t L_1 = L_0->get_NextIn_1();
		V_6 = L_1;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_2 = ___z7;
		int32_t L_3 = L_2->get_AvailableBytesIn_2();
		V_7 = L_3;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_4 = ___s6;
		int32_t L_5 = L_4->get_bitb_12();
		V_4 = L_5;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_6 = ___s6;
		int32_t L_7 = L_6->get_bitk_11();
		V_5 = L_7;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_8 = ___s6;
		int32_t L_9 = L_8->get_writeAt_17();
		V_8 = L_9;
		int32_t L_10 = V_8;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_11 = ___s6;
		int32_t L_12 = L_11->get_readAt_16();
		if ((((int32_t)L_10) >= ((int32_t)L_12)))
		{
			goto IL_004c;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_13 = ___s6;
		int32_t L_14 = L_13->get_readAt_16();
		int32_t L_15 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), (int32_t)1));
		goto IL_0056;
	}

IL_004c:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_16 = ___s6;
		int32_t L_17 = L_16->get_end_15();
		int32_t L_18 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18));
	}

IL_0056:
	{
		V_9 = G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = ((InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_20 = ___bl0;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_10 = L_22;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = ((InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_24 = ___bd1;
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_11 = L_26;
	}

IL_006a:
	{
		goto IL_009b;
	}

IL_006f:
	{
		int32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1));
		int32_t L_28 = V_4;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_29 = ___z7;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = L_29->get_InputBuffer_0();
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_5;
		V_4 = ((int32_t)((int32_t)L_28|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_34&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_35&(int32_t)((int32_t)31)))))));
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)8));
	}

IL_009b:
	{
		int32_t L_37 = V_5;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)20))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_38 = V_4;
		int32_t L_39 = V_10;
		V_0 = ((int32_t)((int32_t)L_38&(int32_t)L_39));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = ___tl2;
		V_1 = L_40;
		int32_t L_41 = ___tl_index3;
		V_2 = L_41;
		int32_t L_42 = V_2;
		int32_t L_43 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)L_43)), (int32_t)3));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = V_1;
		int32_t L_45 = V_15;
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = L_47;
		V_3 = L_48;
		if (L_48)
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_49 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = V_1;
		int32_t L_51 = V_15;
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		int32_t L_53 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		V_4 = ((int32_t)((int32_t)L_49>>(int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)31)))));
		int32_t L_54 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = V_1;
		int32_t L_56 = V_15;
		int32_t L_57 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		int32_t L_58 = (L_55)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_58));
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_59 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_60 = L_59->get_window_14();
		int32_t L_61 = V_8;
		int32_t L_62 = L_61;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_63 = V_1;
		int32_t L_64 = V_15;
		int32_t L_65 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)2));
		int32_t L_66 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)((int32_t)((uint8_t)L_66)));
		int32_t L_67 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1));
		goto IL_062b;
	}

IL_00fb:
	{
		int32_t L_68 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_69 = V_1;
		int32_t L_70 = V_15;
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		int32_t L_72 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		V_4 = ((int32_t)((int32_t)L_68>>(int32_t)((int32_t)((int32_t)L_72&(int32_t)((int32_t)31)))));
		int32_t L_73 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_74 = V_1;
		int32_t L_75 = V_15;
		int32_t L_76 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		int32_t L_77 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_73, (int32_t)L_77));
		int32_t L_78 = V_3;
		if (!((int32_t)((int32_t)L_78&(int32_t)((int32_t)16))))
		{
			goto IL_049a;
		}
	}
	{
		int32_t L_79 = V_3;
		V_3 = ((int32_t)((int32_t)L_79&(int32_t)((int32_t)15)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_80 = V_1;
		int32_t L_81 = V_15;
		int32_t L_82 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)2));
		int32_t L_83 = (L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_85 = ((InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_86 = V_3;
		int32_t L_87 = L_86;
		int32_t L_88 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_87));
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)((int32_t)((int32_t)L_84&(int32_t)L_88))));
		int32_t L_89 = V_4;
		int32_t L_90 = V_3;
		V_4 = ((int32_t)((int32_t)L_89>>(int32_t)((int32_t)((int32_t)L_90&(int32_t)((int32_t)31)))));
		int32_t L_91 = V_5;
		int32_t L_92 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)L_92));
		goto IL_0175;
	}

IL_0149:
	{
		int32_t L_93 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1));
		int32_t L_94 = V_4;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_95 = ___z7;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = L_95->get_InputBuffer_0();
		int32_t L_97 = V_6;
		int32_t L_98 = L_97;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		int32_t L_99 = L_98;
		uint8_t L_100 = (L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_99));
		int32_t L_101 = V_5;
		V_4 = ((int32_t)((int32_t)L_94|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_100&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_101&(int32_t)((int32_t)31)))))));
		int32_t L_102 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)8));
	}

IL_0175:
	{
		int32_t L_103 = V_5;
		if ((((int32_t)L_103) < ((int32_t)((int32_t)15))))
		{
			goto IL_0149;
		}
	}
	{
		int32_t L_104 = V_4;
		int32_t L_105 = V_11;
		V_0 = ((int32_t)((int32_t)L_104&(int32_t)L_105));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_106 = ___td4;
		V_1 = L_106;
		int32_t L_107 = ___td_index5;
		V_2 = L_107;
		int32_t L_108 = V_2;
		int32_t L_109 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)L_109)), (int32_t)3));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_110 = V_1;
		int32_t L_111 = V_15;
		int32_t L_112 = L_111;
		int32_t L_113 = (L_110)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_112));
		V_3 = L_113;
	}

IL_0196:
	{
		int32_t L_114 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_115 = V_1;
		int32_t L_116 = V_15;
		int32_t L_117 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		int32_t L_118 = (L_115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_117));
		V_4 = ((int32_t)((int32_t)L_114>>(int32_t)((int32_t)((int32_t)L_118&(int32_t)((int32_t)31)))));
		int32_t L_119 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_120 = V_1;
		int32_t L_121 = V_15;
		int32_t L_122 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
		int32_t L_123 = (L_120)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_122));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_119, (int32_t)L_123));
		int32_t L_124 = V_3;
		if (!((int32_t)((int32_t)L_124&(int32_t)((int32_t)16))))
		{
			goto IL_03d0;
		}
	}
	{
		int32_t L_125 = V_3;
		V_3 = ((int32_t)((int32_t)L_125&(int32_t)((int32_t)15)));
		goto IL_01ee;
	}

IL_01c2:
	{
		int32_t L_126 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_126, (int32_t)1));
		int32_t L_127 = V_4;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_128 = ___z7;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_129 = L_128->get_InputBuffer_0();
		int32_t L_130 = V_6;
		int32_t L_131 = L_130;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
		int32_t L_132 = L_131;
		uint8_t L_133 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_132));
		int32_t L_134 = V_5;
		V_4 = ((int32_t)((int32_t)L_127|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_133&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_134&(int32_t)((int32_t)31)))))));
		int32_t L_135 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)8));
	}

IL_01ee:
	{
		int32_t L_136 = V_5;
		int32_t L_137 = V_3;
		if ((((int32_t)L_136) < ((int32_t)L_137)))
		{
			goto IL_01c2;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_138 = V_1;
		int32_t L_139 = V_15;
		int32_t L_140 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)2));
		int32_t L_141 = (L_138)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_140));
		int32_t L_142 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_143 = ((InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_144 = V_3;
		int32_t L_145 = L_144;
		int32_t L_146 = (L_143)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_145));
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)((int32_t)((int32_t)L_142&(int32_t)L_146))));
		int32_t L_147 = V_4;
		int32_t L_148 = V_3;
		V_4 = ((int32_t)((int32_t)L_147>>(int32_t)((int32_t)((int32_t)L_148&(int32_t)((int32_t)31)))));
		int32_t L_149 = V_5;
		int32_t L_150 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_149, (int32_t)L_150));
		int32_t L_151 = V_9;
		int32_t L_152 = V_12;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_151, (int32_t)L_152));
		int32_t L_153 = V_8;
		int32_t L_154 = V_13;
		if ((((int32_t)L_153) < ((int32_t)L_154)))
		{
			goto IL_02bb;
		}
	}
	{
		int32_t L_155 = V_8;
		int32_t L_156 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_155, (int32_t)L_156));
		int32_t L_157 = V_8;
		int32_t L_158 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_157, (int32_t)L_158))) <= ((int32_t)0)))
		{
			goto IL_028c;
		}
	}
	{
		int32_t L_159 = V_8;
		int32_t L_160 = V_14;
		if ((((int32_t)2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_159, (int32_t)L_160)))))
		{
			goto IL_028c;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_161 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_162 = L_161->get_window_14();
		int32_t L_163 = V_8;
		int32_t L_164 = L_163;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)1));
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_165 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_166 = L_165->get_window_14();
		int32_t L_167 = V_14;
		int32_t L_168 = L_167;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_168, (int32_t)1));
		int32_t L_169 = L_168;
		uint8_t L_170 = (L_166)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_169));
		(L_162)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_164), (uint8_t)L_170);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_171 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_172 = L_171->get_window_14();
		int32_t L_173 = V_8;
		int32_t L_174 = L_173;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1));
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_175 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_176 = L_175->get_window_14();
		int32_t L_177 = V_14;
		int32_t L_178 = L_177;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)1));
		int32_t L_179 = L_178;
		uint8_t L_180 = (L_176)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_179));
		(L_172)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_174), (uint8_t)L_180);
		int32_t L_181 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_181, (int32_t)2));
		goto IL_02b6;
	}

IL_028c:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_182 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_183 = L_182->get_window_14();
		int32_t L_184 = V_14;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_185 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_186 = L_185->get_window_14();
		int32_t L_187 = V_8;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_183, L_184, (RuntimeArray *)(RuntimeArray *)L_186, L_187, 2, /*hidden argument*/NULL);
		int32_t L_188 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_188, (int32_t)2));
		int32_t L_189 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_189, (int32_t)2));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_190, (int32_t)2));
	}

IL_02b6:
	{
		goto IL_035b;
	}

IL_02bb:
	{
		int32_t L_191 = V_8;
		int32_t L_192 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_191, (int32_t)L_192));
	}

IL_02c2:
	{
		int32_t L_193 = V_14;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_194 = ___s6;
		int32_t L_195 = L_194->get_end_15();
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_193, (int32_t)L_195));
		int32_t L_196 = V_14;
		if ((((int32_t)L_196) < ((int32_t)0)))
		{
			goto IL_02c2;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_197 = ___s6;
		int32_t L_198 = L_197->get_end_15();
		int32_t L_199 = V_14;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_198, (int32_t)L_199));
		int32_t L_200 = V_12;
		int32_t L_201 = V_3;
		if ((((int32_t)L_200) <= ((int32_t)L_201)))
		{
			goto IL_035b;
		}
	}
	{
		int32_t L_202 = V_12;
		int32_t L_203 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_202, (int32_t)L_203));
		int32_t L_204 = V_8;
		int32_t L_205 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_204, (int32_t)L_205))) <= ((int32_t)0)))
		{
			goto IL_0332;
		}
	}
	{
		int32_t L_206 = V_3;
		int32_t L_207 = V_8;
		int32_t L_208 = V_14;
		if ((((int32_t)L_206) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_207, (int32_t)L_208)))))
		{
			goto IL_0332;
		}
	}

IL_0305:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_209 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_210 = L_209->get_window_14();
		int32_t L_211 = V_8;
		int32_t L_212 = L_211;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_212, (int32_t)1));
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_213 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_214 = L_213->get_window_14();
		int32_t L_215 = V_14;
		int32_t L_216 = L_215;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_216, (int32_t)1));
		int32_t L_217 = L_216;
		uint8_t L_218 = (L_214)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_217));
		(L_210)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_212), (uint8_t)L_218);
		int32_t L_219 = V_3;
		int32_t L_220 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_219, (int32_t)1));
		V_3 = L_220;
		if (L_220)
		{
			goto IL_0305;
		}
	}
	{
		goto IL_0358;
	}

IL_0332:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_221 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_222 = L_221->get_window_14();
		int32_t L_223 = V_14;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_224 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_225 = L_224->get_window_14();
		int32_t L_226 = V_8;
		int32_t L_227 = V_3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_222, L_223, (RuntimeArray *)(RuntimeArray *)L_225, L_226, L_227, /*hidden argument*/NULL);
		int32_t L_228 = V_8;
		int32_t L_229 = V_3;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_228, (int32_t)L_229));
		int32_t L_230 = V_14;
		int32_t L_231 = V_3;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_230, (int32_t)L_231));
		V_3 = 0;
	}

IL_0358:
	{
		V_14 = 0;
	}

IL_035b:
	{
		int32_t L_232 = V_8;
		int32_t L_233 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_232, (int32_t)L_233))) <= ((int32_t)0)))
		{
			goto IL_03a1;
		}
	}
	{
		int32_t L_234 = V_12;
		int32_t L_235 = V_8;
		int32_t L_236 = V_14;
		if ((((int32_t)L_234) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_235, (int32_t)L_236)))))
		{
			goto IL_03a1;
		}
	}

IL_0372:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_237 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_238 = L_237->get_window_14();
		int32_t L_239 = V_8;
		int32_t L_240 = L_239;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_240, (int32_t)1));
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_241 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_242 = L_241->get_window_14();
		int32_t L_243 = V_14;
		int32_t L_244 = L_243;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_244, (int32_t)1));
		int32_t L_245 = L_244;
		uint8_t L_246 = (L_242)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_245));
		(L_238)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_240), (uint8_t)L_246);
		int32_t L_247 = V_12;
		int32_t L_248 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_247, (int32_t)1));
		V_12 = L_248;
		if (L_248)
		{
			goto IL_0372;
		}
	}
	{
		goto IL_03cb;
	}

IL_03a1:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_249 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_250 = L_249->get_window_14();
		int32_t L_251 = V_14;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_252 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_253 = L_252->get_window_14();
		int32_t L_254 = V_8;
		int32_t L_255 = V_12;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_250, L_251, (RuntimeArray *)(RuntimeArray *)L_253, L_254, L_255, /*hidden argument*/NULL);
		int32_t L_256 = V_8;
		int32_t L_257 = V_12;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_256, (int32_t)L_257));
		int32_t L_258 = V_14;
		int32_t L_259 = V_12;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_258, (int32_t)L_259));
		V_12 = 0;
	}

IL_03cb:
	{
		goto IL_0495;
	}

IL_03d0:
	{
		int32_t L_260 = V_3;
		if (((int32_t)((int32_t)L_260&(int32_t)((int32_t)64))))
		{
			goto IL_0400;
		}
	}
	{
		int32_t L_261 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_262 = V_1;
		int32_t L_263 = V_15;
		int32_t L_264 = ((int32_t)il2cpp_codegen_add((int32_t)L_263, (int32_t)2));
		int32_t L_265 = (L_262)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_264));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_261, (int32_t)L_265));
		int32_t L_266 = V_0;
		int32_t L_267 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_268 = ((InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_269 = V_3;
		int32_t L_270 = L_269;
		int32_t L_271 = (L_268)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_270));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_266, (int32_t)((int32_t)((int32_t)L_267&(int32_t)L_271))));
		int32_t L_272 = V_2;
		int32_t L_273 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_272, (int32_t)L_273)), (int32_t)3));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_274 = V_1;
		int32_t L_275 = V_15;
		int32_t L_276 = L_275;
		int32_t L_277 = (L_274)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_276));
		V_3 = L_277;
		goto IL_0490;
	}

IL_0400:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_278 = ___z7;
		L_278->set_Message_8(_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_279 = ___z7;
		int32_t L_280 = L_279->get_AvailableBytesIn_2();
		int32_t L_281 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_280, (int32_t)L_281));
		int32_t L_282 = V_5;
		int32_t L_283 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_282>>(int32_t)3))) >= ((int32_t)L_283)))
		{
			goto IL_042c;
		}
	}
	{
		int32_t L_284 = V_5;
		G_B44_0 = ((int32_t)((int32_t)L_284>>(int32_t)3));
		goto IL_042e;
	}

IL_042c:
	{
		int32_t L_285 = V_12;
		G_B44_0 = L_285;
	}

IL_042e:
	{
		V_12 = G_B44_0;
		int32_t L_286 = V_7;
		int32_t L_287 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_286, (int32_t)L_287));
		int32_t L_288 = V_6;
		int32_t L_289 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_288, (int32_t)L_289));
		int32_t L_290 = V_5;
		int32_t L_291 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_290, (int32_t)((int32_t)((int32_t)L_291<<(int32_t)3))));
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_292 = ___s6;
		int32_t L_293 = V_4;
		L_292->set_bitb_12(L_293);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_294 = ___s6;
		int32_t L_295 = V_5;
		L_294->set_bitk_11(L_295);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_296 = ___z7;
		int32_t L_297 = V_7;
		L_296->set_AvailableBytesIn_2(L_297);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_298 = ___z7;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_299 = L_298;
		int64_t L_300 = L_299->get_TotalBytesIn_3();
		int32_t L_301 = V_6;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_302 = ___z7;
		int32_t L_303 = L_302->get_NextIn_1();
		L_299->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_300, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_301, (int32_t)L_303)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_304 = ___z7;
		int32_t L_305 = V_6;
		L_304->set_NextIn_1(L_305);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_306 = ___s6;
		int32_t L_307 = V_8;
		L_306->set_writeAt_17(L_307);
		return ((int32_t)-3);
	}

IL_0490:
	{
		goto IL_0196;
	}

IL_0495:
	{
		goto IL_062b;
	}

IL_049a:
	{
		int32_t L_308 = V_3;
		if (((int32_t)((int32_t)L_308&(int32_t)((int32_t)64))))
		{
			goto IL_050a;
		}
	}
	{
		int32_t L_309 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_310 = V_1;
		int32_t L_311 = V_15;
		int32_t L_312 = ((int32_t)il2cpp_codegen_add((int32_t)L_311, (int32_t)2));
		int32_t L_313 = (L_310)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_312));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_309, (int32_t)L_313));
		int32_t L_314 = V_0;
		int32_t L_315 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_316 = ((InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t422C5922E186E55609D36ED86E6163CB9166BBF6_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_317 = V_3;
		int32_t L_318 = L_317;
		int32_t L_319 = (L_316)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_318));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_314, (int32_t)((int32_t)((int32_t)L_315&(int32_t)L_319))));
		int32_t L_320 = V_2;
		int32_t L_321 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_320, (int32_t)L_321)), (int32_t)3));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_322 = V_1;
		int32_t L_323 = V_15;
		int32_t L_324 = L_323;
		int32_t L_325 = (L_322)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_324));
		int32_t L_326 = L_325;
		V_3 = L_326;
		if (L_326)
		{
			goto IL_0505;
		}
	}
	{
		int32_t L_327 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_328 = V_1;
		int32_t L_329 = V_15;
		int32_t L_330 = ((int32_t)il2cpp_codegen_add((int32_t)L_329, (int32_t)1));
		int32_t L_331 = (L_328)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_330));
		V_4 = ((int32_t)((int32_t)L_327>>(int32_t)((int32_t)((int32_t)L_331&(int32_t)((int32_t)31)))));
		int32_t L_332 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_333 = V_1;
		int32_t L_334 = V_15;
		int32_t L_335 = ((int32_t)il2cpp_codegen_add((int32_t)L_334, (int32_t)1));
		int32_t L_336 = (L_333)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_335));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_332, (int32_t)L_336));
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_337 = ___s6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_338 = L_337->get_window_14();
		int32_t L_339 = V_8;
		int32_t L_340 = L_339;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_340, (int32_t)1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_341 = V_1;
		int32_t L_342 = V_15;
		int32_t L_343 = ((int32_t)il2cpp_codegen_add((int32_t)L_342, (int32_t)2));
		int32_t L_344 = (L_341)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_343));
		(L_338)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_340), (uint8_t)((int32_t)((uint8_t)L_344)));
		int32_t L_345 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_345, (int32_t)1));
		goto IL_062b;
	}

IL_0505:
	{
		goto IL_0626;
	}

IL_050a:
	{
		int32_t L_346 = V_3;
		if (!((int32_t)((int32_t)L_346&(int32_t)((int32_t)32))))
		{
			goto IL_0596;
		}
	}
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_347 = ___z7;
		int32_t L_348 = L_347->get_AvailableBytesIn_2();
		int32_t L_349 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_348, (int32_t)L_349));
		int32_t L_350 = V_5;
		int32_t L_351 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_350>>(int32_t)3))) >= ((int32_t)L_351)))
		{
			goto IL_0533;
		}
	}
	{
		int32_t L_352 = V_5;
		G_B55_0 = ((int32_t)((int32_t)L_352>>(int32_t)3));
		goto IL_0535;
	}

IL_0533:
	{
		int32_t L_353 = V_12;
		G_B55_0 = L_353;
	}

IL_0535:
	{
		V_12 = G_B55_0;
		int32_t L_354 = V_7;
		int32_t L_355 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_354, (int32_t)L_355));
		int32_t L_356 = V_6;
		int32_t L_357 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_356, (int32_t)L_357));
		int32_t L_358 = V_5;
		int32_t L_359 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_358, (int32_t)((int32_t)((int32_t)L_359<<(int32_t)3))));
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_360 = ___s6;
		int32_t L_361 = V_4;
		L_360->set_bitb_12(L_361);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_362 = ___s6;
		int32_t L_363 = V_5;
		L_362->set_bitk_11(L_363);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_364 = ___z7;
		int32_t L_365 = V_7;
		L_364->set_AvailableBytesIn_2(L_365);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_366 = ___z7;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_367 = L_366;
		int64_t L_368 = L_367->get_TotalBytesIn_3();
		int32_t L_369 = V_6;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_370 = ___z7;
		int32_t L_371 = L_370->get_NextIn_1();
		L_367->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_368, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_369, (int32_t)L_371)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_372 = ___z7;
		int32_t L_373 = V_6;
		L_372->set_NextIn_1(L_373);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_374 = ___s6;
		int32_t L_375 = V_8;
		L_374->set_writeAt_17(L_375);
		return 1;
	}

IL_0596:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_376 = ___z7;
		L_376->set_Message_8(_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_377 = ___z7;
		int32_t L_378 = L_377->get_AvailableBytesIn_2();
		int32_t L_379 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_378, (int32_t)L_379));
		int32_t L_380 = V_5;
		int32_t L_381 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_380>>(int32_t)3))) >= ((int32_t)L_381)))
		{
			goto IL_05c2;
		}
	}
	{
		int32_t L_382 = V_5;
		G_B59_0 = ((int32_t)((int32_t)L_382>>(int32_t)3));
		goto IL_05c4;
	}

IL_05c2:
	{
		int32_t L_383 = V_12;
		G_B59_0 = L_383;
	}

IL_05c4:
	{
		V_12 = G_B59_0;
		int32_t L_384 = V_7;
		int32_t L_385 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_384, (int32_t)L_385));
		int32_t L_386 = V_6;
		int32_t L_387 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_386, (int32_t)L_387));
		int32_t L_388 = V_5;
		int32_t L_389 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_388, (int32_t)((int32_t)((int32_t)L_389<<(int32_t)3))));
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_390 = ___s6;
		int32_t L_391 = V_4;
		L_390->set_bitb_12(L_391);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_392 = ___s6;
		int32_t L_393 = V_5;
		L_392->set_bitk_11(L_393);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_394 = ___z7;
		int32_t L_395 = V_7;
		L_394->set_AvailableBytesIn_2(L_395);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_396 = ___z7;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_397 = L_396;
		int64_t L_398 = L_397->get_TotalBytesIn_3();
		int32_t L_399 = V_6;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_400 = ___z7;
		int32_t L_401 = L_400->get_NextIn_1();
		L_397->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_398, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_399, (int32_t)L_401)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_402 = ___z7;
		int32_t L_403 = V_6;
		L_402->set_NextIn_1(L_403);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_404 = ___s6;
		int32_t L_405 = V_8;
		L_404->set_writeAt_17(L_405);
		return ((int32_t)-3);
	}

IL_0626:
	{
		goto IL_00fb;
	}

IL_062b:
	{
		int32_t L_406 = V_9;
		if ((((int32_t)L_406) < ((int32_t)((int32_t)258))))
		{
			goto IL_0640;
		}
	}
	{
		int32_t L_407 = V_7;
		if ((((int32_t)L_407) >= ((int32_t)((int32_t)10))))
		{
			goto IL_006a;
		}
	}

IL_0640:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_408 = ___z7;
		int32_t L_409 = L_408->get_AvailableBytesIn_2();
		int32_t L_410 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_409, (int32_t)L_410));
		int32_t L_411 = V_5;
		int32_t L_412 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_411>>(int32_t)3))) >= ((int32_t)L_412)))
		{
			goto IL_0660;
		}
	}
	{
		int32_t L_413 = V_5;
		G_B66_0 = ((int32_t)((int32_t)L_413>>(int32_t)3));
		goto IL_0662;
	}

IL_0660:
	{
		int32_t L_414 = V_12;
		G_B66_0 = L_414;
	}

IL_0662:
	{
		V_12 = G_B66_0;
		int32_t L_415 = V_7;
		int32_t L_416 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_415, (int32_t)L_416));
		int32_t L_417 = V_6;
		int32_t L_418 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_417, (int32_t)L_418));
		int32_t L_419 = V_5;
		int32_t L_420 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_419, (int32_t)((int32_t)((int32_t)L_420<<(int32_t)3))));
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_421 = ___s6;
		int32_t L_422 = V_4;
		L_421->set_bitb_12(L_422);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_423 = ___s6;
		int32_t L_424 = V_5;
		L_423->set_bitk_11(L_424);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_425 = ___z7;
		int32_t L_426 = V_7;
		L_425->set_AvailableBytesIn_2(L_426);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_427 = ___z7;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_428 = L_427;
		int64_t L_429 = L_428->get_TotalBytesIn_3();
		int32_t L_430 = V_6;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_431 = ___z7;
		int32_t L_432 = L_431->get_NextIn_1();
		L_428->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_429, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_430, (int32_t)L_432)))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_433 = ___z7;
		int32_t L_434 = V_6;
		L_433->set_NextIn_1(L_434);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_435 = ___s6;
		int32_t L_436 = V_8;
		L_435->set_writeAt_17(L_436);
		return 0;
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
// System.Void Pathfinding.Ionic.Zlib.InflateManager::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateManager__ctor_m08651E1394D7BD5CB3633639050FC9401ED71D98 (InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * __this, bool ___expectRfc1950HeaderBytes0, const RuntimeMethod* method)
{
	{
		__this->set__handleRfc1950HeaderBytes_6((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___expectRfc1950HeaderBytes0;
		__this->set__handleRfc1950HeaderBytes_6(L_0);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InflateManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateManager__cctor_m09D75128E09AE5F2BC909222DE6EEC18F59079C5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)255));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)255));
		((InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4_StaticFields*)il2cpp_codegen_static_fields_for(InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4_il2cpp_TypeInfo_var))->set_mark_9(L_2);
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.InflateManager::get_HandleRfc1950HeaderBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InflateManager_get_HandleRfc1950HeaderBytes_m9F7D527D3E200FF2DC870B002D4A49842355D411 (InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__handleRfc1950HeaderBytes_6();
		return L_0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Reset_mFBC1ADE6CFF86551FAADFE32BB7D0193BB4A2452 (InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * G_B2_0 = NULL;
	InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * G_B3_1 = NULL;
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_0 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_1 = __this->get__codec_1();
		int64_t L_2 = ((int64_t)((int64_t)0));
		V_0 = L_2;
		L_1->set_TotalBytesOut_7(L_2);
		int64_t L_3 = V_0;
		L_0->set_TotalBytesIn_3(L_3);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_4 = __this->get__codec_1();
		L_4->set_Message_8((String_t*)NULL);
		bool L_5;
		L_5 = InflateManager_get_HandleRfc1950HeaderBytes_m9F7D527D3E200FF2DC870B002D4A49842355D411_inline(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_5)
		{
			G_B2_0 = __this;
			goto IL_0039;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0039:
	{
		G_B3_0 = 7;
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		G_B3_1->set_mode_0(G_B3_0);
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_6 = __this->get_blocks_8();
		uint32_t L_7;
		L_7 = InflateBlocks_Reset_m0004AF627D19ADFC96D2E3B49336BFD200DA8605(L_6, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_End_mC7928365BBB236D2D226790E4A52DDD3DA4DB87A (InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * __this, const RuntimeMethod* method)
{
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_0 = __this->get_blocks_8();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_1 = __this->get_blocks_8();
		InflateBlocks_Free_mF7252CE952F18E4A108114591CD821372E0C2CBF(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		__this->set_blocks_8((InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB *)NULL);
		return 0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Initialize_m52A306A9BB15601ED56BCC4425CF3A63BAFC5B3C (InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * __this, ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * ___codec0, int32_t ___w1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * G_B5_0 = NULL;
	InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * G_B5_1 = NULL;
	ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * G_B4_0 = NULL;
	InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * G_B4_1 = NULL;
	InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * G_B6_0 = NULL;
	ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * G_B6_1 = NULL;
	InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * G_B6_2 = NULL;
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_0 = ___codec0;
		__this->set__codec_1(L_0);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_1 = __this->get__codec_1();
		L_1->set_Message_8((String_t*)NULL);
		__this->set_blocks_8((InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB *)NULL);
		int32_t L_2 = ___w1;
		if ((((int32_t)L_2) < ((int32_t)8)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___w1;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)15))))
		{
			goto IL_003b;
		}
	}

IL_0029:
	{
		int32_t L_4;
		L_4 = InflateManager_End_mC7928365BBB236D2D226790E4A52DDD3DA4DB87A(__this, /*hidden argument*/NULL);
		ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 * L_5 = (ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m445658A9E8EB52F8F293F14D2CFA83E23577F534(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31F5FB1C38A44C5FB3A50E292D89F851681E4A86)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflateManager_Initialize_m52A306A9BB15601ED56BCC4425CF3A63BAFC5B3C_RuntimeMethod_var)));
	}

IL_003b:
	{
		int32_t L_6 = ___w1;
		__this->set_wbits_7(L_6);
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_7 = ___codec0;
		bool L_8;
		L_8 = InflateManager_get_HandleRfc1950HeaderBytes_m9F7D527D3E200FF2DC870B002D4A49842355D411_inline(__this, /*hidden argument*/NULL);
		G_B4_0 = L_7;
		G_B4_1 = __this;
		if (!L_8)
		{
			G_B5_0 = L_7;
			G_B5_1 = __this;
			goto IL_0055;
		}
	}
	{
		G_B6_0 = __this;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = ((InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 *)(NULL));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0056:
	{
		int32_t L_9 = ___w1;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_10 = (InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB *)il2cpp_codegen_object_new(InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB_il2cpp_TypeInfo_var);
		InflateBlocks__ctor_mD0CE44F5D81A1F6BC11EA4558017B571FF60F639(L_10, G_B6_1, G_B6_0, ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)31))))), /*hidden argument*/NULL);
		G_B6_2->set_blocks_8(L_10);
		int32_t L_11;
		L_11 = InflateManager_Reset_mFBC1ADE6CFF86551FAADFE32BB7D0193BB4A2452(__this, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Inflate(Pathfinding.Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Inflate_mB5DF4C3E1ACF1B475A4C22F51A92C133B8DABFC5 (InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0659AF070440111C5138C5C2CF237FE1D199797C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral988F3366E12D654A4876B3640459880EFD9315D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * G_B18_0 = NULL;
	InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * G_B19_1 = NULL;
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_0 = __this->get__codec_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0->get_InputBuffer_0();
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 * L_2 = (ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m445658A9E8EB52F8F293F14D2CFA83E23577F534(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7897EC9A2D8A7F35E69F42F0A932E1E9320CB2DA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflateManager_Inflate_mB5DF4C3E1ACF1B475A4C22F51A92C133B8DABFC5_RuntimeMethod_var)));
	}

IL_001b:
	{
		V_1 = 0;
		V_2 = ((int32_t)-5);
	}

IL_0020:
	{
		int32_t L_3 = __this->get_mode_0();
		V_3 = L_3;
		int32_t L_4 = V_3;
		switch (L_4)
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_016a;
			}
			case 2:
			{
				goto IL_0221;
			}
			case 3:
			{
				goto IL_029e;
			}
			case 4:
			{
				goto IL_031f;
			}
			case 5:
			{
				goto IL_039f;
			}
			case 6:
			{
				goto IL_042b;
			}
			case 7:
			{
				goto IL_044d;
			}
			case 8:
			{
				goto IL_04bb;
			}
			case 9:
			{
				goto IL_0539;
			}
			case 10:
			{
				goto IL_05bb;
			}
			case 11:
			{
				goto IL_063c;
			}
			case 12:
			{
				goto IL_06ed;
			}
			case 13:
			{
				goto IL_06ef;
			}
		}
	}
	{
		goto IL_070a;
	}

IL_006a:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_5 = __this->get__codec_1();
		int32_t L_6 = L_5->get_AvailableBytesIn_2();
		if (L_6)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_7 = V_2;
		return L_7;
	}

IL_007c:
	{
		int32_t L_8 = V_1;
		V_2 = L_8;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_9 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_10 = L_9;
		int32_t L_11 = L_10->get_AvailableBytesIn_2();
		L_10->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_12 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_13 = L_12;
		int64_t L_14 = L_13->get_TotalBytesIn_3();
		L_13->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_14, (int64_t)((int64_t)((int64_t)1)))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_15 = __this->get__codec_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = L_15->get_InputBuffer_0();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_17 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_18 = L_17;
		int32_t L_19 = L_18->get_NextIn_1();
		int32_t L_20 = L_19;
		V_4 = L_20;
		L_18->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		uint8_t L_24 = L_23;
		V_4 = L_24;
		__this->set_method_2(L_24);
		int32_t L_25 = V_4;
		if ((((int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)15)))) == ((int32_t)8)))
		{
			goto IL_0111;
		}
	}
	{
		__this->set_mode_0(((int32_t)13));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_26 = __this->get__codec_1();
		int32_t L_27 = __this->get_method_2();
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral988F3366E12D654A4876B3640459880EFD9315D1, L_29, /*hidden argument*/NULL);
		L_26->set_Message_8(L_30);
		__this->set_marker_5(5);
		goto IL_0715;
	}

IL_0111:
	{
		int32_t L_31 = __this->get_method_2();
		int32_t L_32 = __this->get_wbits_7();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_31>>(int32_t)4)), (int32_t)8))) <= ((int32_t)L_32)))
		{
			goto IL_015e;
		}
	}
	{
		__this->set_mode_0(((int32_t)13));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_33 = __this->get__codec_1();
		int32_t L_34 = __this->get_method_2();
		int32_t L_35 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_34>>(int32_t)4)), (int32_t)8));
		RuntimeObject * L_36 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral0659AF070440111C5138C5C2CF237FE1D199797C, L_36, /*hidden argument*/NULL);
		L_33->set_Message_8(L_37);
		__this->set_marker_5(5);
		goto IL_0715;
	}

IL_015e:
	{
		__this->set_mode_0(1);
		goto IL_0715;
	}

IL_016a:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_38 = __this->get__codec_1();
		int32_t L_39 = L_38->get_AvailableBytesIn_2();
		if (L_39)
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_40 = V_2;
		return L_40;
	}

IL_017c:
	{
		int32_t L_41 = V_1;
		V_2 = L_41;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_42 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_43 = L_42;
		int32_t L_44 = L_43->get_AvailableBytesIn_2();
		L_43->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1)));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_45 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_46 = L_45;
		int64_t L_47 = L_46->get_TotalBytesIn_3();
		L_46->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_47, (int64_t)((int64_t)((int64_t)1)))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_48 = __this->get__codec_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = L_48->get_InputBuffer_0();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_50 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_51 = L_50;
		int32_t L_52 = L_51->get_NextIn_1();
		int32_t L_53 = L_52;
		V_4 = L_53;
		L_51->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1)));
		int32_t L_54 = V_4;
		int32_t L_55 = L_54;
		uint8_t L_56 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int32_t)((int32_t)L_56&(int32_t)((int32_t)255)));
		int32_t L_57 = __this->get_method_2();
		int32_t L_58 = V_0;
		if (!((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_57<<(int32_t)8)), (int32_t)L_58))%(int32_t)((int32_t)31))))
		{
			goto IL_0206;
		}
	}
	{
		__this->set_mode_0(((int32_t)13));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_59 = __this->get__codec_1();
		L_59->set_Message_8(_stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417);
		__this->set_marker_5(5);
		goto IL_0715;
	}

IL_0206:
	{
		int32_t L_60 = V_0;
		G_B17_0 = __this;
		if (((int32_t)((int32_t)L_60&(int32_t)((int32_t)32))))
		{
			G_B18_0 = __this;
			goto IL_0216;
		}
	}
	{
		G_B19_0 = 7;
		G_B19_1 = G_B17_0;
		goto IL_0217;
	}

IL_0216:
	{
		G_B19_0 = 2;
		G_B19_1 = G_B18_0;
	}

IL_0217:
	{
		G_B19_1->set_mode_0(G_B19_0);
		goto IL_0715;
	}

IL_0221:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_61 = __this->get__codec_1();
		int32_t L_62 = L_61->get_AvailableBytesIn_2();
		if (L_62)
		{
			goto IL_0233;
		}
	}
	{
		int32_t L_63 = V_2;
		return L_63;
	}

IL_0233:
	{
		int32_t L_64 = V_1;
		V_2 = L_64;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_65 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_66 = L_65;
		int32_t L_67 = L_66->get_AvailableBytesIn_2();
		L_66->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1)));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_68 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_69 = L_68;
		int64_t L_70 = L_69->get_TotalBytesIn_3();
		L_69->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_70, (int64_t)((int64_t)((int64_t)1)))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_71 = __this->get__codec_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_72 = L_71->get_InputBuffer_0();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_73 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_74 = L_73;
		int32_t L_75 = L_74->get_NextIn_1();
		int32_t L_76 = L_75;
		V_4 = L_76;
		L_74->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1)));
		int32_t L_77 = V_4;
		int32_t L_78 = L_77;
		uint8_t L_79 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		__this->set_expectedCheck_4(((int32_t)((uint32_t)((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_79<<(int32_t)((int32_t)24)))))&(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)-16777216))))))))));
		__this->set_mode_0(3);
		goto IL_0715;
	}

IL_029e:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_80 = __this->get__codec_1();
		int32_t L_81 = L_80->get_AvailableBytesIn_2();
		if (L_81)
		{
			goto IL_02b0;
		}
	}
	{
		int32_t L_82 = V_2;
		return L_82;
	}

IL_02b0:
	{
		int32_t L_83 = V_1;
		V_2 = L_83;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_84 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_85 = L_84;
		int32_t L_86 = L_85->get_AvailableBytesIn_2();
		L_85->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)1)));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_87 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_88 = L_87;
		int64_t L_89 = L_88->get_TotalBytesIn_3();
		L_88->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_89, (int64_t)((int64_t)((int64_t)1)))));
		uint32_t L_90 = __this->get_expectedCheck_4();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_91 = __this->get__codec_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_92 = L_91->get_InputBuffer_0();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_93 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_94 = L_93;
		int32_t L_95 = L_94->get_NextIn_1();
		int32_t L_96 = L_95;
		V_4 = L_96;
		L_94->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1)));
		int32_t L_97 = V_4;
		int32_t L_98 = L_97;
		uint8_t L_99 = (L_92)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_99<<(int32_t)((int32_t)16)))&(int32_t)((int32_t)16711680))))));
		__this->set_mode_0(4);
		goto IL_0715;
	}

IL_031f:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_100 = __this->get__codec_1();
		int32_t L_101 = L_100->get_AvailableBytesIn_2();
		if (L_101)
		{
			goto IL_0331;
		}
	}
	{
		int32_t L_102 = V_2;
		return L_102;
	}

IL_0331:
	{
		int32_t L_103 = V_1;
		V_2 = L_103;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_104 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_105 = L_104;
		int32_t L_106 = L_105->get_AvailableBytesIn_2();
		L_105->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)1)));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_107 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_108 = L_107;
		int64_t L_109 = L_108->get_TotalBytesIn_3();
		L_108->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_109, (int64_t)((int64_t)((int64_t)1)))));
		uint32_t L_110 = __this->get_expectedCheck_4();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_111 = __this->get__codec_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_112 = L_111->get_InputBuffer_0();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_113 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_114 = L_113;
		int32_t L_115 = L_114->get_NextIn_1();
		int32_t L_116 = L_115;
		V_4 = L_116;
		L_114->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1)));
		int32_t L_117 = V_4;
		int32_t L_118 = L_117;
		uint8_t L_119 = (L_112)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_118));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_119<<(int32_t)8))&(int32_t)((int32_t)65280))))));
		__this->set_mode_0(5);
		goto IL_0715;
	}

IL_039f:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_120 = __this->get__codec_1();
		int32_t L_121 = L_120->get_AvailableBytesIn_2();
		if (L_121)
		{
			goto IL_03b1;
		}
	}
	{
		int32_t L_122 = V_2;
		return L_122;
	}

IL_03b1:
	{
		int32_t L_123 = V_1;
		V_2 = L_123;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_124 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_125 = L_124;
		int32_t L_126 = L_125->get_AvailableBytesIn_2();
		L_125->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_126, (int32_t)1)));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_127 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_128 = L_127;
		int64_t L_129 = L_128->get_TotalBytesIn_3();
		L_128->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_129, (int64_t)((int64_t)((int64_t)1)))));
		uint32_t L_130 = __this->get_expectedCheck_4();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_131 = __this->get__codec_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_132 = L_131->get_InputBuffer_0();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_133 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_134 = L_133;
		int32_t L_135 = L_134->get_NextIn_1();
		int32_t L_136 = L_135;
		V_4 = L_136;
		L_134->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1)));
		int32_t L_137 = V_4;
		int32_t L_138 = L_137;
		uint8_t L_139 = (L_132)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_138));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)((int32_t)((int32_t)L_139&(int32_t)((int32_t)255))))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_140 = __this->get__codec_1();
		uint32_t L_141 = __this->get_expectedCheck_4();
		L_140->set__Adler32_11(L_141);
		__this->set_mode_0(6);
		return 2;
	}

IL_042b:
	{
		__this->set_mode_0(((int32_t)13));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_142 = __this->get__codec_1();
		L_142->set_Message_8(_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		__this->set_marker_5(0);
		return ((int32_t)-2);
	}

IL_044d:
	{
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_143 = __this->get_blocks_8();
		int32_t L_144 = V_2;
		int32_t L_145;
		L_145 = InflateBlocks_Process_m64CF9B43E2600B7E5FC18DE3A9EA4FF4DD517E42(L_143, L_144, /*hidden argument*/NULL);
		V_2 = L_145;
		int32_t L_146 = V_2;
		if ((!(((uint32_t)L_146) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0476;
		}
	}
	{
		__this->set_mode_0(((int32_t)13));
		__this->set_marker_5(0);
		goto IL_0715;
	}

IL_0476:
	{
		int32_t L_147 = V_2;
		if (L_147)
		{
			goto IL_047e;
		}
	}
	{
		int32_t L_148 = V_1;
		V_2 = L_148;
	}

IL_047e:
	{
		int32_t L_149 = V_2;
		if ((((int32_t)L_149) == ((int32_t)1)))
		{
			goto IL_0487;
		}
	}
	{
		int32_t L_150 = V_2;
		return L_150;
	}

IL_0487:
	{
		int32_t L_151 = V_1;
		V_2 = L_151;
		InflateBlocks_t35AA0051D36A1EE3DC0A3B45485887897E11D3AB * L_152 = __this->get_blocks_8();
		uint32_t L_153;
		L_153 = InflateBlocks_Reset_m0004AF627D19ADFC96D2E3B49336BFD200DA8605(L_152, /*hidden argument*/NULL);
		__this->set_computedCheck_3(L_153);
		bool L_154;
		L_154 = InflateManager_get_HandleRfc1950HeaderBytes_m9F7D527D3E200FF2DC870B002D4A49842355D411_inline(__this, /*hidden argument*/NULL);
		if (L_154)
		{
			goto IL_04af;
		}
	}
	{
		__this->set_mode_0(((int32_t)12));
		return 1;
	}

IL_04af:
	{
		__this->set_mode_0(8);
		goto IL_0715;
	}

IL_04bb:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_155 = __this->get__codec_1();
		int32_t L_156 = L_155->get_AvailableBytesIn_2();
		if (L_156)
		{
			goto IL_04cd;
		}
	}
	{
		int32_t L_157 = V_2;
		return L_157;
	}

IL_04cd:
	{
		int32_t L_158 = V_1;
		V_2 = L_158;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_159 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_160 = L_159;
		int32_t L_161 = L_160->get_AvailableBytesIn_2();
		L_160->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_161, (int32_t)1)));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_162 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_163 = L_162;
		int64_t L_164 = L_163->get_TotalBytesIn_3();
		L_163->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_164, (int64_t)((int64_t)((int64_t)1)))));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_165 = __this->get__codec_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_166 = L_165->get_InputBuffer_0();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_167 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_168 = L_167;
		int32_t L_169 = L_168->get_NextIn_1();
		int32_t L_170 = L_169;
		V_4 = L_170;
		L_168->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)1)));
		int32_t L_171 = V_4;
		int32_t L_172 = L_171;
		uint8_t L_173 = (L_166)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_172));
		__this->set_expectedCheck_4(((int32_t)((uint32_t)((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_173<<(int32_t)((int32_t)24)))))&(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)-16777216))))))))));
		__this->set_mode_0(((int32_t)9));
		goto IL_0715;
	}

IL_0539:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_174 = __this->get__codec_1();
		int32_t L_175 = L_174->get_AvailableBytesIn_2();
		if (L_175)
		{
			goto IL_054b;
		}
	}
	{
		int32_t L_176 = V_2;
		return L_176;
	}

IL_054b:
	{
		int32_t L_177 = V_1;
		V_2 = L_177;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_178 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_179 = L_178;
		int32_t L_180 = L_179->get_AvailableBytesIn_2();
		L_179->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_180, (int32_t)1)));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_181 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_182 = L_181;
		int64_t L_183 = L_182->get_TotalBytesIn_3();
		L_182->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_183, (int64_t)((int64_t)((int64_t)1)))));
		uint32_t L_184 = __this->get_expectedCheck_4();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_185 = __this->get__codec_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_186 = L_185->get_InputBuffer_0();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_187 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_188 = L_187;
		int32_t L_189 = L_188->get_NextIn_1();
		int32_t L_190 = L_189;
		V_4 = L_190;
		L_188->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_190, (int32_t)1)));
		int32_t L_191 = V_4;
		int32_t L_192 = L_191;
		uint8_t L_193 = (L_186)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_192));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_184, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_193<<(int32_t)((int32_t)16)))&(int32_t)((int32_t)16711680))))));
		__this->set_mode_0(((int32_t)10));
		goto IL_0715;
	}

IL_05bb:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_194 = __this->get__codec_1();
		int32_t L_195 = L_194->get_AvailableBytesIn_2();
		if (L_195)
		{
			goto IL_05cd;
		}
	}
	{
		int32_t L_196 = V_2;
		return L_196;
	}

IL_05cd:
	{
		int32_t L_197 = V_1;
		V_2 = L_197;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_198 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_199 = L_198;
		int32_t L_200 = L_199->get_AvailableBytesIn_2();
		L_199->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_200, (int32_t)1)));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_201 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_202 = L_201;
		int64_t L_203 = L_202->get_TotalBytesIn_3();
		L_202->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_203, (int64_t)((int64_t)((int64_t)1)))));
		uint32_t L_204 = __this->get_expectedCheck_4();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_205 = __this->get__codec_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_206 = L_205->get_InputBuffer_0();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_207 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_208 = L_207;
		int32_t L_209 = L_208->get_NextIn_1();
		int32_t L_210 = L_209;
		V_4 = L_210;
		L_208->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_210, (int32_t)1)));
		int32_t L_211 = V_4;
		int32_t L_212 = L_211;
		uint8_t L_213 = (L_206)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_212));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_204, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_213<<(int32_t)8))&(int32_t)((int32_t)65280))))));
		__this->set_mode_0(((int32_t)11));
		goto IL_0715;
	}

IL_063c:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_214 = __this->get__codec_1();
		int32_t L_215 = L_214->get_AvailableBytesIn_2();
		if (L_215)
		{
			goto IL_064e;
		}
	}
	{
		int32_t L_216 = V_2;
		return L_216;
	}

IL_064e:
	{
		int32_t L_217 = V_1;
		V_2 = L_217;
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_218 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_219 = L_218;
		int32_t L_220 = L_219->get_AvailableBytesIn_2();
		L_219->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_220, (int32_t)1)));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_221 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_222 = L_221;
		int64_t L_223 = L_222->get_TotalBytesIn_3();
		L_222->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_223, (int64_t)((int64_t)((int64_t)1)))));
		uint32_t L_224 = __this->get_expectedCheck_4();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_225 = __this->get__codec_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_226 = L_225->get_InputBuffer_0();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_227 = __this->get__codec_1();
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_228 = L_227;
		int32_t L_229 = L_228->get_NextIn_1();
		int32_t L_230 = L_229;
		V_4 = L_230;
		L_228->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_230, (int32_t)1)));
		int32_t L_231 = V_4;
		int32_t L_232 = L_231;
		uint8_t L_233 = (L_226)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_232));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_224, (int32_t)((int32_t)((int32_t)L_233&(int32_t)((int32_t)255))))));
		uint32_t L_234 = __this->get_computedCheck_3();
		uint32_t L_235 = __this->get_expectedCheck_4();
		if ((((int32_t)L_234) == ((int32_t)L_235)))
		{
			goto IL_06e3;
		}
	}
	{
		__this->set_mode_0(((int32_t)13));
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_236 = __this->get__codec_1();
		L_236->set_Message_8(_stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40);
		__this->set_marker_5(5);
		goto IL_0715;
	}

IL_06e3:
	{
		__this->set_mode_0(((int32_t)12));
		return 1;
	}

IL_06ed:
	{
		return 1;
	}

IL_06ef:
	{
		ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27 * L_237 = __this->get__codec_1();
		String_t* L_238 = L_237->get_Message_8();
		String_t* L_239;
		L_239 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31FF32DD49EB95324AC3BBB26903BDBBB3D9DE53)), L_238, /*hidden argument*/NULL);
		ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 * L_240 = (ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m445658A9E8EB52F8F293F14D2CFA83E23577F534(L_240, L_239, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_240, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflateManager_Inflate_mB5DF4C3E1ACF1B475A4C22F51A92C133B8DABFC5_RuntimeMethod_var)));
	}

IL_070a:
	{
		ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 * L_241 = (ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m445658A9E8EB52F8F293F14D2CFA83E23577F534(L_241, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD94DFA59855436FE4E964729609DFFE5BDFF64A0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_241, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflateManager_Inflate_mB5DF4C3E1ACF1B475A4C22F51A92C133B8DABFC5_RuntimeMethod_var)));
	}

IL_0715:
	{
		goto IL_0020;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipProgressEventArgs_set_EntriesTotal_m9B759F9F81234EA5857012D0DAB667AFD7AC222C_inline (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__entriesTotal_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipProgressEventArgs_set_CurrentEntry_m696C96599ED44B6BD426D880ED02F552E5568F74_inline (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * ___value0, const RuntimeMethod* method)
{
	{
		ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D * L_0 = ___value0;
		__this->set__latestEntry_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t CRC32_get_TotalBytesRead_m53D21D053AD7FA39D9F77E6356EF7549CBB87812_inline (CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__TotalBytesRead_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_m2420C594D027E6D9DF7451799709A745102F53AA_inline (DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__WantRfc1950HeaderBytes_73();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipProgressEventArgs_set_ArchiveName_mC327D87BD4E328D49C656AB66DC24B326158F10B_inline (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__archiveName_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipProgressEventArgs_set_EventType_m3896585F34A49B78CC8EFC5D9A9F901BB12B5249_inline (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__flavor_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipProgressEventArgs_set_BytesTransferred_m39E2F33784CAEF8F8FB2E8D3C95E2F3EB0C91AA4_inline (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set__bytesTransferred_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipProgressEventArgs_set_TotalBytesToTransfer_mE16CD00C26FEBFB8EEA1EF3285EE3E61B0AE3D27_inline (ZipProgressEventArgs_t60B3778A0B57094DD3AF37954707DE8555E2B861 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set__totalBytesToTransfer_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GZipStream_get_Comment_mA704699D0769105965CFFF5F24D12E4FBDD55718_inline (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__Comment_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GZipStream_get_FileName_mBD624C5F107A207CB65CD7DBB0BC76B9121C7D69_inline (GZipStream_tB4EC8D694542A725E02E800945BC6472CFB11FF9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__FileName_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InflateManager_get_HandleRfc1950HeaderBytes_m9F7D527D3E200FF2DC870B002D4A49842355D411_inline (InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__handleRfc1950HeaderBytes_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_gshared_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
