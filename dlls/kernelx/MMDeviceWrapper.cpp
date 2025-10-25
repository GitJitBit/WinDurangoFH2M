#include "pch.h"
#include "MMDeviceWrapper.h"

MMDeviceWrapper::MMDeviceWrapper(IMMDevice* realDevice) : m_realDevice(realDevice)
{
    if (m_realDevice)
        m_realDevice->AddRef();
}

HRESULT __stdcall MMDeviceWrapper::QueryInterface(REFIID riid, void** ppvObject)
{
    printf("[MMDeviceWrapper] QueryInterface called\n");
    LPOLESTR str = nullptr;
    StringFromIID(riid, &str);
    wprintf(L"[QueryInterface] IID requested: %ls\n", str);
    CoTaskMemFree(str);

    return m_realDevice->QueryInterface(riid, ppvObject);
}

ULONG __stdcall MMDeviceWrapper::AddRef(void)
{
    printf("[MMDeviceWrapper] AddRef called\n");
    return InterlockedIncrement(&m_refCount);
}

ULONG __stdcall MMDeviceWrapper::Release(void)
{
    printf("[MMDeviceWrapper] Release called\n");
    ULONG count = InterlockedDecrement(&m_refCount);
    if (count == 0)
    {
        if (m_realDevice)
            m_realDevice->Release();
        delete this;
    }
    return count;
}

HRESULT __stdcall MMDeviceWrapper::Activate(REFIID iid, DWORD dwClsCtx, PROPVARIANT* pActivationParams, void** ppInterface)
{
    printf("[MMDeviceWrapper] Activate called\n");
    return m_realDevice->Activate(iid, dwClsCtx, pActivationParams, ppInterface);

}


HRESULT __stdcall MMDeviceWrapper::OpenPropertyStore(DWORD stgmAccess, IPropertyStore** ppProperties)
{
    printf("[MMDeviceWrapper] OpenPropertyStore called\n");
    return m_realDevice->OpenPropertyStore(stgmAccess, ppProperties);
}

HRESULT __stdcall MMDeviceWrapper::GetId(LPWSTR* ppstrId)
{
    printf("[MMDeviceWrapper] GetId called\n");
    return m_realDevice->GetId(ppstrId);
}

HRESULT __stdcall MMDeviceWrapper::GetState(DWORD* pdwState)
{
    printf("[MMDeviceWrapper] GetState called\n");
    return m_realDevice->GetState(pdwState);
}