#include "pch.h"
#include "MMDeviceCollectionWrapper.h"
#include <stdio.h>

MMDeviceCollectionWrapper::MMDeviceCollectionWrapper(IMMDeviceCollection* realCollection)
    : m_realCollection(realCollection)
{
    if (m_realCollection)
        m_realCollection->AddRef();
}

HRESULT STDMETHODCALLTYPE MMDeviceCollectionWrapper::QueryInterface(REFIID riid, void** ppvObject)
{
    LPOLESTR str = nullptr;
    StringFromIID(riid, &str);
    wprintf(L"[QueryInterface] IID requested: %ls\n", str);
    CoTaskMemFree(str);
    if (!ppvObject) return E_POINTER;

    if (riid == IID_IUnknown || riid == __uuidof(IMMDeviceCollection))
    {
        *ppvObject = static_cast<IMMDeviceCollection*>(this);
        AddRef();
        return S_OK;
    }

    return m_realCollection->QueryInterface(riid, ppvObject);
}

ULONG STDMETHODCALLTYPE MMDeviceCollectionWrapper::AddRef()
{
    return InterlockedIncrement(&m_refCount);
}

ULONG STDMETHODCALLTYPE MMDeviceCollectionWrapper::Release()
{
    ULONG count = InterlockedDecrement(&m_refCount);
    if (count == 0)
    {
        if (m_realCollection) m_realCollection->Release();
        delete this;
    }
    return count;
}

HRESULT STDMETHODCALLTYPE MMDeviceCollectionWrapper::GetCount(UINT* pcDevices)
{
    printf("[MMDeviceCollectionWrapper] GetCount called\n");
    return m_realCollection->GetCount(pcDevices);
}

HRESULT STDMETHODCALLTYPE MMDeviceCollectionWrapper::Item(UINT nDevice, IMMDevice** ppDevice)
{
    if (!ppDevice) return E_POINTER;
    IMMDevice* realDevice = nullptr;
    HRESULT hr = m_realCollection->Item(nDevice, &realDevice);

    if (SUCCEEDED(hr) && realDevice)
    {
        *ppDevice = new MMDeviceWrapper(realDevice);
    }
    else
    {
        *ppDevice = nullptr;
    }

    return hr;
}