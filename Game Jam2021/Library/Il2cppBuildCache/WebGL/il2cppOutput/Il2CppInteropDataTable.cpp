#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct Dictionary_2_tEDF82CA39C99F71E6BD94CC573219E7EE2E69ED3;
// System.EventHandler`1<Pathfinding.Ionic.Zip.AddProgressEventArgs>
struct EventHandler_1_t3970FEBAF7B67BBB47861133B3FF18D247630EED;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ExtractProgressEventArgs>
struct EventHandler_1_tB77CE0953CA3A60B94A10A5A61A63A55C61D2F12;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>
struct EventHandler_1_tD6797BE7E75448047E81C5366D6708961A8616C4;
// System.EventHandler`1<Pathfinding.Ionic.Zip.SaveProgressEventArgs>
struct EventHandler_1_tE80885BB62A759BA3431C67B14A3E3440367EB95;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ZipErrorEventArgs>
struct EventHandler_1_t70D7DA96AFEB7D7BABF13C2251F3C84126297360;
// System.Collections.Generic.List`1<Pathfinding.Ionic.Zip.ZipEntry>
struct List_1_t94C9FE5489DF7F755733C9CFBFB7FAA934C28F24;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// Pathfinding.Ionic.Zip.CloseDelegate
struct CloseDelegate_t197F69FB43210433EE489E0E6040E388F16FD992;
// Pathfinding.Ionic.Zlib.DeflateManager
struct DeflateManager_t0618AC1014C6AF096F1FA2156F82FB4F303E98CF;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Pathfinding.Ionic.Zlib.InflateManager
struct InflateManager_t4C0EEADC1F816146CCF218E8E61A1755196879C4;
// Pathfinding.Ionic.Zip.OpenDelegate
struct OpenDelegate_t4FD73AF931B565F95888C2D3FE60F83302DC0B3E;
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_tBC2B066ED9A60F3554D7361F5F7F903D3D823374;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Pathfinding.Ionic.Zip.WriteDelegate
struct WriteDelegate_t677A3857696D3DC5B0EEA8FF57EFE7BC77C9F724;
// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_t7F1BF50F08858ADF2C7979A2BE953EB09EBC4E41;
// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t788C8ABE5C64BB7812E5905890E8F18907D46961;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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


// Pathfinding.Ionic.Zip.Zip64Option
struct Zip64Option_tFAF1755132EC96E3DD9D255260515F66D6026226 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.Zip64Option::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Zip64Option_tFAF1755132EC96E3DD9D255260515F66D6026226, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_lengthOfReadStream
	int64_t ____lengthOfReadStream_0;
	// System.IO.TextWriter Pathfinding.Ionic.Zip.ZipFile::_StatusMessageTextWriter
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ____StatusMessageTextWriter_1;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_CaseSensitiveRetrieval
	bool ____CaseSensitiveRetrieval_2;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::_readstream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____readstream_3;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::_writestream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____writestream_4;
	// System.UInt16 Pathfinding.Ionic.Zip.ZipFile::_versionMadeBy
	uint16_t ____versionMadeBy_5;
	// System.UInt16 Pathfinding.Ionic.Zip.ZipFile::_versionNeededToExtract
	uint16_t ____versionNeededToExtract_6;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_diskNumberWithCd
	uint32_t ____diskNumberWithCd_7;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_maxOutputSegmentSize
	int32_t ____maxOutputSegmentSize_8;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_numberOfSegmentsForMostRecentSave
	uint32_t ____numberOfSegmentsForMostRecentSave_9;
	// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipFile::_zipErrorAction
	int32_t ____zipErrorAction_10;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_disposed
	bool ____disposed_11;
	// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::_entries
	Dictionary_2_tEDF82CA39C99F71E6BD94CC573219E7EE2E69ED3 * ____entries_12;
	// System.Collections.Generic.List`1<Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::_zipEntriesAsList
	List_1_t94C9FE5489DF7F755733C9CFBFB7FAA934C28F24 * ____zipEntriesAsList_13;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_name
	String_t* ____name_14;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_readName
	String_t* ____readName_15;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_Comment
	String_t* ____Comment_16;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_Password
	String_t* ____Password_17;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_emitNtfsTimes
	bool ____emitNtfsTimes_18;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_emitUnixTimes
	bool ____emitUnixTimes_19;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipFile::_Strategy
	int32_t ____Strategy_20;
	// Pathfinding.Ionic.Zip.CompressionMethod Pathfinding.Ionic.Zip.ZipFile::_compressionMethod
	int32_t ____compressionMethod_21;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_fileAlreadyExists
	bool ____fileAlreadyExists_22;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_temporaryFileName
	String_t* ____temporaryFileName_23;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_contentsChanged
	bool ____contentsChanged_24;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_hasBeenSaved
	bool ____hasBeenSaved_25;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_TempFileFolder
	String_t* ____TempFileFolder_26;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_ReadStreamIsOurs
	bool ____ReadStreamIsOurs_27;
	// System.Object Pathfinding.Ionic.Zip.ZipFile::LOCK
	RuntimeObject * ___LOCK_28;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_saveOperationCanceled
	bool ____saveOperationCanceled_29;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_extractOperationCanceled
	bool ____extractOperationCanceled_30;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_addOperationCanceled
	bool ____addOperationCanceled_31;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipFile::_Encryption
	int32_t ____Encryption_32;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_JustSaved
	bool ____JustSaved_33;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_locEndOfCDS
	int64_t ____locEndOfCDS_34;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_OffsetOfCentralDirectory
	uint32_t ____OffsetOfCentralDirectory_35;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_OffsetOfCentralDirectory64
	int64_t ____OffsetOfCentralDirectory64_36;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipFile::_OutputUsesZip64
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ____OutputUsesZip64_37;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_inExtractAll
	bool ____inExtractAll_38;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::_alternateEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____alternateEncoding_40;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipFile::_alternateEncodingUsage
	int32_t ____alternateEncodingUsage_41;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_BufferSize
	int32_t ____BufferSize_42;
	// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream Pathfinding.Ionic.Zip.ZipFile::ParallelDeflater
	ParallelDeflateOutputStream_tBC2B066ED9A60F3554D7361F5F7F903D3D823374 * ___ParallelDeflater_43;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_ParallelDeflateThreshold
	int64_t ____ParallelDeflateThreshold_44;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_maxBufferPairs
	int32_t ____maxBufferPairs_45;
	// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipFile::_zip64
	int32_t ____zip64_46;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_SavingSfx
	bool ____SavingSfx_47;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.SaveProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::SaveProgress
	EventHandler_1_tE80885BB62A759BA3431C67B14A3E3440367EB95 * ___SaveProgress_49;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::ReadProgress
	EventHandler_1_tD6797BE7E75448047E81C5366D6708961A8616C4 * ___ReadProgress_50;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ExtractProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::ExtractProgress
	EventHandler_1_tB77CE0953CA3A60B94A10A5A61A63A55C61D2F12 * ___ExtractProgress_51;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.AddProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::AddProgress
	EventHandler_1_t3970FEBAF7B67BBB47861133B3FF18D247630EED * ___AddProgress_52;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ZipErrorEventArgs> Pathfinding.Ionic.Zip.ZipFile::ZipError
	EventHandler_1_t70D7DA96AFEB7D7BABF13C2251F3C84126297360 * ___ZipError_53;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<FullScan>k__BackingField
	bool ___U3CFullScanU3Ek__BackingField_54;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<SortEntriesBeforeSaving>k__BackingField
	bool ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<AddDirectoryWillTraverseReparsePoints>k__BackingField
	bool ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_57;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<FlattenFoldersOnExtract>k__BackingField
	bool ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipFile::<CompressionLevel>k__BackingField
	int32_t ___U3CCompressionLevelU3Ek__BackingField_59;
	// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipFile::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_60;
	// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipFile::<SetCompression>k__BackingField
	SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01 * ___U3CSetCompressionU3Ek__BackingField_61;

public:
	inline static int32_t get_offset_of__lengthOfReadStream_0() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____lengthOfReadStream_0)); }
	inline int64_t get__lengthOfReadStream_0() const { return ____lengthOfReadStream_0; }
	inline int64_t* get_address_of__lengthOfReadStream_0() { return &____lengthOfReadStream_0; }
	inline void set__lengthOfReadStream_0(int64_t value)
	{
		____lengthOfReadStream_0 = value;
	}

	inline static int32_t get_offset_of__StatusMessageTextWriter_1() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____StatusMessageTextWriter_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get__StatusMessageTextWriter_1() const { return ____StatusMessageTextWriter_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of__StatusMessageTextWriter_1() { return &____StatusMessageTextWriter_1; }
	inline void set__StatusMessageTextWriter_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		____StatusMessageTextWriter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____StatusMessageTextWriter_1), (void*)value);
	}

	inline static int32_t get_offset_of__CaseSensitiveRetrieval_2() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____CaseSensitiveRetrieval_2)); }
	inline bool get__CaseSensitiveRetrieval_2() const { return ____CaseSensitiveRetrieval_2; }
	inline bool* get_address_of__CaseSensitiveRetrieval_2() { return &____CaseSensitiveRetrieval_2; }
	inline void set__CaseSensitiveRetrieval_2(bool value)
	{
		____CaseSensitiveRetrieval_2 = value;
	}

	inline static int32_t get_offset_of__readstream_3() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____readstream_3)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__readstream_3() const { return ____readstream_3; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__readstream_3() { return &____readstream_3; }
	inline void set__readstream_3(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____readstream_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____readstream_3), (void*)value);
	}

	inline static int32_t get_offset_of__writestream_4() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____writestream_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__writestream_4() const { return ____writestream_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__writestream_4() { return &____writestream_4; }
	inline void set__writestream_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____writestream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writestream_4), (void*)value);
	}

	inline static int32_t get_offset_of__versionMadeBy_5() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____versionMadeBy_5)); }
	inline uint16_t get__versionMadeBy_5() const { return ____versionMadeBy_5; }
	inline uint16_t* get_address_of__versionMadeBy_5() { return &____versionMadeBy_5; }
	inline void set__versionMadeBy_5(uint16_t value)
	{
		____versionMadeBy_5 = value;
	}

	inline static int32_t get_offset_of__versionNeededToExtract_6() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____versionNeededToExtract_6)); }
	inline uint16_t get__versionNeededToExtract_6() const { return ____versionNeededToExtract_6; }
	inline uint16_t* get_address_of__versionNeededToExtract_6() { return &____versionNeededToExtract_6; }
	inline void set__versionNeededToExtract_6(uint16_t value)
	{
		____versionNeededToExtract_6 = value;
	}

	inline static int32_t get_offset_of__diskNumberWithCd_7() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____diskNumberWithCd_7)); }
	inline uint32_t get__diskNumberWithCd_7() const { return ____diskNumberWithCd_7; }
	inline uint32_t* get_address_of__diskNumberWithCd_7() { return &____diskNumberWithCd_7; }
	inline void set__diskNumberWithCd_7(uint32_t value)
	{
		____diskNumberWithCd_7 = value;
	}

	inline static int32_t get_offset_of__maxOutputSegmentSize_8() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____maxOutputSegmentSize_8)); }
	inline int32_t get__maxOutputSegmentSize_8() const { return ____maxOutputSegmentSize_8; }
	inline int32_t* get_address_of__maxOutputSegmentSize_8() { return &____maxOutputSegmentSize_8; }
	inline void set__maxOutputSegmentSize_8(int32_t value)
	{
		____maxOutputSegmentSize_8 = value;
	}

	inline static int32_t get_offset_of__numberOfSegmentsForMostRecentSave_9() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____numberOfSegmentsForMostRecentSave_9)); }
	inline uint32_t get__numberOfSegmentsForMostRecentSave_9() const { return ____numberOfSegmentsForMostRecentSave_9; }
	inline uint32_t* get_address_of__numberOfSegmentsForMostRecentSave_9() { return &____numberOfSegmentsForMostRecentSave_9; }
	inline void set__numberOfSegmentsForMostRecentSave_9(uint32_t value)
	{
		____numberOfSegmentsForMostRecentSave_9 = value;
	}

	inline static int32_t get_offset_of__zipErrorAction_10() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____zipErrorAction_10)); }
	inline int32_t get__zipErrorAction_10() const { return ____zipErrorAction_10; }
	inline int32_t* get_address_of__zipErrorAction_10() { return &____zipErrorAction_10; }
	inline void set__zipErrorAction_10(int32_t value)
	{
		____zipErrorAction_10 = value;
	}

	inline static int32_t get_offset_of__disposed_11() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____disposed_11)); }
	inline bool get__disposed_11() const { return ____disposed_11; }
	inline bool* get_address_of__disposed_11() { return &____disposed_11; }
	inline void set__disposed_11(bool value)
	{
		____disposed_11 = value;
	}

	inline static int32_t get_offset_of__entries_12() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____entries_12)); }
	inline Dictionary_2_tEDF82CA39C99F71E6BD94CC573219E7EE2E69ED3 * get__entries_12() const { return ____entries_12; }
	inline Dictionary_2_tEDF82CA39C99F71E6BD94CC573219E7EE2E69ED3 ** get_address_of__entries_12() { return &____entries_12; }
	inline void set__entries_12(Dictionary_2_tEDF82CA39C99F71E6BD94CC573219E7EE2E69ED3 * value)
	{
		____entries_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entries_12), (void*)value);
	}

	inline static int32_t get_offset_of__zipEntriesAsList_13() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____zipEntriesAsList_13)); }
	inline List_1_t94C9FE5489DF7F755733C9CFBFB7FAA934C28F24 * get__zipEntriesAsList_13() const { return ____zipEntriesAsList_13; }
	inline List_1_t94C9FE5489DF7F755733C9CFBFB7FAA934C28F24 ** get_address_of__zipEntriesAsList_13() { return &____zipEntriesAsList_13; }
	inline void set__zipEntriesAsList_13(List_1_t94C9FE5489DF7F755733C9CFBFB7FAA934C28F24 * value)
	{
		____zipEntriesAsList_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____zipEntriesAsList_13), (void*)value);
	}

	inline static int32_t get_offset_of__name_14() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____name_14)); }
	inline String_t* get__name_14() const { return ____name_14; }
	inline String_t** get_address_of__name_14() { return &____name_14; }
	inline void set__name_14(String_t* value)
	{
		____name_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_14), (void*)value);
	}

	inline static int32_t get_offset_of__readName_15() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____readName_15)); }
	inline String_t* get__readName_15() const { return ____readName_15; }
	inline String_t** get_address_of__readName_15() { return &____readName_15; }
	inline void set__readName_15(String_t* value)
	{
		____readName_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____readName_15), (void*)value);
	}

	inline static int32_t get_offset_of__Comment_16() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____Comment_16)); }
	inline String_t* get__Comment_16() const { return ____Comment_16; }
	inline String_t** get_address_of__Comment_16() { return &____Comment_16; }
	inline void set__Comment_16(String_t* value)
	{
		____Comment_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Comment_16), (void*)value);
	}

	inline static int32_t get_offset_of__Password_17() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____Password_17)); }
	inline String_t* get__Password_17() const { return ____Password_17; }
	inline String_t** get_address_of__Password_17() { return &____Password_17; }
	inline void set__Password_17(String_t* value)
	{
		____Password_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Password_17), (void*)value);
	}

	inline static int32_t get_offset_of__emitNtfsTimes_18() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____emitNtfsTimes_18)); }
	inline bool get__emitNtfsTimes_18() const { return ____emitNtfsTimes_18; }
	inline bool* get_address_of__emitNtfsTimes_18() { return &____emitNtfsTimes_18; }
	inline void set__emitNtfsTimes_18(bool value)
	{
		____emitNtfsTimes_18 = value;
	}

	inline static int32_t get_offset_of__emitUnixTimes_19() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____emitUnixTimes_19)); }
	inline bool get__emitUnixTimes_19() const { return ____emitUnixTimes_19; }
	inline bool* get_address_of__emitUnixTimes_19() { return &____emitUnixTimes_19; }
	inline void set__emitUnixTimes_19(bool value)
	{
		____emitUnixTimes_19 = value;
	}

	inline static int32_t get_offset_of__Strategy_20() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____Strategy_20)); }
	inline int32_t get__Strategy_20() const { return ____Strategy_20; }
	inline int32_t* get_address_of__Strategy_20() { return &____Strategy_20; }
	inline void set__Strategy_20(int32_t value)
	{
		____Strategy_20 = value;
	}

	inline static int32_t get_offset_of__compressionMethod_21() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____compressionMethod_21)); }
	inline int32_t get__compressionMethod_21() const { return ____compressionMethod_21; }
	inline int32_t* get_address_of__compressionMethod_21() { return &____compressionMethod_21; }
	inline void set__compressionMethod_21(int32_t value)
	{
		____compressionMethod_21 = value;
	}

	inline static int32_t get_offset_of__fileAlreadyExists_22() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____fileAlreadyExists_22)); }
	inline bool get__fileAlreadyExists_22() const { return ____fileAlreadyExists_22; }
	inline bool* get_address_of__fileAlreadyExists_22() { return &____fileAlreadyExists_22; }
	inline void set__fileAlreadyExists_22(bool value)
	{
		____fileAlreadyExists_22 = value;
	}

	inline static int32_t get_offset_of__temporaryFileName_23() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____temporaryFileName_23)); }
	inline String_t* get__temporaryFileName_23() const { return ____temporaryFileName_23; }
	inline String_t** get_address_of__temporaryFileName_23() { return &____temporaryFileName_23; }
	inline void set__temporaryFileName_23(String_t* value)
	{
		____temporaryFileName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____temporaryFileName_23), (void*)value);
	}

	inline static int32_t get_offset_of__contentsChanged_24() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____contentsChanged_24)); }
	inline bool get__contentsChanged_24() const { return ____contentsChanged_24; }
	inline bool* get_address_of__contentsChanged_24() { return &____contentsChanged_24; }
	inline void set__contentsChanged_24(bool value)
	{
		____contentsChanged_24 = value;
	}

	inline static int32_t get_offset_of__hasBeenSaved_25() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____hasBeenSaved_25)); }
	inline bool get__hasBeenSaved_25() const { return ____hasBeenSaved_25; }
	inline bool* get_address_of__hasBeenSaved_25() { return &____hasBeenSaved_25; }
	inline void set__hasBeenSaved_25(bool value)
	{
		____hasBeenSaved_25 = value;
	}

	inline static int32_t get_offset_of__TempFileFolder_26() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____TempFileFolder_26)); }
	inline String_t* get__TempFileFolder_26() const { return ____TempFileFolder_26; }
	inline String_t** get_address_of__TempFileFolder_26() { return &____TempFileFolder_26; }
	inline void set__TempFileFolder_26(String_t* value)
	{
		____TempFileFolder_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____TempFileFolder_26), (void*)value);
	}

	inline static int32_t get_offset_of__ReadStreamIsOurs_27() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____ReadStreamIsOurs_27)); }
	inline bool get__ReadStreamIsOurs_27() const { return ____ReadStreamIsOurs_27; }
	inline bool* get_address_of__ReadStreamIsOurs_27() { return &____ReadStreamIsOurs_27; }
	inline void set__ReadStreamIsOurs_27(bool value)
	{
		____ReadStreamIsOurs_27 = value;
	}

	inline static int32_t get_offset_of_LOCK_28() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___LOCK_28)); }
	inline RuntimeObject * get_LOCK_28() const { return ___LOCK_28; }
	inline RuntimeObject ** get_address_of_LOCK_28() { return &___LOCK_28; }
	inline void set_LOCK_28(RuntimeObject * value)
	{
		___LOCK_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LOCK_28), (void*)value);
	}

	inline static int32_t get_offset_of__saveOperationCanceled_29() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____saveOperationCanceled_29)); }
	inline bool get__saveOperationCanceled_29() const { return ____saveOperationCanceled_29; }
	inline bool* get_address_of__saveOperationCanceled_29() { return &____saveOperationCanceled_29; }
	inline void set__saveOperationCanceled_29(bool value)
	{
		____saveOperationCanceled_29 = value;
	}

	inline static int32_t get_offset_of__extractOperationCanceled_30() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____extractOperationCanceled_30)); }
	inline bool get__extractOperationCanceled_30() const { return ____extractOperationCanceled_30; }
	inline bool* get_address_of__extractOperationCanceled_30() { return &____extractOperationCanceled_30; }
	inline void set__extractOperationCanceled_30(bool value)
	{
		____extractOperationCanceled_30 = value;
	}

	inline static int32_t get_offset_of__addOperationCanceled_31() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____addOperationCanceled_31)); }
	inline bool get__addOperationCanceled_31() const { return ____addOperationCanceled_31; }
	inline bool* get_address_of__addOperationCanceled_31() { return &____addOperationCanceled_31; }
	inline void set__addOperationCanceled_31(bool value)
	{
		____addOperationCanceled_31 = value;
	}

	inline static int32_t get_offset_of__Encryption_32() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____Encryption_32)); }
	inline int32_t get__Encryption_32() const { return ____Encryption_32; }
	inline int32_t* get_address_of__Encryption_32() { return &____Encryption_32; }
	inline void set__Encryption_32(int32_t value)
	{
		____Encryption_32 = value;
	}

	inline static int32_t get_offset_of__JustSaved_33() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____JustSaved_33)); }
	inline bool get__JustSaved_33() const { return ____JustSaved_33; }
	inline bool* get_address_of__JustSaved_33() { return &____JustSaved_33; }
	inline void set__JustSaved_33(bool value)
	{
		____JustSaved_33 = value;
	}

	inline static int32_t get_offset_of__locEndOfCDS_34() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____locEndOfCDS_34)); }
	inline int64_t get__locEndOfCDS_34() const { return ____locEndOfCDS_34; }
	inline int64_t* get_address_of__locEndOfCDS_34() { return &____locEndOfCDS_34; }
	inline void set__locEndOfCDS_34(int64_t value)
	{
		____locEndOfCDS_34 = value;
	}

	inline static int32_t get_offset_of__OffsetOfCentralDirectory_35() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____OffsetOfCentralDirectory_35)); }
	inline uint32_t get__OffsetOfCentralDirectory_35() const { return ____OffsetOfCentralDirectory_35; }
	inline uint32_t* get_address_of__OffsetOfCentralDirectory_35() { return &____OffsetOfCentralDirectory_35; }
	inline void set__OffsetOfCentralDirectory_35(uint32_t value)
	{
		____OffsetOfCentralDirectory_35 = value;
	}

	inline static int32_t get_offset_of__OffsetOfCentralDirectory64_36() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____OffsetOfCentralDirectory64_36)); }
	inline int64_t get__OffsetOfCentralDirectory64_36() const { return ____OffsetOfCentralDirectory64_36; }
	inline int64_t* get_address_of__OffsetOfCentralDirectory64_36() { return &____OffsetOfCentralDirectory64_36; }
	inline void set__OffsetOfCentralDirectory64_36(int64_t value)
	{
		____OffsetOfCentralDirectory64_36 = value;
	}

	inline static int32_t get_offset_of__OutputUsesZip64_37() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____OutputUsesZip64_37)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get__OutputUsesZip64_37() const { return ____OutputUsesZip64_37; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of__OutputUsesZip64_37() { return &____OutputUsesZip64_37; }
	inline void set__OutputUsesZip64_37(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		____OutputUsesZip64_37 = value;
	}

	inline static int32_t get_offset_of__inExtractAll_38() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____inExtractAll_38)); }
	inline bool get__inExtractAll_38() const { return ____inExtractAll_38; }
	inline bool* get_address_of__inExtractAll_38() { return &____inExtractAll_38; }
	inline void set__inExtractAll_38(bool value)
	{
		____inExtractAll_38 = value;
	}

	inline static int32_t get_offset_of__alternateEncoding_40() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____alternateEncoding_40)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__alternateEncoding_40() const { return ____alternateEncoding_40; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__alternateEncoding_40() { return &____alternateEncoding_40; }
	inline void set__alternateEncoding_40(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____alternateEncoding_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____alternateEncoding_40), (void*)value);
	}

	inline static int32_t get_offset_of__alternateEncodingUsage_41() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____alternateEncodingUsage_41)); }
	inline int32_t get__alternateEncodingUsage_41() const { return ____alternateEncodingUsage_41; }
	inline int32_t* get_address_of__alternateEncodingUsage_41() { return &____alternateEncodingUsage_41; }
	inline void set__alternateEncodingUsage_41(int32_t value)
	{
		____alternateEncodingUsage_41 = value;
	}

	inline static int32_t get_offset_of__BufferSize_42() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____BufferSize_42)); }
	inline int32_t get__BufferSize_42() const { return ____BufferSize_42; }
	inline int32_t* get_address_of__BufferSize_42() { return &____BufferSize_42; }
	inline void set__BufferSize_42(int32_t value)
	{
		____BufferSize_42 = value;
	}

	inline static int32_t get_offset_of_ParallelDeflater_43() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___ParallelDeflater_43)); }
	inline ParallelDeflateOutputStream_tBC2B066ED9A60F3554D7361F5F7F903D3D823374 * get_ParallelDeflater_43() const { return ___ParallelDeflater_43; }
	inline ParallelDeflateOutputStream_tBC2B066ED9A60F3554D7361F5F7F903D3D823374 ** get_address_of_ParallelDeflater_43() { return &___ParallelDeflater_43; }
	inline void set_ParallelDeflater_43(ParallelDeflateOutputStream_tBC2B066ED9A60F3554D7361F5F7F903D3D823374 * value)
	{
		___ParallelDeflater_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ParallelDeflater_43), (void*)value);
	}

	inline static int32_t get_offset_of__ParallelDeflateThreshold_44() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____ParallelDeflateThreshold_44)); }
	inline int64_t get__ParallelDeflateThreshold_44() const { return ____ParallelDeflateThreshold_44; }
	inline int64_t* get_address_of__ParallelDeflateThreshold_44() { return &____ParallelDeflateThreshold_44; }
	inline void set__ParallelDeflateThreshold_44(int64_t value)
	{
		____ParallelDeflateThreshold_44 = value;
	}

	inline static int32_t get_offset_of__maxBufferPairs_45() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____maxBufferPairs_45)); }
	inline int32_t get__maxBufferPairs_45() const { return ____maxBufferPairs_45; }
	inline int32_t* get_address_of__maxBufferPairs_45() { return &____maxBufferPairs_45; }
	inline void set__maxBufferPairs_45(int32_t value)
	{
		____maxBufferPairs_45 = value;
	}

	inline static int32_t get_offset_of__zip64_46() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____zip64_46)); }
	inline int32_t get__zip64_46() const { return ____zip64_46; }
	inline int32_t* get_address_of__zip64_46() { return &____zip64_46; }
	inline void set__zip64_46(int32_t value)
	{
		____zip64_46 = value;
	}

	inline static int32_t get_offset_of__SavingSfx_47() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ____SavingSfx_47)); }
	inline bool get__SavingSfx_47() const { return ____SavingSfx_47; }
	inline bool* get_address_of__SavingSfx_47() { return &____SavingSfx_47; }
	inline void set__SavingSfx_47(bool value)
	{
		____SavingSfx_47 = value;
	}

	inline static int32_t get_offset_of_SaveProgress_49() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___SaveProgress_49)); }
	inline EventHandler_1_tE80885BB62A759BA3431C67B14A3E3440367EB95 * get_SaveProgress_49() const { return ___SaveProgress_49; }
	inline EventHandler_1_tE80885BB62A759BA3431C67B14A3E3440367EB95 ** get_address_of_SaveProgress_49() { return &___SaveProgress_49; }
	inline void set_SaveProgress_49(EventHandler_1_tE80885BB62A759BA3431C67B14A3E3440367EB95 * value)
	{
		___SaveProgress_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SaveProgress_49), (void*)value);
	}

	inline static int32_t get_offset_of_ReadProgress_50() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___ReadProgress_50)); }
	inline EventHandler_1_tD6797BE7E75448047E81C5366D6708961A8616C4 * get_ReadProgress_50() const { return ___ReadProgress_50; }
	inline EventHandler_1_tD6797BE7E75448047E81C5366D6708961A8616C4 ** get_address_of_ReadProgress_50() { return &___ReadProgress_50; }
	inline void set_ReadProgress_50(EventHandler_1_tD6797BE7E75448047E81C5366D6708961A8616C4 * value)
	{
		___ReadProgress_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadProgress_50), (void*)value);
	}

	inline static int32_t get_offset_of_ExtractProgress_51() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___ExtractProgress_51)); }
	inline EventHandler_1_tB77CE0953CA3A60B94A10A5A61A63A55C61D2F12 * get_ExtractProgress_51() const { return ___ExtractProgress_51; }
	inline EventHandler_1_tB77CE0953CA3A60B94A10A5A61A63A55C61D2F12 ** get_address_of_ExtractProgress_51() { return &___ExtractProgress_51; }
	inline void set_ExtractProgress_51(EventHandler_1_tB77CE0953CA3A60B94A10A5A61A63A55C61D2F12 * value)
	{
		___ExtractProgress_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExtractProgress_51), (void*)value);
	}

	inline static int32_t get_offset_of_AddProgress_52() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___AddProgress_52)); }
	inline EventHandler_1_t3970FEBAF7B67BBB47861133B3FF18D247630EED * get_AddProgress_52() const { return ___AddProgress_52; }
	inline EventHandler_1_t3970FEBAF7B67BBB47861133B3FF18D247630EED ** get_address_of_AddProgress_52() { return &___AddProgress_52; }
	inline void set_AddProgress_52(EventHandler_1_t3970FEBAF7B67BBB47861133B3FF18D247630EED * value)
	{
		___AddProgress_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AddProgress_52), (void*)value);
	}

	inline static int32_t get_offset_of_ZipError_53() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___ZipError_53)); }
	inline EventHandler_1_t70D7DA96AFEB7D7BABF13C2251F3C84126297360 * get_ZipError_53() const { return ___ZipError_53; }
	inline EventHandler_1_t70D7DA96AFEB7D7BABF13C2251F3C84126297360 ** get_address_of_ZipError_53() { return &___ZipError_53; }
	inline void set_ZipError_53(EventHandler_1_t70D7DA96AFEB7D7BABF13C2251F3C84126297360 * value)
	{
		___ZipError_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZipError_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFullScanU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___U3CFullScanU3Ek__BackingField_54)); }
	inline bool get_U3CFullScanU3Ek__BackingField_54() const { return ___U3CFullScanU3Ek__BackingField_54; }
	inline bool* get_address_of_U3CFullScanU3Ek__BackingField_54() { return &___U3CFullScanU3Ek__BackingField_54; }
	inline void set_U3CFullScanU3Ek__BackingField_54(bool value)
	{
		___U3CFullScanU3Ek__BackingField_54 = value;
	}

	inline static int32_t get_offset_of_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55)); }
	inline bool get_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() const { return ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55; }
	inline bool* get_address_of_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() { return &___U3CSortEntriesBeforeSavingU3Ek__BackingField_55; }
	inline void set_U3CSortEntriesBeforeSavingU3Ek__BackingField_55(bool value)
	{
		___U3CSortEntriesBeforeSavingU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56)); }
	inline bool get_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() const { return ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56; }
	inline bool* get_address_of_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() { return &___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56; }
	inline void set_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56(bool value)
	{
		___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_U3CCodecBufferSizeU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___U3CCodecBufferSizeU3Ek__BackingField_57)); }
	inline int32_t get_U3CCodecBufferSizeU3Ek__BackingField_57() const { return ___U3CCodecBufferSizeU3Ek__BackingField_57; }
	inline int32_t* get_address_of_U3CCodecBufferSizeU3Ek__BackingField_57() { return &___U3CCodecBufferSizeU3Ek__BackingField_57; }
	inline void set_U3CCodecBufferSizeU3Ek__BackingField_57(int32_t value)
	{
		___U3CCodecBufferSizeU3Ek__BackingField_57 = value;
	}

	inline static int32_t get_offset_of_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58)); }
	inline bool get_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() const { return ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58; }
	inline bool* get_address_of_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() { return &___U3CFlattenFoldersOnExtractU3Ek__BackingField_58; }
	inline void set_U3CFlattenFoldersOnExtractU3Ek__BackingField_58(bool value)
	{
		___U3CFlattenFoldersOnExtractU3Ek__BackingField_58 = value;
	}

	inline static int32_t get_offset_of_U3CCompressionLevelU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___U3CCompressionLevelU3Ek__BackingField_59)); }
	inline int32_t get_U3CCompressionLevelU3Ek__BackingField_59() const { return ___U3CCompressionLevelU3Ek__BackingField_59; }
	inline int32_t* get_address_of_U3CCompressionLevelU3Ek__BackingField_59() { return &___U3CCompressionLevelU3Ek__BackingField_59; }
	inline void set_U3CCompressionLevelU3Ek__BackingField_59(int32_t value)
	{
		___U3CCompressionLevelU3Ek__BackingField_59 = value;
	}

	inline static int32_t get_offset_of_U3CExtractExistingFileU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___U3CExtractExistingFileU3Ek__BackingField_60)); }
	inline int32_t get_U3CExtractExistingFileU3Ek__BackingField_60() const { return ___U3CExtractExistingFileU3Ek__BackingField_60; }
	inline int32_t* get_address_of_U3CExtractExistingFileU3Ek__BackingField_60() { return &___U3CExtractExistingFileU3Ek__BackingField_60; }
	inline void set_U3CExtractExistingFileU3Ek__BackingField_60(int32_t value)
	{
		___U3CExtractExistingFileU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CSetCompressionU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4, ___U3CSetCompressionU3Ek__BackingField_61)); }
	inline SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01 * get_U3CSetCompressionU3Ek__BackingField_61() const { return ___U3CSetCompressionU3Ek__BackingField_61; }
	inline SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01 ** get_address_of_U3CSetCompressionU3Ek__BackingField_61() { return &___U3CSetCompressionU3Ek__BackingField_61; }
	inline void set_U3CSetCompressionU3Ek__BackingField_61(SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01 * value)
	{
		___U3CSetCompressionU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSetCompressionU3Ek__BackingField_61), (void*)value);
	}
};

struct ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4_StaticFields
{
public:
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::_defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____defaultEncoding_39;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::BufferSizeDefault
	int32_t ___BufferSizeDefault_48;

public:
	inline static int32_t get_offset_of__defaultEncoding_39() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4_StaticFields, ____defaultEncoding_39)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__defaultEncoding_39() const { return ____defaultEncoding_39; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__defaultEncoding_39() { return &____defaultEncoding_39; }
	inline void set__defaultEncoding_39(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____defaultEncoding_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultEncoding_39), (void*)value);
	}

	inline static int32_t get_offset_of_BufferSizeDefault_48() { return static_cast<int32_t>(offsetof(ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4_StaticFields, ___BufferSizeDefault_48)); }
	inline int32_t get_BufferSizeDefault_48() const { return ___BufferSizeDefault_48; }
	inline int32_t* get_address_of_BufferSizeDefault_48() { return &___BufferSizeDefault_48; }
	inline void set_BufferSizeDefault_48(int32_t value)
	{
		___BufferSizeDefault_48 = value;
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6();
IL2CPP_EXTERN_C_CONST RuntimeType Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_0_0_0;
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_0_0_0;
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_0_0_0;
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_0_0_0;
IL2CPP_EXTERN_C void AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_0_0_0;
IL2CPP_EXTERN_C void AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_0_0_0;
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Assembly_t_0_0_0;
IL2CPP_EXTERN_C void AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_0_0_0;
IL2CPP_EXTERN_C void AstarWorkItem_t364899B995762B774830D17BCC873B6096CF7D13_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AstarWorkItem_t364899B995762B774830D17BCC873B6096CF7D13_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AstarWorkItem_t364899B995762B774830D17BCC873B6096CF7D13_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AstarWorkItem_t364899B995762B774830D17BCC873B6096CF7D13_0_0_0;
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_0_0_0;
IL2CPP_EXTERN_C void AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_0_0_0;
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_0_0_0;
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_0_0_0;
IL2CPP_EXTERN_C void AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_0_0_0;
const Il2CppGuid BadCrcException_t0D22C7711389274B7E523CD05751C94751048F24::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0x9 };
IL2CPP_EXTERN_C_CONST RuntimeType BadCrcException_t0D22C7711389274B7E523CD05751C94751048F24_0_0_0;
const Il2CppGuid BadPasswordException_t144E72EEB37B9C4FB1AAA9ECBF6E8A145F71C960::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0xb };
IL2CPP_EXTERN_C_CONST RuntimeType BadPasswordException_t144E72EEB37B9C4FB1AAA9ECBF6E8A145F71C960_0_0_0;
const Il2CppGuid BadReadException_t0071DB16D260B1C7EE8CE63483D2B985E0369038::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0xa };
IL2CPP_EXTERN_C_CONST RuntimeType BadReadException_t0071DB16D260B1C7EE8CE63483D2B985E0369038_0_0_0;
const Il2CppGuid BadStateException_tEA711E725F0B46CBC5EDC38F6FF00DDC39925434::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0x7 };
IL2CPP_EXTERN_C_CONST RuntimeType BadStateException_tEA711E725F0B46CBC5EDC38F6FF00DDC39925434_0_0_0;
IL2CPP_EXTERN_C void BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_0_0_0;
const Il2CppGuid CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0xc };
IL2CPP_EXTERN_C_CONST RuntimeType CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C_0_0_0;
IL2CPP_EXTERN_C void CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_0_0_0;
IL2CPP_EXTERN_C void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_0_0_0;
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_0_0_0;
IL2CPP_EXTERN_C void CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_0_0_0;
IL2CPP_EXTERN_C void CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_0_0_0;
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_0_0_0;
IL2CPP_EXTERN_C void Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_0_0_0;
IL2CPP_EXTERN_C void Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Collision2D_t95B5FD331CE95276D3658140844190B485D26564_0_0_0;
IL2CPP_EXTERN_C void ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_0_0_0;
IL2CPP_EXTERN_C void ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_0_0_0;
IL2CPP_EXTERN_C void ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_0_0_0;
IL2CPP_EXTERN_C void Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_0_0_0;
IL2CPP_EXTERN_C void ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_0_0_0;
IL2CPP_EXTERN_C void ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_0_0_0;
IL2CPP_EXTERN_C void Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_0_0_0;
IL2CPP_EXTERN_C void ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_0_0_0;
IL2CPP_EXTERN_C void ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_0_0_0;
IL2CPP_EXTERN_C void Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CrossContextDelegate_t12C7A08ED124090185A3E209E6CA9E28148A7682();
IL2CPP_EXTERN_C_CONST RuntimeType CrossContextDelegate_t12C7A08ED124090185A3E209E6CA9E28148A7682_0_0_0;
IL2CPP_EXTERN_C void CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_0_0_0;
IL2CPP_EXTERN_C void CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureData_t53CDF1C5F789A28897415891667799420D3C5529_0_0_0;
IL2CPP_EXTERN_C void CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_0_0_0;
IL2CPP_EXTERN_C void DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_0_0_0;
IL2CPP_EXTERN_C void DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_0_0_0;
IL2CPP_EXTERN_C void DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_0_0_0;
IL2CPP_EXTERN_C void DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_0_0_0;
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Delegate_t_0_0_0;
IL2CPP_EXTERN_C void DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_0_0_0;
IL2CPP_EXTERN_C void DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_0_0_0;
IL2CPP_EXTERN_C void DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_0_0_0;
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_0_0_0;
IL2CPP_EXTERN_C void Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Enum_t23B90B40F60E677A8025267341651C94AE079CDA_0_0_0;
IL2CPP_EXTERN_C void Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_0_0_0;
IL2CPP_EXTERN_C void Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_0_0_0;
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Exception_t_0_0_0;
IL2CPP_EXTERN_C void ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_0_0_0;
IL2CPP_EXTERN_C void ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_0_0_0;
IL2CPP_EXTERN_C void FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_0_0_0;
IL2CPP_EXTERN_C void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_0_0_0;
IL2CPP_EXTERN_C void FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_0_0_0;
IL2CPP_EXTERN_C void FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_0_0_0;
IL2CPP_EXTERN_C void FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_0_0_0;
IL2CPP_EXTERN_C void FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_0_0_0;
IL2CPP_EXTERN_C void FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_0_0_0;
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_0_0_0;
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_0_0_0;
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_0_0_0;
IL2CPP_EXTERN_C void GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_0_0_0;
IL2CPP_EXTERN_C void Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_0_0_0;
IL2CPP_EXTERN_C void Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_0_0_0;
IL2CPP_EXTERN_C void GraphHitInfo_tB87C657C3EC595522A296D309E2F5B2600526A73_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GraphHitInfo_tB87C657C3EC595522A296D309E2F5B2600526A73_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GraphHitInfo_tB87C657C3EC595522A296D309E2F5B2600526A73_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GraphHitInfo_tB87C657C3EC595522A296D309E2F5B2600526A73_0_0_0;
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_0_0_0;
IL2CPP_EXTERN_C void IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_0_0_0;
IL2CPP_EXTERN_C void IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_0_0_0;
IL2CPP_EXTERN_C void IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_0_0_0;
IL2CPP_EXTERN_C void InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_0_0_0;
IL2CPP_EXTERN_C void InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_0_0_0;
IL2CPP_EXTERN_C void InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_0_0_0;
IL2CPP_EXTERN_C void InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_0_0_0;
IL2CPP_EXTERN_C void IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_0_0_0;
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_0_0_0;
IL2CPP_EXTERN_C void InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_0_0_0;
IL2CPP_EXTERN_C void InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_0_0_0;
IL2CPP_EXTERN_C void Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_0_0_0;
IL2CPP_EXTERN_C void LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_0_0_0;
IL2CPP_EXTERN_C void LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_0_0_0;
IL2CPP_EXTERN_C void LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_0_0_0;
IL2CPP_EXTERN_C void LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_0_0_0;
IL2CPP_EXTERN_C void LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_0_0_0;
IL2CPP_EXTERN_C void MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_0_0_0;
IL2CPP_EXTERN_C void MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_0_0_0;
IL2CPP_EXTERN_C void MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_0_0_0;
IL2CPP_EXTERN_C void MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_0_0_0;
IL2CPP_EXTERN_C void Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_0_0_0;
IL2CPP_EXTERN_C void MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_0_0_0;
IL2CPP_EXTERN_C void MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_0_0_0;
IL2CPP_EXTERN_C void MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_0_0_0;
IL2CPP_EXTERN_C void MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_0_0_0;
IL2CPP_EXTERN_C void MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_0_0_0;
IL2CPP_EXTERN_C void MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_0_0_0;
IL2CPP_EXTERN_C void MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_0_0_0;
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MulticastDelegate_t_0_0_0;
IL2CPP_EXTERN_C void NNInfo_t96B4C601AB5B4EDC2834B8E70311CEBDF93DA8E8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NNInfo_t96B4C601AB5B4EDC2834B8E70311CEBDF93DA8E8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NNInfo_t96B4C601AB5B4EDC2834B8E70311CEBDF93DA8E8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NNInfo_t96B4C601AB5B4EDC2834B8E70311CEBDF93DA8E8_0_0_0;
IL2CPP_EXTERN_C void NNInfoInternal_t67DCB0391F0DE7DA0064084F772A2AC646A38F40_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NNInfoInternal_t67DCB0391F0DE7DA0064084F772A2AC646A38F40_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NNInfoInternal_t67DCB0391F0DE7DA0064084F772A2AC646A38F40_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NNInfoInternal_t67DCB0391F0DE7DA0064084F772A2AC646A38F40_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6();
IL2CPP_EXTERN_C_CONST RuntimeType NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6_0_0_0;
IL2CPP_EXTERN_C void Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_0_0_0;
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnScanStatus_tBB25523BD32FF8EAFB3BE99899B1A549010007D5();
IL2CPP_EXTERN_C_CONST RuntimeType OnScanStatus_tBB25523BD32FF8EAFB3BE99899B1A549010007D5_0_0_0;
IL2CPP_EXTERN_C void ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_0_0_0;
IL2CPP_EXTERN_C void ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_0_0_0;
IL2CPP_EXTERN_C void ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PerformDynamicRes_t6C449304F04A23C715B0FA075CF80550EFBC8E50();
IL2CPP_EXTERN_C_CONST RuntimeType PerformDynamicRes_t6C449304F04A23C715B0FA075CF80550EFBC8E50_0_0_0;
IL2CPP_EXTERN_C void PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_0_0_0;
IL2CPP_EXTERN_C void PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_0_0_0;
IL2CPP_EXTERN_C void ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_0_0_0;
IL2CPP_EXTERN_C void Progress_t02CA228FDA72692C9A896C612B718E11219711D3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Progress_t02CA228FDA72692C9A896C612B718E11219711D3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Progress_t02CA228FDA72692C9A896C612B718E11219711D3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Progress_t02CA228FDA72692C9A896C612B718E11219711D3_0_0_0;
IL2CPP_EXTERN_C void RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_0_0_0;
IL2CPP_EXTERN_C void RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_0_0_0;
IL2CPP_EXTERN_C void Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_0_0_0;
IL2CPP_EXTERN_C void RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_0_0_0;
IL2CPP_EXTERN_C void RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_0_0_0;
IL2CPP_EXTERN_C void RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_0_0_0;
IL2CPP_EXTERN_C void RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_0_0_0;
IL2CPP_EXTERN_C void RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_0_0_0;
IL2CPP_EXTERN_C void RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_0_0_0;
IL2CPP_EXTERN_C void RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_0_0_0;
IL2CPP_EXTERN_C void RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_0_0_0;
IL2CPP_EXTERN_C void RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_0_0_0;
IL2CPP_EXTERN_C void RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_0_0_0;
IL2CPP_EXTERN_C void RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_0_0_0;
IL2CPP_EXTERN_C void ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_0_0_0;
IL2CPP_EXTERN_C void ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_0_0_0;
IL2CPP_EXTERN_C void SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ScaleFunc_t4F99CE4593CA139621E0607E5305265ED2B52A75();
IL2CPP_EXTERN_C_CONST RuntimeType ScaleFunc_t4F99CE4593CA139621E0607E5305265ED2B52A75_0_0_0;
IL2CPP_EXTERN_C void ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0;
IL2CPP_EXTERN_C void SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SerializationEventHandler_t3033BE1E86AE40A7533AD615FF9122FC8ED0B7C1();
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEventHandler_t3033BE1E86AE40A7533AD615FF9122FC8ED0B7C1_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01();
IL2CPP_EXTERN_C_CONST RuntimeType SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01_0_0_0;
IL2CPP_EXTERN_C void ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_0_0_0;
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_0_0_0;
IL2CPP_EXTERN_C void Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_0_0_0;
IL2CPP_EXTERN_C void SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_0_0_0;
IL2CPP_EXTERN_C void SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_0_0_0;
IL2CPP_EXTERN_C void SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_0_0_0;
IL2CPP_EXTERN_C void SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_0_0_0;
IL2CPP_EXTERN_C void SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_0_0_0;
IL2CPP_EXTERN_C void StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_0_0_0;
IL2CPP_EXTERN_C void StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_0_0_0;
IL2CPP_EXTERN_C void TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_0_0_0;
IL2CPP_EXTERN_C void TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_0_0_0;
IL2CPP_EXTERN_C void TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_0_0_0;
IL2CPP_EXTERN_C void TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_0_0_0;
IL2CPP_EXTERN_C void TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_0_0_0;
IL2CPP_EXTERN_C void TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_0_0_0;
IL2CPP_EXTERN_C void TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_0_0_0;
IL2CPP_EXTERN_C void TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_0_0_0;
IL2CPP_EXTERN_C void TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_0_0_0;
IL2CPP_EXTERN_C void TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687();
IL2CPP_EXTERN_C_CONST RuntimeType ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_0_0_0;
IL2CPP_EXTERN_C void TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_0_0_0;
IL2CPP_EXTERN_C void TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_0_0_0;
IL2CPP_EXTERN_C void TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_0_0_0;
IL2CPP_EXTERN_C void TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_0_0_0;
IL2CPP_EXTERN_C void UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099();
IL2CPP_EXTERN_C_CONST RuntimeType UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_0_0_0;
IL2CPP_EXTERN_C void ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_0_0_0;
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_0_0_0;
IL2CPP_EXTERN_C void WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_0_0_0;
IL2CPP_EXTERN_C void WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_0_0_0;
IL2CPP_EXTERN_C void XRLayout_t7EB07CE1478AE117866C37B6729C9CA4E1F64C77_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XRLayout_t7EB07CE1478AE117866C37B6729C9CA4E1F64C77_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XRLayout_t7EB07CE1478AE117866C37B6729C9CA4E1F64C77_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XRLayout_t7EB07CE1478AE117866C37B6729C9CA4E1F64C77_0_0_0;
IL2CPP_EXTERN_C void XRPassCreateInfo_t27F326F3E281D314408FC961353E2DED64238D93_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XRPassCreateInfo_t27F326F3E281D314408FC961353E2DED64238D93_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XRPassCreateInfo_t27F326F3E281D314408FC961353E2DED64238D93_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XRPassCreateInfo_t27F326F3E281D314408FC961353E2DED64238D93_0_0_0;
IL2CPP_EXTERN_C void XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_0_0_0;
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_0_0_0;
const Il2CppGuid ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0x4 };
IL2CPP_EXTERN_C_CONST RuntimeType ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D_0_0_0;
const Il2CppGuid ZipException_t556A13023BFC2A9CF345731D3D7FACFC435B960F::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0x6 };
IL2CPP_EXTERN_C_CONST RuntimeType ZipException_t556A13023BFC2A9CF345731D3D7FACFC435B960F_0_0_0;
const Il2CppGuid ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0x5 };
IL2CPP_EXTERN_C_CONST RuntimeType ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4_0_0_0;
const Il2CppGuid ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0xd };
IL2CPP_EXTERN_C_CONST RuntimeType ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27_0_0_0;
const Il2CppGuid ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0xe };
IL2CPP_EXTERN_C_CONST RuntimeType ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_0_0_0;
IL2CPP_EXTERN_C void __DTString_t594255B76730E715A2A5655F8238B0029484B27A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void __DTString_t594255B76730E715A2A5655F8238B0029484B27A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void __DTString_t594255B76730E715A2A5655F8238B0029484B27A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType __DTString_t594255B76730E715A2A5655F8238B0029484B27A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C();
IL2CPP_EXTERN_C_CONST RuntimeType OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD();
IL2CPP_EXTERN_C_CONST RuntimeType LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240();
IL2CPP_EXTERN_C_CONST RuntimeType LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240_0_0_0;
IL2CPP_EXTERN_C void SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_0_0_0;
IL2CPP_EXTERN_C void SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_0_0_0;
IL2CPP_EXTERN_C void GraphPoint_t1617F39E0322D9D53B3DC676C2F1D872BB3484F6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GraphPoint_t1617F39E0322D9D53B3DC676C2F1D872BB3484F6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GraphPoint_t1617F39E0322D9D53B3DC676C2F1D872BB3484F6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GraphPoint_t1617F39E0322D9D53B3DC676C2F1D872BB3484F6_0_0_0;
IL2CPP_EXTERN_C void PathTypeDebug_t5923B1A3A9D023B277C232F9303CFE787ABFCAB4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PathTypeDebug_t5923B1A3A9D023B277C232F9303CFE787ABFCAB4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PathTypeDebug_t5923B1A3A9D023B277C232F9303CFE787ABFCAB4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PathTypeDebug_t5923B1A3A9D023B277C232F9303CFE787ABFCAB4_0_0_0;
IL2CPP_EXTERN_C void AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B();
IL2CPP_EXTERN_C_CONST RuntimeType PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C();
IL2CPP_EXTERN_C_CONST RuntimeType PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A();
IL2CPP_EXTERN_C_CONST RuntimeType AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A_0_0_0;
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_0_0_0;
IL2CPP_EXTERN_C void Tuple_tE6540BAF1057FBD245572DBCB71726FBD42FF2A3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Tuple_tE6540BAF1057FBD245572DBCB71726FBD42FF2A3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Tuple_tE6540BAF1057FBD245572DBCB71726FBD42FF2A3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Tuple_tE6540BAF1057FBD245572DBCB71726FBD42FF2A3_0_0_0;
IL2CPP_EXTERN_C void RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958();
IL2CPP_EXTERN_C_CONST RuntimeType WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000();
IL2CPP_EXTERN_C_CONST RuntimeType InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000_0_0_0;
IL2CPP_EXTERN_C void ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0();
IL2CPP_EXTERN_C_CONST RuntimeType StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0_0_0_0;
IL2CPP_EXTERN_C void Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_0_0_0;
IL2CPP_EXTERN_C void Resources_tA64317917B3D01310E84588407113D059D802DEB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Resources_tA64317917B3D01310E84588407113D059D802DEB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Resources_tA64317917B3D01310E84588407113D059D802DEB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Resources_tA64317917B3D01310E84588407113D059D802DEB_0_0_0;
IL2CPP_EXTERN_C void CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_0_0_0;
IL2CPP_EXTERN_C void DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E();
IL2CPP_EXTERN_C_CONST RuntimeType CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1();
IL2CPP_EXTERN_C_CONST RuntimeType DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1_0_0_0;
IL2CPP_EXTERN_C void EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_0_0_0;
IL2CPP_EXTERN_C void Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadDelegate_tB245FDB608C11A53AC71F333C1A6BE3D7CDB21BB();
IL2CPP_EXTERN_C_CONST RuntimeType ReadDelegate_tB245FDB608C11A53AC71F333C1A6BE3D7CDB21BB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteDelegate_tF68E6D874C089E69933FA2B9A0C1C6639929C4F6();
IL2CPP_EXTERN_C_CONST RuntimeType WriteDelegate_tF68E6D874C089E69933FA2B9A0C1C6639929C4F6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB();
IL2CPP_EXTERN_C_CONST RuntimeType FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB_0_0_0;
IL2CPP_EXTERN_C void RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_0_0_0;
IL2CPP_EXTERN_C void FunnelPortals_t01836C32E426B102F2AE22CC8A38679A38F84CCB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FunnelPortals_t01836C32E426B102F2AE22CC8A38679A38F84CCB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FunnelPortals_t01836C32E426B102F2AE22CC8A38679A38F84CCB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FunnelPortals_t01836C32E426B102F2AE22CC8A38679A38F84CCB_0_0_0;
IL2CPP_EXTERN_C void PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D();
IL2CPP_EXTERN_C_CONST RuntimeType WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E();
IL2CPP_EXTERN_C_CONST RuntimeType SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E_0_0_0;
IL2CPP_EXTERN_C void GUOSingle_t06B8CB1ECBB94957213C6FFABE2B744C0AC77C7D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUOSingle_t06B8CB1ECBB94957213C6FFABE2B744C0AC77C7D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUOSingle_t06B8CB1ECBB94957213C6FFABE2B744C0AC77C7D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUOSingle_t06B8CB1ECBB94957213C6FFABE2B744C0AC77C7D_0_0_0;
IL2CPP_EXTERN_C void GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_0_0_0;
IL2CPP_EXTERN_C void bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F();
IL2CPP_EXTERN_C_CONST RuntimeType OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F_0_0_0;
IL2CPP_EXTERN_C void Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_0_0_0;
IL2CPP_EXTERN_C void MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2_0_0_0;
IL2CPP_EXTERN_C void EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_0_0_0;
IL2CPP_EXTERN_C void NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_InvocationEntryDelegate_t751DEAE9B64F61CCD4029B67E7916F00C823E61A();
IL2CPP_EXTERN_C_CONST RuntimeType InvocationEntryDelegate_t751DEAE9B64F61CCD4029B67E7916F00C823E61A_0_0_0;
IL2CPP_EXTERN_C void meshStruct_t76422638A09C420D68544ADE1CABA5A5DC504BF8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void meshStruct_t76422638A09C420D68544ADE1CABA5A5DC504BF8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void meshStruct_t76422638A09C420D68544ADE1CABA5A5DC504BF8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType meshStruct_t76422638A09C420D68544ADE1CABA5A5DC504BF8_0_0_0;
IL2CPP_EXTERN_C void FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_0_0_0;
IL2CPP_EXTERN_C void EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_0_0_0;
IL2CPP_EXTERN_C void GraphUpdateLock_t14991F5E646AEE0CDBF5DE1A2C8797119A22A71A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GraphUpdateLock_t14991F5E646AEE0CDBF5DE1A2C8797119A22A71A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GraphUpdateLock_t14991F5E646AEE0CDBF5DE1A2C8797119A22A71A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GraphUpdateLock_t14991F5E646AEE0CDBF5DE1A2C8797119A22A71A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876();
IL2CPP_EXTERN_C_CONST RuntimeType CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA();
IL2CPP_EXTERN_C_CONST RuntimeType UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_0_0_0;
IL2CPP_EXTERN_C void Node_tF0422FF957FC0272AA083A4CDA3E388A76150D3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Node_tF0422FF957FC0272AA083A4CDA3E388A76150D3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Node_tF0422FF957FC0272AA083A4CDA3E388A76150D3E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Node_tF0422FF957FC0272AA083A4CDA3E388A76150D3E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34();
IL2CPP_EXTERN_C_CONST RuntimeType GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005();
IL2CPP_EXTERN_C_CONST RuntimeType RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005_0_0_0;
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_0_0_0;
IL2CPP_EXTERN_C void CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_0_0_0;
IL2CPP_EXTERN_C void CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_0_0_0;
IL2CPP_EXTERN_C void PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_0_0_0;
IL2CPP_EXTERN_C void ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_0_0_0;
IL2CPP_EXTERN_C void RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_0_0_0;
IL2CPP_EXTERN_C void Hasher_tA7470349F582CA60FD4152EDD7860547F12755AE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Hasher_tA7470349F582CA60FD4152EDD7860547F12755AE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Hasher_tA7470349F582CA60FD4152EDD7860547F12755AE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Hasher_tA7470349F582CA60FD4152EDD7860547F12755AE_0_0_0;
IL2CPP_EXTERN_C void MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538_0_0_0;
IL2CPP_EXTERN_C void HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_0_0_0;
IL2CPP_EXTERN_C void Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Edge_tC11235216D5E71087549B2CB09A27043F02FB278_0_0_0;
IL2CPP_EXTERN_C void Escape_t0479DB63473055AD46754E698B2114579D5D944E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Escape_t0479DB63473055AD46754E698B2114579D5D944E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Escape_t0479DB63473055AD46754E698B2114579D5D944E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Escape_t0479DB63473055AD46754E698B2114579D5D944E_0_0_0;
IL2CPP_EXTERN_C void Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA();
IL2CPP_EXTERN_C_CONST RuntimeType OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA_0_0_0;
IL2CPP_EXTERN_C void SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_0_0_0;
IL2CPP_EXTERN_C void TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_0_0_0;
IL2CPP_EXTERN_C void Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_0_0_0;
IL2CPP_EXTERN_C void Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_0_0_0;
IL2CPP_EXTERN_C void FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_0_0_0;
IL2CPP_EXTERN_C void TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_0_0_0;
IL2CPP_EXTERN_C void TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_0_0_0;
IL2CPP_EXTERN_C void TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_0_0_0;
IL2CPP_EXTERN_C void TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_0_0_0;
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_0_0_0;
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_0_0_0;
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_0_0_0;
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_0_0_0;
IL2CPP_EXTERN_C void VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_0_0_0;
IL2CPP_EXTERN_C void XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_0_0_0;
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_0_0_0;
IL2CPP_EXTERN_C void XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_0_0_0;
IL2CPP_EXTERN_C void XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF();
IL2CPP_EXTERN_C_CONST RuntimeType WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF_0_0_0;
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_0_0_0;
IL2CPP_EXTERN_C void DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_0_0_0;
IL2CPP_EXTERN_C Il2CppInteropData g_Il2CppInteropData[];
Il2CppInteropData g_Il2CppInteropData[274] = 
{
	{ DelegatePInvokeWrapper_Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6, NULL, NULL, NULL, NULL, NULL, &Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_0_0_0 } /* System.Action */,
	{ NULL, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_back, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ NULL, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke_back, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ NULL, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke_back, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ NULL, AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshal_pinvoke, AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshal_pinvoke_back, AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshal_pinvoke_cleanup, NULL, NULL, &AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_0_0_0 } /* System.AppDomain */,
	{ NULL, AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_marshal_pinvoke, AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_marshal_pinvoke_back, AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_marshal_pinvoke_cleanup, NULL, NULL, &AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_0_0_0 } /* System.AppDomainSetup */,
	{ NULL, Assembly_t_marshal_pinvoke, Assembly_t_marshal_pinvoke_back, Assembly_t_marshal_pinvoke_cleanup, NULL, NULL, &Assembly_t_0_0_0 } /* System.Reflection.Assembly */,
	{ NULL, AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshal_pinvoke, AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshal_pinvoke_back, AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshal_pinvoke_cleanup, NULL, NULL, &AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_0_0_0 } /* System.Reflection.AssemblyName */,
	{ NULL, AstarWorkItem_t364899B995762B774830D17BCC873B6096CF7D13_marshal_pinvoke, AstarWorkItem_t364899B995762B774830D17BCC873B6096CF7D13_marshal_pinvoke_back, AstarWorkItem_t364899B995762B774830D17BCC873B6096CF7D13_marshal_pinvoke_cleanup, NULL, NULL, &AstarWorkItem_t364899B995762B774830D17BCC873B6096CF7D13_0_0_0 } /* Pathfinding.AstarWorkItem */,
	{ NULL, AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshal_pinvoke, AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshal_pinvoke_back, AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshal_pinvoke_cleanup, NULL, NULL, &AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_0_0_0 } /* System.Runtime.CompilerServices.AsyncMethodBuilderCore */,
	{ NULL, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_back, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ NULL, AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_marshal_pinvoke, AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_marshal_pinvoke_back, AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_marshal_pinvoke_cleanup, NULL, NULL, &AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_0_0_0 } /* Unity.IO.LowLevel.Unsafe.AsyncReadManagerMetricsFilters */,
	{ NULL, AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_marshal_pinvoke, AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_marshal_pinvoke_back, AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_marshal_pinvoke_cleanup, NULL, NULL, &AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_0_0_0 } /* Unity.IO.LowLevel.Unsafe.AsyncReadManagerRequestMetric */,
	{ NULL, AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_marshal_pinvoke, AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_marshal_pinvoke_back, AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_marshal_pinvoke_cleanup, NULL, NULL, &AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_0_0_0 } /* System.Runtime.Remoting.Messaging.AsyncResult */,
	{ NULL, NULL, NULL, NULL, NULL, &BadCrcException_t0D22C7711389274B7E523CD05751C94751048F24::CLSID, &BadCrcException_t0D22C7711389274B7E523CD05751C94751048F24_0_0_0 } /* Pathfinding.Ionic.Zip.BadCrcException */,
	{ NULL, NULL, NULL, NULL, NULL, &BadPasswordException_t144E72EEB37B9C4FB1AAA9ECBF6E8A145F71C960::CLSID, &BadPasswordException_t144E72EEB37B9C4FB1AAA9ECBF6E8A145F71C960_0_0_0 } /* Pathfinding.Ionic.Zip.BadPasswordException */,
	{ NULL, NULL, NULL, NULL, NULL, &BadReadException_t0071DB16D260B1C7EE8CE63483D2B985E0369038::CLSID, &BadReadException_t0071DB16D260B1C7EE8CE63483D2B985E0369038_0_0_0 } /* Pathfinding.Ionic.Zip.BadReadException */,
	{ NULL, NULL, NULL, NULL, NULL, &BadStateException_tEA711E725F0B46CBC5EDC38F6FF00DDC39925434::CLSID, &BadStateException_tEA711E725F0B46CBC5EDC38F6FF00DDC39925434_0_0_0 } /* Pathfinding.Ionic.Zip.BadStateException */,
	{ NULL, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke_back, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke_cleanup, NULL, NULL, &BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_0_0_0 } /* UnityEngine.Rendering.BatchRendererGroup */,
	{ NULL, NULL, NULL, NULL, NULL, &CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C::CLSID, &CRC32_t53C8637F97C242D41480988E7CCB91E3D6C5B82C_0_0_0 } /* Pathfinding.Ionic.Crc.CRC32 */,
	{ NULL, CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshal_pinvoke, CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshal_pinvoke_back, CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshal_pinvoke_cleanup, NULL, NULL, &CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_0_0_0 } /* System.Globalization.CalendarData */,
	{ NULL, CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke, CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke_back, CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke_cleanup, NULL, NULL, &CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_0_0_0 } /* UnityEngine.Rendering.Universal.CameraData */,
	{ NULL, CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_marshal_pinvoke, CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_marshal_pinvoke_back, CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_marshal_pinvoke_cleanup, NULL, NULL, &CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_0_0_0 } /* System.Threading.CancellationCallbackCoreWorkArguments */,
	{ NULL, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke_back, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke_cleanup, NULL, NULL, &CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_0_0_0 } /* System.Threading.CancellationToken */,
	{ NULL, CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshal_pinvoke, CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshal_pinvoke_back, CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshal_pinvoke_cleanup, NULL, NULL, &CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_0_0_0 } /* System.Threading.CancellationTokenRegistration */,
	{ NULL, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_back, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_cleanup, NULL, NULL, &CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_0_0_0 } /* UnityEngine.Networking.CertificateHandler */,
	{ NULL, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshal_pinvoke, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshal_pinvoke_back, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshal_pinvoke_cleanup, NULL, NULL, &Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_0_0_0 } /* UnityEngine.Collision */,
	{ NULL, Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke, Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke_back, Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t95B5FD331CE95276D3658140844190B485D26564_0_0_0 } /* UnityEngine.Collision2D */,
	{ NULL, ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_marshal_pinvoke, ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_marshal_pinvoke_back, ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_0_0_0 } /* TMPro.ColorTween */,
	{ NULL, ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshal_pinvoke, ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshal_pinvoke_back, ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_0_0_0 } /* UnityEngine.UI.CoroutineTween.ColorTween */,
	{ NULL, ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_marshal_pinvoke, ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_marshal_pinvoke_back, ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_marshal_pinvoke_cleanup, NULL, NULL, &ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.ComputeBufferDesc */,
	{ NULL, Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_marshal_pinvoke, Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_marshal_pinvoke_back, Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_marshal_pinvoke_cleanup, NULL, NULL, &Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_0_0_0 } /* Pathfinding.Connection */,
	{ NULL, ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_marshal_pinvoke, ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_marshal_pinvoke_back, ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_marshal_pinvoke_cleanup, NULL, NULL, &ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_0_0_0 } /* System.ConsoleKeyInfo */,
	{ NULL, ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_marshal_pinvoke, ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_marshal_pinvoke_back, ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_0_0_0 } /* UnityEngine.ContactFilter2D */,
	{ NULL, Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_marshal_pinvoke, Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_marshal_pinvoke_back, Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_marshal_pinvoke_cleanup, NULL, NULL, &Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_0_0_0 } /* System.Runtime.Remoting.Contexts.Context */,
	{ NULL, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshal_pinvoke, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshal_pinvoke_back, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshal_pinvoke_cleanup, NULL, NULL, &ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_0_0_0 } /* UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex */,
	{ NULL, ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshal_pinvoke, ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshal_pinvoke_back, ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshal_pinvoke_cleanup, NULL, NULL, &ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_0_0_0 } /* UnityEngine.ControllerColliderHit */,
	{ NULL, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshal_pinvoke, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshal_pinvoke_back, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_0_0_0 } /* UnityEngine.Coroutine */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_t12C7A08ED124090185A3E209E6CA9E28148A7682, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_t12C7A08ED124090185A3E209E6CA9E28148A7682_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ NULL, CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_marshal_pinvoke, CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_marshal_pinvoke_back, CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_0_0_0 } /* UnityEngine.CullingGroup */,
	{ NULL, CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshal_pinvoke, CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshal_pinvoke_back, CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshal_pinvoke_cleanup, NULL, NULL, &CultureData_t53CDF1C5F789A28897415891667799420D3C5529_0_0_0 } /* System.Globalization.CultureData */,
	{ NULL, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshal_pinvoke, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshal_pinvoke_back, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshal_pinvoke_cleanup, NULL, NULL, &CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_0_0_0 } /* System.Globalization.CultureInfo */,
	{ NULL, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshal_pinvoke, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshal_pinvoke_back, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshal_pinvoke, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshal_pinvoke_back, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ NULL, DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_marshal_pinvoke, DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_marshal_pinvoke_back, DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_marshal_pinvoke_cleanup, NULL, NULL, &DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_0_0_0 } /* System.DTSubString */,
	{ NULL, DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_marshal_pinvoke, DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_marshal_pinvoke_back, DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_0_0_0 } /* System.DateTimeRawInfo */,
	{ NULL, DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_marshal_pinvoke, DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_marshal_pinvoke_back, DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_0_0_0 } /* System.DateTimeResult */,
	{ NULL, DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshal_pinvoke, DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshal_pinvoke_back, DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshal_pinvoke_cleanup, NULL, NULL, &DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_0_0_0 } /* UnityEngine.Rendering.Universal.Internal.DeferredTiler */,
	{ NULL, Delegate_t_marshal_pinvoke, Delegate_t_marshal_pinvoke_back, Delegate_t_marshal_pinvoke_cleanup, NULL, NULL, &Delegate_t_0_0_0 } /* System.Delegate */,
	{ NULL, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshal_pinvoke, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshal_pinvoke_back, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshal_pinvoke, DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshal_pinvoke_back, DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshal_pinvoke_cleanup, NULL, NULL, &DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DirectionalLight */,
	{ NULL, DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshal_pinvoke, DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshal_pinvoke_back, DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshal_pinvoke_cleanup, NULL, NULL, &DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DiscLight */,
	{ NULL, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_back, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_0_0_0 } /* UnityEngine.Networking.DownloadHandler */,
	{ NULL, Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshal_pinvoke, Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshal_pinvoke_back, Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t23B90B40F60E677A8025267341651C94AE079CDA_0_0_0 } /* System.Enum */,
	{ NULL, Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_marshal_pinvoke, Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_marshal_pinvoke_back, Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_marshal_pinvoke_cleanup, NULL, NULL, &Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_0_0_0 } /* System.Runtime.CompilerServices.Ephemeron */,
	{ NULL, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke_back, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke_cleanup, NULL, NULL, &Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_0_0_0 } /* UnityEngine.Event */,
	{ NULL, Exception_t_marshal_pinvoke, Exception_t_marshal_pinvoke_back, Exception_t_marshal_pinvoke_cleanup, NULL, NULL, &Exception_t_0_0_0 } /* System.Exception */,
	{ NULL, ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_marshal_pinvoke, ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_marshal_pinvoke_back, ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_marshal_pinvoke_cleanup, NULL, NULL, &ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_0_0_0 } /* System.Reflection.ExceptionHandlingClause */,
	{ NULL, ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshal_pinvoke, ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshal_pinvoke_back, ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshal_pinvoke_cleanup, NULL, NULL, &ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_0_0_0 } /* System.Threading.ExecutionContextSwitcher */,
	{ NULL, FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshal_pinvoke, FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshal_pinvoke_back, FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshal_pinvoke_cleanup, NULL, NULL, &FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_0_0_0 } /* UnityEngine.U2D.IK.FABRIKChain2D */,
	{ NULL, FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshal_pinvoke, FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshal_pinvoke_back, FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshal_pinvoke_cleanup, NULL, NULL, &FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_0_0_0 } /* UnityEngine.TextCore.FaceInfo */,
	{ NULL, FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_marshal_pinvoke, FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_marshal_pinvoke_back, FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ NULL, FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_marshal_pinvoke, FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_marshal_pinvoke_back, FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_marshal_pinvoke_cleanup, NULL, NULL, &FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.FastMemoryDesc */,
	{ NULL, FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshal_pinvoke, FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshal_pinvoke_back, FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_0_0_0 } /* TMPro.FloatTween */,
	{ NULL, FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshal_pinvoke, FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshal_pinvoke_back, FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_0_0_0 } /* UnityEngine.UI.CoroutineTween.FloatTween */,
	{ NULL, FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshal_pinvoke, FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshal_pinvoke_back, FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_0_0_0 } /* TMPro.FontAssetCreationSettings */,
	{ NULL, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke_back, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_0_0_0 } /* UnityEngine.GUIContent */,
	{ NULL, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_back, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke_back, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ NULL, GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_marshal_pinvoke, GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_marshal_pinvoke_back, GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_marshal_pinvoke_cleanup, NULL, NULL, &GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_0_0_0 } /* UnityEngine.Rendering.GlobalDynamicResolutionSettings */,
	{ NULL, Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshal_pinvoke, Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshal_pinvoke_back, Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshal_pinvoke_cleanup, NULL, NULL, &Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_0_0_0 } /* UnityEngine.TextCore.Glyph */,
	{ NULL, Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshal_pinvoke, Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshal_pinvoke_back, Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_0_0_0 } /* UnityEngine.Gradient */,
	{ NULL, GraphHitInfo_tB87C657C3EC595522A296D309E2F5B2600526A73_marshal_pinvoke, GraphHitInfo_tB87C657C3EC595522A296D309E2F5B2600526A73_marshal_pinvoke_back, GraphHitInfo_tB87C657C3EC595522A296D309E2F5B2600526A73_marshal_pinvoke_cleanup, NULL, NULL, &GraphHitInfo_tB87C657C3EC595522A296D309E2F5B2600526A73_0_0_0 } /* Pathfinding.GraphHitInfo */,
	{ NULL, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_back, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshal_pinvoke, IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshal_pinvoke_back, IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshal_pinvoke_cleanup, NULL, NULL, &IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_0_0_0 } /* System.IOAsyncResult */,
	{ NULL, IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshal_pinvoke, IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshal_pinvoke_back, IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshal_pinvoke_cleanup, NULL, NULL, &IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_0_0_0 } /* System.IOSelectorJob */,
	{ NULL, IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_marshal_pinvoke, IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_marshal_pinvoke_back, IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_marshal_pinvoke_cleanup, NULL, NULL, &IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_0_0_0 } /* System.Net.IPv6AddressFormatter */,
	{ NULL, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke_back, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke_cleanup, NULL, NULL, &InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_0_0_0 } /* UnityEngine.XR.InputDevice */,
	{ NULL, InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke, InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke_back, InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke_cleanup, NULL, NULL, &InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_0_0_0 } /* UnityEngine.XR.InputDevices */,
	{ NULL, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke_back, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke_cleanup, NULL, NULL, &InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_0_0_0 } /* UnityEngine.XR.InputFeatureUsage */,
	{ NULL, InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_marshal_pinvoke, InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_marshal_pinvoke_back, InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_marshal_pinvoke_cleanup, NULL, NULL, &InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_0_0_0 } /* System.InputRecord */,
	{ NULL, IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshal_pinvoke, IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshal_pinvoke_back, IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshal_pinvoke_cleanup, NULL, NULL, &IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_0_0_0 } /* UnityEngine.IntegratedSubsystem */,
	{ NULL, IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshal_pinvoke, IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshal_pinvoke_back, IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshal_pinvoke_cleanup, NULL, NULL, &IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_0_0_0 } /* UnityEngine.IntegratedSubsystemDescriptor */,
	{ NULL, InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_marshal_pinvoke, InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_marshal_pinvoke_back, InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_marshal_pinvoke_cleanup, NULL, NULL, &InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_0_0_0 } /* System.Globalization.InternalCodePageDataItem */,
	{ NULL, InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_marshal_pinvoke, InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_marshal_pinvoke_back, InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_marshal_pinvoke_cleanup, NULL, NULL, &InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_0_0_0 } /* System.Globalization.InternalEncodingDataItem */,
	{ NULL, Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_marshal_pinvoke, Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_marshal_pinvoke_back, Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_marshal_pinvoke_cleanup, NULL, NULL, &Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_0_0_0 } /* UnityEngine.Experimental.Rendering.Universal.Light2DBlendStyle */,
	{ NULL, LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_marshal_pinvoke, LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_marshal_pinvoke_back, LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_marshal_pinvoke_cleanup, NULL, NULL, &LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_0_0_0 } /* UnityEngine.LightBakingOutput */,
	{ NULL, LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshal_pinvoke, LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshal_pinvoke_back, LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshal_pinvoke_cleanup, NULL, NULL, &LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_0_0_0 } /* UnityEngine.Rendering.Universal.LightData */,
	{ NULL, LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_marshal_pinvoke, LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_marshal_pinvoke_back, LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_marshal_pinvoke_cleanup, NULL, NULL, &LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_0_0_0 } /* UnityEngine.LightProbes */,
	{ NULL, LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_marshal_pinvoke, LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_marshal_pinvoke_back, LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_marshal_pinvoke_cleanup, NULL, NULL, &LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_0_0_0 } /* System.Reflection.Emit.LocalBuilder */,
	{ NULL, LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_marshal_pinvoke, LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_marshal_pinvoke_back, LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_marshal_pinvoke_cleanup, NULL, NULL, &LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_0_0_0 } /* System.Reflection.LocalVariableInfo */,
	{ NULL, MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshal_pinvoke, MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshal_pinvoke_back, MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshal_pinvoke_cleanup, NULL, NULL, &MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_0_0_0 } /* System.MarshalByRefObject */,
	{ NULL, MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshal_pinvoke, MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshal_pinvoke_back, MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshal_pinvoke_cleanup, NULL, NULL, &MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_0_0_0 } /* TMPro.MaterialReference */,
	{ NULL, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke_back, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke_cleanup, NULL, NULL, &MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_0_0_0 } /* UnityEngine.XR.MeshGenerationResult */,
	{ NULL, MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_marshal_pinvoke, MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_marshal_pinvoke_back, MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_marshal_pinvoke_cleanup, NULL, NULL, &MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_0_0_0 } /* System.Reflection.MethodBody */,
	{ NULL, Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshal_pinvoke, Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshal_pinvoke_back, Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshal_pinvoke_cleanup, NULL, NULL, &Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_0_0_0 } /* System.Reflection.Module */,
	{ NULL, MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_marshal_pinvoke, MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_marshal_pinvoke_back, MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_marshal_pinvoke_cleanup, NULL, NULL, &MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_0_0_0 } /* System.MonoAsyncCall */,
	{ NULL, MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_marshal_pinvoke, MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_marshal_pinvoke_back, MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_marshal_pinvoke, MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_marshal_pinvoke_back, MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_marshal_pinvoke, MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_marshal_pinvoke_back, MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_0_0_0 } /* System.Runtime.Remoting.Messaging.MonoMethodMessage */,
	{ NULL, MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshal_pinvoke, MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshal_pinvoke_back, MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_marshal_pinvoke, MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_marshal_pinvoke_back, MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_marshal_pinvoke_cleanup, NULL, NULL, &MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_0_0_0 } /* System.MonoTypeInfo */,
	{ NULL, MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshal_pinvoke, MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshal_pinvoke_back, MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshal_pinvoke_cleanup, NULL, NULL, &MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_0_0_0 } /* UnityEngine.Scripting.APIUpdating.MovedFromAttributeData */,
	{ NULL, MulticastDelegate_t_marshal_pinvoke, MulticastDelegate_t_marshal_pinvoke_back, MulticastDelegate_t_marshal_pinvoke_cleanup, NULL, NULL, &MulticastDelegate_t_0_0_0 } /* System.MulticastDelegate */,
	{ NULL, NNInfo_t96B4C601AB5B4EDC2834B8E70311CEBDF93DA8E8_marshal_pinvoke, NNInfo_t96B4C601AB5B4EDC2834B8E70311CEBDF93DA8E8_marshal_pinvoke_back, NNInfo_t96B4C601AB5B4EDC2834B8E70311CEBDF93DA8E8_marshal_pinvoke_cleanup, NULL, NULL, &NNInfo_t96B4C601AB5B4EDC2834B8E70311CEBDF93DA8E8_0_0_0 } /* Pathfinding.NNInfo */,
	{ NULL, NNInfoInternal_t67DCB0391F0DE7DA0064084F772A2AC646A38F40_marshal_pinvoke, NNInfoInternal_t67DCB0391F0DE7DA0064084F772A2AC646A38F40_marshal_pinvoke_back, NNInfoInternal_t67DCB0391F0DE7DA0064084F772A2AC646A38F40_marshal_pinvoke_cleanup, NULL, NULL, &NNInfoInternal_t67DCB0391F0DE7DA0064084F772A2AC646A38F40_0_0_0 } /* Pathfinding.NNInfoInternal */,
	{ DelegatePInvokeWrapper_NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6, NULL, NULL, NULL, NULL, NULL, &NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6_0_0_0 } /* UnityEngineInternal.Input.NativeUpdateCallback */,
	{ NULL, Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshal_pinvoke, Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshal_pinvoke_back, Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_0_0_0 } /* UnityEngine.UI.Navigation */,
	{ NULL, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_back, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_cleanup, NULL, NULL, &Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0 } /* UnityEngine.Object */,
	{ DelegatePInvokeWrapper_OnScanStatus_tBB25523BD32FF8EAFB3BE99899B1A549010007D5, NULL, NULL, NULL, NULL, NULL, &OnScanStatus_tBB25523BD32FF8EAFB3BE99899B1A549010007D5_0_0_0 } /* Pathfinding.OnScanStatus */,
	{ NULL, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke_back, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke_cleanup, NULL, NULL, &ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_0_0_0 } /* System.Reflection.ParameterInfo */,
	{ NULL, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshal_pinvoke, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshal_pinvoke_back, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_marshal_pinvoke, ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_marshal_pinvoke_back, ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_marshal_pinvoke_cleanup, NULL, NULL, &ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_0_0_0 } /* System.ParamsArray */,
	{ DelegatePInvokeWrapper_PerformDynamicRes_t6C449304F04A23C715B0FA075CF80550EFBC8E50, NULL, NULL, NULL, NULL, NULL, &PerformDynamicRes_t6C449304F04A23C715B0FA075CF80550EFBC8E50_0_0_0 } /* UnityEngine.Rendering.PerformDynamicRes */,
	{ NULL, PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshal_pinvoke, PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshal_pinvoke_back, PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ NULL, PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshal_pinvoke, PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshal_pinvoke_back, PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem */,
	{ NULL, PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_marshal_pinvoke, PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_marshal_pinvoke_back, PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystemInternal */,
	{ NULL, PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshal_pinvoke, PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshal_pinvoke_back, PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshal_pinvoke_cleanup, NULL, NULL, &PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.PointLight */,
	{ NULL, ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_marshal_pinvoke, ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_marshal_pinvoke_back, ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_marshal_pinvoke_cleanup, NULL, NULL, &ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_0_0_0 } /* UnityEngine.Rendering.ProfilingSample */,
	{ NULL, Progress_t02CA228FDA72692C9A896C612B718E11219711D3_marshal_pinvoke, Progress_t02CA228FDA72692C9A896C612B718E11219711D3_marshal_pinvoke_back, Progress_t02CA228FDA72692C9A896C612B718E11219711D3_marshal_pinvoke_cleanup, NULL, NULL, &Progress_t02CA228FDA72692C9A896C612B718E11219711D3_0_0_0 } /* Pathfinding.Progress */,
	{ NULL, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshal_pinvoke, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshal_pinvoke_back, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_0_0_0 } /* UnityEngine.EventSystems.RaycastResult */,
	{ NULL, RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_marshal_pinvoke, RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_marshal_pinvoke_back, RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_marshal_pinvoke_cleanup, NULL, NULL, &RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_0_0_0 } /* System.Runtime.Remoting.Proxies.RealProxy */,
	{ NULL, Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_marshal_pinvoke, Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_marshal_pinvoke_back, Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_marshal_pinvoke_cleanup, NULL, NULL, &Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_0_0_0 } /* UnityEngine.Profiling.Recorder */,
	{ NULL, RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke, RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke_back, RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_0_0_0 } /* UnityEngine.RectOffset */,
	{ NULL, RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshal_pinvoke, RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshal_pinvoke_back, RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshal_pinvoke_cleanup, NULL, NULL, &RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.RectangleLight */,
	{ NULL, RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_marshal_pinvoke, RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_marshal_pinvoke_back, RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_marshal_pinvoke_cleanup, NULL, NULL, &RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_0_0_0 } /* System.Globalization.RegionInfo */,
	{ NULL, RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshal_pinvoke, RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshal_pinvoke_back, RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshal_pinvoke_cleanup, NULL, NULL, &RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder */,
	{ NULL, RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshal_pinvoke, RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshal_pinvoke_back, RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshal_pinvoke_cleanup, NULL, NULL, &RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogIndent */,
	{ NULL, RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_marshal_pinvoke, RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_marshal_pinvoke_back, RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_marshal_pinvoke_cleanup, NULL, NULL, &RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphParameters */,
	{ NULL, RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshal_pinvoke, RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshal_pinvoke_back, RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshal_pinvoke_cleanup, NULL, NULL, &RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphProfilingScope */,
	{ NULL, RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_marshal_pinvoke, RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_marshal_pinvoke_back, RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_marshal_pinvoke_cleanup, NULL, NULL, &RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_0_0_0 } /* UnityEngine.Experimental.Rendering.RendererList */,
	{ NULL, RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_marshal_pinvoke, RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_marshal_pinvoke_back, RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_marshal_pinvoke_cleanup, NULL, NULL, &RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_0_0_0 } /* UnityEngine.Experimental.Rendering.RendererListDesc */,
	{ NULL, RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshal_pinvoke, RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshal_pinvoke_back, RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshal_pinvoke_cleanup, NULL, NULL, &RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle */,
	{ NULL, RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshal_pinvoke, RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshal_pinvoke_back, RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshal_pinvoke_cleanup, NULL, NULL, &RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_0_0_0 } /* UnityEngine.Rendering.Universal.RenderingData */,
	{ NULL, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshal_pinvoke, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshal_pinvoke_back, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshal_pinvoke_cleanup, NULL, NULL, &ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_0_0_0 } /* System.Resources.ResourceLocator */,
	{ NULL, ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshal_pinvoke, ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshal_pinvoke_back, ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshal_pinvoke, SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshal_pinvoke_back, SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshal_pinvoke_cleanup, NULL, NULL, &SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_0_0_0 } /* Mono.SafeStringMarshal */,
	{ DelegatePInvokeWrapper_ScaleFunc_t4F99CE4593CA139621E0607E5305265ED2B52A75, NULL, NULL, NULL, NULL, NULL, &ScaleFunc_t4F99CE4593CA139621E0607E5305265ED2B52A75_0_0_0 } /* UnityEngine.Rendering.ScaleFunc */,
	{ NULL, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshal_pinvoke, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshal_pinvoke_back, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_marshal_pinvoke, SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_marshal_pinvoke_back, SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ DelegatePInvokeWrapper_SerializationEventHandler_t3033BE1E86AE40A7533AD615FF9122FC8ED0B7C1, NULL, NULL, NULL, NULL, NULL, &SerializationEventHandler_t3033BE1E86AE40A7533AD615FF9122FC8ED0B7C1_0_0_0 } /* System.Runtime.Serialization.SerializationEventHandler */,
	{ DelegatePInvokeWrapper_SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01, NULL, NULL, NULL, NULL, NULL, &SetCompressionCallback_tE723F2BB8B993222AEBE59CA1F9EFEA0E5469E01_0_0_0 } /* Pathfinding.Ionic.Zip.SetCompressionCallback */,
	{ NULL, ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshal_pinvoke, ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshal_pinvoke_back, ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshal_pinvoke_cleanup, NULL, NULL, &ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_0_0_0 } /* UnityEngine.Rendering.Universal.ShadowData */,
	{ NULL, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_back, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ NULL, Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_marshal_pinvoke, Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_marshal_pinvoke_back, Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_marshal_pinvoke_cleanup, NULL, NULL, &Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_0_0_0 } /* UnityEngine.Rendering.LookDev.Sky */,
	{ NULL, SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_marshal_pinvoke, SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_marshal_pinvoke_back, SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_marshal_pinvoke_cleanup, NULL, NULL, &SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_0_0_0 } /* System.Globalization.SortKey */,
	{ NULL, SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshal_pinvoke, SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshal_pinvoke_back, SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshal_pinvoke_cleanup, NULL, NULL, &SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.SpotLight */,
	{ NULL, SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_marshal_pinvoke, SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_marshal_pinvoke_back, SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_marshal_pinvoke_cleanup, NULL, NULL, &SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_0_0_0 } /* UnityEngine.U2D.SpriteBone */,
	{ NULL, SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_marshal_pinvoke, SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_marshal_pinvoke_back, SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_marshal_pinvoke_cleanup, NULL, NULL, &SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_0_0_0 } /* UnityEngine.Experimental.U2D.SpriteRendererGroup */,
	{ NULL, SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshal_pinvoke, SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshal_pinvoke_back, SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_0_0_0 } /* UnityEngine.UI.SpriteState */,
	{ NULL, StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshal_pinvoke, StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshal_pinvoke_back, StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshal_pinvoke_cleanup, NULL, NULL, &StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_0_0_0 } /* System.Diagnostics.StackFrame */,
	{ NULL, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshal_pinvoke, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshal_pinvoke_back, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshal_pinvoke, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshal_pinvoke_back, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshal_pinvoke_cleanup, NULL, NULL, &TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_0_0_0 } /* TMPro.TMP_CharacterInfo */,
	{ NULL, TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_marshal_pinvoke, TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_marshal_pinvoke_back, TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_marshal_pinvoke_cleanup, NULL, NULL, &TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_0_0_0 } /* TMPro.TMP_FontWeightPair */,
	{ NULL, TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_marshal_pinvoke, TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_marshal_pinvoke_back, TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_marshal_pinvoke_cleanup, NULL, NULL, &TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_0_0_0 } /* TMPro.TMP_LinkInfo */,
	{ NULL, TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_marshal_pinvoke, TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_marshal_pinvoke_back, TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_marshal_pinvoke_cleanup, NULL, NULL, &TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_0_0_0 } /* TMPro.TMP_MaterialReference */,
	{ NULL, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshal_pinvoke, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshal_pinvoke_back, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshal_pinvoke_cleanup, NULL, NULL, &TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_0_0_0 } /* TMPro.TMP_MeshInfo */,
	{ NULL, TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshal_pinvoke, TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshal_pinvoke_back, TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshal_pinvoke_cleanup, NULL, NULL, &TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_0_0_0 } /* TMPro.TMP_WordInfo */,
	{ NULL, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshal_pinvoke, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshal_pinvoke_back, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshal_pinvoke_cleanup, NULL, NULL, &TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_0_0_0 } /* System.Runtime.CompilerServices.TaskAwaiter */,
	{ NULL, TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshal_pinvoke, TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshal_pinvoke_back, TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_0_0_0 } /* UnityEngine.TextGenerationSettings */,
	{ NULL, TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshal_pinvoke, TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshal_pinvoke_back, TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_0_0_0 } /* UnityEngine.TextGenerator */,
	{ NULL, TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_marshal_pinvoke, TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_marshal_pinvoke_back, TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_marshal_pinvoke_cleanup, NULL, NULL, &TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.TextureDesc */,
	{ DelegatePInvokeWrapper_ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687, NULL, NULL, NULL, NULL, NULL, &ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_marshal_pinvoke, TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_marshal_pinvoke_back, TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_marshal_pinvoke_cleanup, NULL, NULL, &TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_0_0_0 } /* UnityEngine.Tilemaps.TileAnimationData */,
	{ NULL, TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_marshal_pinvoke, TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_marshal_pinvoke_back, TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_marshal_pinvoke_cleanup, NULL, NULL, &TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_0_0_0 } /* UnityEngine.Tilemaps.TileData */,
	{ NULL, TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke, TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke_back, TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_0_0_0 } /* UnityEngine.TrackedReference */,
	{ NULL, TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_marshal_pinvoke, TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_marshal_pinvoke_back, TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_marshal_pinvoke_cleanup, NULL, NULL, &TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_0_0_0 } /* System.Runtime.Remoting.Proxies.TransparentProxy */,
	{ NULL, UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_marshal_pinvoke, UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_marshal_pinvoke_back, UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_marshal_pinvoke_cleanup, NULL, NULL, &UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_0_0_0 } /* System.UnSafeCharBuffer */,
	{ DelegatePInvokeWrapper_UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099, NULL, NULL, NULL, NULL, NULL, &UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshal_pinvoke, ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshal_pinvoke_back, ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_0_0_0 } /* System.ValueType */,
	{ NULL, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke_back, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshal_pinvoke, WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshal_pinvoke_back, WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshal_pinvoke_cleanup, NULL, NULL, &WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_0_0_0 } /* System.Threading.WaitHandle */,
	{ NULL, WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshal_pinvoke, WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshal_pinvoke_back, WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshal_pinvoke_cleanup, NULL, NULL, &WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_0_0_0 } /* TMPro.WordWrapState */,
	{ NULL, XRLayout_t7EB07CE1478AE117866C37B6729C9CA4E1F64C77_marshal_pinvoke, XRLayout_t7EB07CE1478AE117866C37B6729C9CA4E1F64C77_marshal_pinvoke_back, XRLayout_t7EB07CE1478AE117866C37B6729C9CA4E1F64C77_marshal_pinvoke_cleanup, NULL, NULL, &XRLayout_t7EB07CE1478AE117866C37B6729C9CA4E1F64C77_0_0_0 } /* UnityEngine.Rendering.Universal.XRLayout */,
	{ NULL, XRPassCreateInfo_t27F326F3E281D314408FC961353E2DED64238D93_marshal_pinvoke, XRPassCreateInfo_t27F326F3E281D314408FC961353E2DED64238D93_marshal_pinvoke_back, XRPassCreateInfo_t27F326F3E281D314408FC961353E2DED64238D93_marshal_pinvoke_cleanup, NULL, NULL, &XRPassCreateInfo_t27F326F3E281D314408FC961353E2DED64238D93_0_0_0 } /* UnityEngine.Rendering.Universal.XRPassCreateInfo */,
	{ NULL, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshal_pinvoke, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshal_pinvoke_back, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshal_pinvoke_cleanup, NULL, NULL, &XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_0_0_0 } /* UnityEngine.Rendering.Universal.XRView */,
	{ NULL, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke_back, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ NULL, NULL, NULL, NULL, NULL, &ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D::CLSID, &ZipEntry_t6B04ECD2798CCB4D2C1AD2D9A35CE1764477BC3D_0_0_0 } /* Pathfinding.Ionic.Zip.ZipEntry */,
	{ NULL, NULL, NULL, NULL, NULL, &ZipException_t556A13023BFC2A9CF345731D3D7FACFC435B960F::CLSID, &ZipException_t556A13023BFC2A9CF345731D3D7FACFC435B960F_0_0_0 } /* Pathfinding.Ionic.Zip.ZipException */,
	{ NULL, NULL, NULL, NULL, NULL, &ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4::CLSID, &ZipFile_tAB2A89722A957E7F3C27A3C498F3E5D47B0D8FE4_0_0_0 } /* Pathfinding.Ionic.Zip.ZipFile */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27::CLSID, &ZlibCodec_t4070FE5D8A397F422FFE663A5F9BC80A6F950F27_0_0_0 } /* Pathfinding.Ionic.Zlib.ZlibCodec */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58::CLSID, &ZlibException_tD424EF18A2ADAA9E5F996486D3CE11356B0D2D58_0_0_0 } /* Pathfinding.Ionic.Zlib.ZlibException */,
	{ NULL, __DTString_t594255B76730E715A2A5655F8238B0029484B27A_marshal_pinvoke, __DTString_t594255B76730E715A2A5655F8238B0029484B27A_marshal_pinvoke_back, __DTString_t594255B76730E715A2A5655F8238B0029484B27A_marshal_pinvoke_cleanup, NULL, NULL, &__DTString_t594255B76730E715A2A5655F8238B0029484B27A_0_0_0 } /* System.__DTString */,
	{ DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C, NULL, NULL, NULL, NULL, NULL, &OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C_0_0_0 } /* UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback */,
	{ DelegatePInvokeWrapper_LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD, NULL, NULL, NULL, NULL, NULL, &LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_marshal_pinvoke, SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_marshal_pinvoke_back, SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_marshal_pinvoke_cleanup, NULL, NULL, &SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_0_0_0 } /* System.Array/SorterGenericArray */,
	{ NULL, SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_marshal_pinvoke, SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_marshal_pinvoke_back, SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_marshal_pinvoke_cleanup, NULL, NULL, &SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_0_0_0 } /* System.Array/SorterObjectArray */,
	{ NULL, GraphPoint_t1617F39E0322D9D53B3DC676C2F1D872BB3484F6_marshal_pinvoke, GraphPoint_t1617F39E0322D9D53B3DC676C2F1D872BB3484F6_marshal_pinvoke_back, GraphPoint_t1617F39E0322D9D53B3DC676C2F1D872BB3484F6_marshal_pinvoke_cleanup, NULL, NULL, &GraphPoint_t1617F39E0322D9D53B3DC676C2F1D872BB3484F6_0_0_0 } /* Pathfinding.AstarDebugger/GraphPoint */,
	{ NULL, PathTypeDebug_t5923B1A3A9D023B277C232F9303CFE787ABFCAB4_marshal_pinvoke, PathTypeDebug_t5923B1A3A9D023B277C232F9303CFE787ABFCAB4_marshal_pinvoke_back, PathTypeDebug_t5923B1A3A9D023B277C232F9303CFE787ABFCAB4_marshal_pinvoke_cleanup, NULL, NULL, &PathTypeDebug_t5923B1A3A9D023B277C232F9303CFE787ABFCAB4_0_0_0 } /* Pathfinding.AstarDebugger/PathTypeDebug */,
	{ NULL, AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_marshal_pinvoke, AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_marshal_pinvoke_back, AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_marshal_pinvoke_cleanup, NULL, NULL, &AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_0_0_0 } /* System.ComponentModel.AttributeCollection/AttributeEntry */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ NULL, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke_back, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_0_0_0 } /* UnityEngine.BeforeRenderHelper/OrderBlock */,
	{ NULL, Tuple_tE6540BAF1057FBD245572DBCB71726FBD42FF2A3_marshal_pinvoke, Tuple_tE6540BAF1057FBD245572DBCB71726FBD42FF2A3_marshal_pinvoke_back, Tuple_tE6540BAF1057FBD245572DBCB71726FBD42FF2A3_marshal_pinvoke_cleanup, NULL, NULL, &Tuple_tE6540BAF1057FBD245572DBCB71726FBD42FF2A3_0_0_0 } /* Pathfinding.BinaryHeap/Tuple */,
	{ NULL, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke_back, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke_cleanup, NULL, NULL, &RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_0_0_0 } /* UnityEngine.Camera/RenderRequest */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ DelegatePInvokeWrapper_InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000, NULL, NULL, NULL, NULL, NULL, &InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000_0_0_0 } /* System.Console/InternalCancelHandler */,
	{ NULL, ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_marshal_pinvoke, ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_marshal_pinvoke_back, ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_marshal_pinvoke_cleanup, NULL, NULL, &ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_0_0_0 } /* System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes */,
	{ DelegatePInvokeWrapper_StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0, NULL, NULL, NULL, NULL, NULL, &StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ NULL, Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_marshal_pinvoke, Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_marshal_pinvoke_back, Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_marshal_pinvoke_cleanup, NULL, NULL, &Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_0_0_0 } /* System.Globalization.CultureInfo/Data */,
	{ NULL, Resources_tA64317917B3D01310E84588407113D059D802DEB_marshal_pinvoke, Resources_tA64317917B3D01310E84588407113D059D802DEB_marshal_pinvoke_back, Resources_tA64317917B3D01310E84588407113D059D802DEB_marshal_pinvoke_cleanup, NULL, NULL, &Resources_tA64317917B3D01310E84588407113D059D802DEB_0_0_0 } /* UnityEngine.UI.DefaultControls/Resources */,
	{ NULL, CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshal_pinvoke, CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshal_pinvoke_back, CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshal_pinvoke_cleanup, NULL, NULL, &CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_0_0_0 } /* UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob */,
	{ NULL, DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_marshal_pinvoke, DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_marshal_pinvoke_back, DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_marshal_pinvoke_cleanup, NULL, NULL, &DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_0_0_0 } /* UnityEngine.Rendering.Universal.Internal.DeferredLights/DrawCall */,
	{ DelegatePInvokeWrapper_CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E, NULL, NULL, NULL, NULL, NULL, &CompressFunc_t5C5CC66360FCD8F4E7B279D18C7AF08641C18E2E_0_0_0 } /* Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ NULL, EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_marshal_pinvoke, EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_marshal_pinvoke_back, EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_marshal_pinvoke_cleanup, NULL, NULL, &EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_0_0_0 } /* System.Enum/EnumResult */,
	{ NULL, Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshal_pinvoke, Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshal_pinvoke_back, Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_0_0_0 } /* System.Threading.ExecutionContext/Reader */,
	{ DelegatePInvokeWrapper_ReadDelegate_tB245FDB608C11A53AC71F333C1A6BE3D7CDB21BB, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_tB245FDB608C11A53AC71F333C1A6BE3D7CDB21BB_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_tF68E6D874C089E69933FA2B9A0C1C6639929C4F6, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_tF68E6D874C089E69933FA2B9A0C1C6639929C4F6_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ NULL, RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_marshal_pinvoke, RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_marshal_pinvoke_back, RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_marshal_pinvoke_cleanup, NULL, NULL, &RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_0_0_0 } /* UnityEngine.Rendering.Universal.ForwardRenderer/RenderPassInputSummary */,
	{ NULL, FunnelPortals_t01836C32E426B102F2AE22CC8A38679A38F84CCB_marshal_pinvoke, FunnelPortals_t01836C32E426B102F2AE22CC8A38679A38F84CCB_marshal_pinvoke_back, FunnelPortals_t01836C32E426B102F2AE22CC8A38679A38F84CCB_marshal_pinvoke_cleanup, NULL, NULL, &FunnelPortals_t01836C32E426B102F2AE22CC8A38679A38F84CCB_0_0_0 } /* Pathfinding.Funnel/FunnelPortals */,
	{ NULL, PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046_marshal_pinvoke, PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046_marshal_pinvoke_back, PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046_marshal_pinvoke_cleanup, NULL, NULL, &PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046_0_0_0 } /* Pathfinding.Funnel/PathPart */,
	{ DelegatePInvokeWrapper_WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D, NULL, NULL, NULL, NULL, NULL, &WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, GUOSingle_t06B8CB1ECBB94957213C6FFABE2B744C0AC77C7D_marshal_pinvoke, GUOSingle_t06B8CB1ECBB94957213C6FFABE2B744C0AC77C7D_marshal_pinvoke_back, GUOSingle_t06B8CB1ECBB94957213C6FFABE2B744C0AC77C7D_marshal_pinvoke_cleanup, NULL, NULL, &GUOSingle_t06B8CB1ECBB94957213C6FFABE2B744C0AC77C7D_0_0_0 } /* Pathfinding.GraphUpdateProcessor/GUOSingle */,
	{ NULL, GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_marshal_pinvoke, GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_marshal_pinvoke_back, GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_marshal_pinvoke_cleanup, NULL, NULL, &GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_0_0_0 } /* System.Guid/GuidResult */,
	{ NULL, bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_marshal_pinvoke, bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_marshal_pinvoke_back, bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_marshal_pinvoke_cleanup, NULL, NULL, &bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_0_0_0 } /* System.Collections.Hashtable/bucket */,
	{ DelegatePInvokeWrapper_OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F_0_0_0 } /* UnityEngine.UI.InputField/OnValidateInput */,
	{ NULL, Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_marshal_pinvoke, Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_marshal_pinvoke_back, Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_marshal_pinvoke_cleanup, NULL, NULL, &Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_0_0_0 } /* System.Runtime.Remoting.Messaging.LogicalCallContext/Reader */,
	{ NULL, MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2_marshal_pinvoke, MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2_marshal_pinvoke_back, MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2_marshal_pinvoke_cleanup, NULL, NULL, &MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2_0_0_0 } /* UnityEngine.MeshSubsetCombineUtility/MeshContainer */,
	{ NULL, EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_marshal_pinvoke, EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_marshal_pinvoke_back, EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_marshal_pinvoke_cleanup, NULL, NULL, &EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_0_0_0 } /* UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/EdgePair */,
	{ NULL, NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_marshal_pinvoke, NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_marshal_pinvoke_back, NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_0_0_0 } /* System.Number/NumberBuffer */,
	{ DelegatePInvokeWrapper_InvocationEntryDelegate_t751DEAE9B64F61CCD4029B67E7916F00C823E61A, NULL, NULL, NULL, NULL, NULL, &InvocationEntryDelegate_t751DEAE9B64F61CCD4029B67E7916F00C823E61A_0_0_0 } /* System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate */,
	{ NULL, meshStruct_t76422638A09C420D68544ADE1CABA5A5DC504BF8_marshal_pinvoke, meshStruct_t76422638A09C420D68544ADE1CABA5A5DC504BF8_marshal_pinvoke_back, meshStruct_t76422638A09C420D68544ADE1CABA5A5DC504BF8_marshal_pinvoke_cleanup, NULL, NULL, &meshStruct_t76422638A09C420D68544ADE1CABA5A5DC504BF8_0_0_0 } /* Pathfinding.ObjImporter/meshStruct */,
	{ NULL, FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_marshal_pinvoke, FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_marshal_pinvoke_back, FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_marshal_pinvoke_cleanup, NULL, NULL, &FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_0_0_0 } /* System.ParameterizedStrings/FormatParam */,
	{ NULL, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke_back, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke_cleanup, NULL, NULL, &EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_0_0_0 } /* UnityEngine.ParticleSystem/EmitParams */,
	{ NULL, GraphUpdateLock_t14991F5E646AEE0CDBF5DE1A2C8797119A22A71A_marshal_pinvoke, GraphUpdateLock_t14991F5E646AEE0CDBF5DE1A2C8797119A22A71A_marshal_pinvoke_back, GraphUpdateLock_t14991F5E646AEE0CDBF5DE1A2C8797119A22A71A_marshal_pinvoke_cleanup, NULL, NULL, &GraphUpdateLock_t14991F5E646AEE0CDBF5DE1A2C8797119A22A71A_0_0_0 } /* Pathfinding.PathProcessor/GraphUpdateLock */,
	{ DelegatePInvokeWrapper_CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876, NULL, NULL, NULL, NULL, NULL, &CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876_0_0_0 } /* UnityEngine.Playables.PlayableBinding/CreateOutputMethod */,
	{ DelegatePInvokeWrapper_UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA, NULL, NULL, NULL, NULL, NULL, &UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction */,
	{ NULL, Node_tF0422FF957FC0272AA083A4CDA3E388A76150D3E_marshal_pinvoke, Node_tF0422FF957FC0272AA083A4CDA3E388A76150D3E_marshal_pinvoke_back, Node_tF0422FF957FC0272AA083A4CDA3E388A76150D3E_marshal_pinvoke_cleanup, NULL, NULL, &Node_tF0422FF957FC0272AA083A4CDA3E388A76150D3E_0_0_0 } /* Pathfinding.PointKDTree/Node */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback */,
	{ DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34, NULL, NULL, NULL, NULL, NULL, &GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback */,
	{ DelegatePInvokeWrapper_Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29, NULL, NULL, NULL, NULL, NULL, &Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback */,
	{ DelegatePInvokeWrapper_Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F, NULL, NULL, NULL, NULL, NULL, &Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback */,
	{ DelegatePInvokeWrapper_RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005, NULL, NULL, NULL, NULL, NULL, &RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback */,
	{ NULL, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke_back, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke_cleanup, NULL, NULL, &LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_0_0_0 } /* System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping */,
	{ NULL, CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_marshal_pinvoke, CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_marshal_pinvoke_back, CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_marshal_pinvoke_cleanup, NULL, NULL, &CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/CompiledPassInfo */,
	{ NULL, CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_marshal_pinvoke, CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_marshal_pinvoke_back, CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_marshal_pinvoke_cleanup, NULL, NULL, &CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/CompiledResourceInfo */,
	{ NULL, PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshal_pinvoke, PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshal_pinvoke_back, PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshal_pinvoke_cleanup, NULL, NULL, &PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData */,
	{ NULL, ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshal_pinvoke, ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshal_pinvoke_back, ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshal_pinvoke_cleanup, NULL, NULL, &ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData */,
	{ NULL, RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_marshal_pinvoke, RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_marshal_pinvoke_back, RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_marshal_pinvoke_cleanup, NULL, NULL, &RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RendererListResource */,
	{ NULL, Hasher_tA7470349F582CA60FD4152EDD7860547F12755AE_marshal_pinvoke, Hasher_tA7470349F582CA60FD4152EDD7860547F12755AE_marshal_pinvoke_back, Hasher_tA7470349F582CA60FD4152EDD7860547F12755AE_marshal_pinvoke_cleanup, NULL, NULL, &Hasher_tA7470349F582CA60FD4152EDD7860547F12755AE_0_0_0 } /* Pathfinding.Util.RetainedGizmos/Hasher */,
	{ NULL, MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538_marshal_pinvoke, MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538_marshal_pinvoke_back, MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538_marshal_pinvoke_cleanup, NULL, NULL, &MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538_0_0_0 } /* Pathfinding.Util.RetainedGizmos/MeshWithHash */,
	{ NULL, HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_marshal_pinvoke, HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_marshal_pinvoke_back, HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke, Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke_back, Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke_cleanup, NULL, NULL, &Edge_tC11235216D5E71087549B2CB09A27043F02FB278_0_0_0 } /* UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge */,
	{ NULL, Escape_t0479DB63473055AD46754E698B2114579D5D944E_marshal_pinvoke, Escape_t0479DB63473055AD46754E698B2114579D5D944E_marshal_pinvoke_back, Escape_t0479DB63473055AD46754E698B2114579D5D944E_marshal_pinvoke_cleanup, NULL, NULL, &Escape_t0479DB63473055AD46754E698B2114579D5D944E_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_marshal_pinvoke, Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_marshal_pinvoke_back, Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_0_0_0 } /* TMPro.TMP_DefaultControls/Resources */,
	{ DelegatePInvokeWrapper_OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA_0_0_0 } /* TMPro.TMP_InputField/OnValidateInput */,
	{ NULL, SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshal_pinvoke, SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshal_pinvoke_back, SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshal_pinvoke_cleanup, NULL, NULL, &SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_0_0_0 } /* TMPro.TMP_Text/SpecialCharacter */,
	{ NULL, TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshal_pinvoke, TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshal_pinvoke_back, TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshal_pinvoke_cleanup, NULL, NULL, &TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_0_0_0 } /* TMPro.TMP_Text/TextBackingContainer */,
	{ NULL, Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke, Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke_back, Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke_cleanup, NULL, NULL, &Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_0_0_0 } /* TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame */,
	{ NULL, Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_marshal_pinvoke, Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_marshal_pinvoke_back, Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_marshal_pinvoke_cleanup, NULL, NULL, &Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_0_0_0 } /* TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Meta */,
	{ NULL, FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke, FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke_back, FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke_cleanup, NULL, NULL, &FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_0_0_0 } /* System.Globalization.TimeSpanFormat/FormatLiterals */,
	{ NULL, TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_marshal_pinvoke, TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_marshal_pinvoke_back, TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanRawInfo */,
	{ NULL, TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_marshal_pinvoke, TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_marshal_pinvoke_back, TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanResult */,
	{ NULL, TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_marshal_pinvoke, TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_marshal_pinvoke_back, TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanToken */,
	{ NULL, TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_marshal_pinvoke, TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_marshal_pinvoke_back, TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanTokenizer */,
	{ NULL, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke_back, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke_cleanup, NULL, NULL, &DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_0_0_0 } /* System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION */,
	{ NULL, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_back, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_cleanup, NULL, NULL, &TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_0_0_0 } /* System.TimeZoneInfo/TIME_ZONE_INFORMATION */,
	{ NULL, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke_back, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke_cleanup, NULL, NULL, &TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_0_0_0 } /* System.TimeZoneInfo/TransitionTime */,
	{ NULL, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke_back, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke, VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke_back, VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke_cleanup, NULL, NULL, &VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_0_0_0 } /* System.Version/VersionResult */,
	{ NULL, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshal_pinvoke, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshal_pinvoke_back, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshal_pinvoke_cleanup, NULL, NULL, &XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_0_0_0 } /* UnityEngine.XR.XRDisplaySubsystem/XRBlitParams */,
	{ NULL, XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke, XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke_back, XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke_cleanup, NULL, NULL, &XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_0_0_0 } /* UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc */,
	{ NULL, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshal_pinvoke, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshal_pinvoke_back, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshal_pinvoke_cleanup, NULL, NULL, &XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_0_0_0 } /* UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter */,
	{ NULL, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke_back, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke_cleanup, NULL, NULL, &XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_0_0_0 } /* UnityEngine.XR.XRDisplaySubsystem/XRRenderPass */,
	{ DelegatePInvokeWrapper_WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF, NULL, NULL, NULL, NULL, NULL, &WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF_0_0_0 } /* System.Console/WindowsConsole/WindowsCancelHandler */,
	{ NULL, DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_marshal_pinvoke, DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_marshal_pinvoke_back, DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_marshal_pinvoke_cleanup, NULL, NULL, &DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor */,
	{ NULL, DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_marshal_pinvoke, DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_marshal_pinvoke_back, DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_marshal_pinvoke_cleanup, NULL, NULL, &DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor */,
	NULL,
};
