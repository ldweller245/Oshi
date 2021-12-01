#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 UnityEngine.Vector3Int UnityEngine.GridLayout::WorldToCell(UnityEngine.Vector3)
extern void GridLayout_WorldToCell_m82CAD765015D9D3B8E1545EC7C5CB7C231D507A9 (void);
// 0x00000002 System.Void UnityEngine.GridLayout::DoNothing()
extern void GridLayout_DoNothing_m36201F4787709460C994921B16CAC95CD490E0A1 (void);
// 0x00000003 System.Void UnityEngine.GridLayout::WorldToCell_Injected(UnityEngine.Vector3&,UnityEngine.Vector3Int&)
extern void GridLayout_WorldToCell_Injected_m1C95D92A4371D5F53AD96EE214AFB287A4676C76 (void);
static Il2CppMethodPointer s_methodPointers[3] = 
{
	GridLayout_WorldToCell_m82CAD765015D9D3B8E1545EC7C5CB7C231D507A9,
	GridLayout_DoNothing_m36201F4787709460C994921B16CAC95CD490E0A1,
	GridLayout_WorldToCell_Injected_m1C95D92A4371D5F53AD96EE214AFB287A4676C76,
};
static const int32_t s_InvokerIndices[3] = 
{
	2140,
	2748,
	1117,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_GridModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_GridModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_GridModule_CodeGenModule = 
{
	"UnityEngine.GridModule.dll",
	3,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_GridModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
