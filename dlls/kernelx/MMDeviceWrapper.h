#pragma once
#include <mmdeviceapi.h>


class MMDeviceWrapper : public IMMDevice
{
public:
    MMDeviceWrapper(IMMDevice* realDevice);

    // IUnknown
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef(void) override;
    ULONG STDMETHODCALLTYPE Release(void) override;

    // IMMDevice
    HRESULT STDMETHODCALLTYPE Activate(REFIID iid, DWORD dwClsCtx, PROPVARIANT* pActivationParams, void** ppInterface) override;
    HRESULT STDMETHODCALLTYPE OpenPropertyStore(DWORD stgmAccess, IPropertyStore** ppProperties) override;
    HRESULT STDMETHODCALLTYPE GetId(LPWSTR* ppstrId) override;
    HRESULT STDMETHODCALLTYPE GetState(DWORD* pdwState) override;


    private:
        LONG m_refCount = 1;  
        IMMDevice* m_realDevice;
};