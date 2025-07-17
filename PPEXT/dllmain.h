// dllmain.h : Declaration of module class.

class CPPEXTModule : public ATL::CAtlDllModuleT< CPPEXTModule >
{
public :
	DECLARE_LIBID(LIBID_PPEXTLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_PPEXT, "{f2a46a69-3330-45e3-8ff4-934516da1820}")
};

extern class CPPEXTModule _AtlModule;
