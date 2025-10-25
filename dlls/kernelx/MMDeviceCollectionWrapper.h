#pragma once
#include <mmdeviceapi.h>
#include "MMDeviceWrapper.h"

class MMDeviceCollectionWrapper : public IMMDeviceCollection
{
public:
    MMDeviceCollectionWrapper(IMMDeviceCollection* m_realCollection);

    // IUnknown
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

    // IMMDeviceCollection
    HRESULT STDMETHODCALLTYPE GetCount(UINT* pcDevices) override;
    HRESULT STDMETHODCALLTYPE Item(UINT nDevice, IMMDevice** ppDevice) override;

    long m_refCount = 1;
    IMMDeviceCollection* m_realCollection;
};