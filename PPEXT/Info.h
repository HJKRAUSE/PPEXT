// Info.h : Declaration of the CInfo

#pragma once
#include "resource.h"       // main symbols



#include "PPEXT_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CInfo

class ATL_NO_VTABLE CInfo :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CInfo, &CLSID_Info>,
	public IDispatchImpl<IInfo, &IID_IInfo, &LIBID_PPEXTLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CInfo() { }

	STDMETHOD(Version)(BSTR* pval);
	STDMETHOD(Name)(BSTR* pval);
	STDMETHOD(Author)(BSTR* pval);
	STDMETHOD(Description)(BSTR* pval);

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CInfo)
	COM_INTERFACE_ENTRY(IInfo)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease() { }

public:

};

OBJECT_ENTRY_AUTO(__uuidof(Info), CInfo)
