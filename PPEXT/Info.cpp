// Info.cpp : Implementation of CInfo

#include "pch.h"
#include "Info.h"


// CInfo
STDMETHODIMP CInfo::Version(BSTR* pVal)
{
	if (!pVal) return E_POINTER;
	*pVal = SysAllocString(L"1.0.0");
	return *pVal ? S_OK : E_OUTOFMEMORY;
}


STDMETHODIMP CInfo::Name(BSTR* pVal)
{
	if (!pVal) return E_POINTER;
	*pVal = SysAllocString(L"Prophet Professional Extension Library PPEXT");
	return *pVal ? S_OK : E_OUTOFMEMORY;
}

STDMETHODIMP CInfo::Author(BSTR* pVal)
{
	if (!pVal) return E_POINTER;
	*pVal = SysAllocString(L"Harold James Krause");
	return *pVal ? S_OK : E_OUTOFMEMORY;
}

STDMETHODIMP CInfo::Description(BSTR* pVal)
{
	if (!pVal) return E_POINTER;
	*pVal = SysAllocString(L"Helper functions for managing Prophet tables and runs");
	return *pVal ? S_OK : E_OUTOFMEMORY;
}
