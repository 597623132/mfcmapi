#pragma once
// Store Properties for MrMAPI

HRESULT HrMAPIOpenStoreAndFolder(
	_In_ LPMAPISESSION lpMAPISession,
	_In_ ULONG ulFolder,
	_In_ std::wstring lpszFolderPath,
	_Out_opt_ LPMDB* lppMDB,
	_Deref_out_opt_ LPMAPIFOLDER* lppFolder);

void PrintObjectProperties(const std::wstring& szObjType, _In_ LPMAPIPROP lpMAPIProp, ULONG ulPropTag);

void DoStore(_In_ MYOPTIONS ProgOpts);

LPMDB OpenStore(_In_ LPMAPISESSION lpMAPISession, ULONG ulIndex);