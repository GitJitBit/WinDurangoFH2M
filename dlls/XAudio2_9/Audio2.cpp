/*
================================================================================
DISCLAIMER AND LICENSE REQUIREMENT

This code is provided with the condition that if you use, modify, or distribute
this code in your project, you are required to make your project open source
under a license compatible with the GNU General Public License (GPL) or a
similarly strong copyleft license.

By using this code, you agree to:
1. Disclose your complete source code of any project incorporating this code.
2. Include this disclaimer in any copies or substantial portions of this file.
3. Provide clear attribution to the original author.

If you do not agree to these terms, you do not have permission to use this code.

================================================================================
*/
#include "pch.h"
#include <xaudio2.h>
#include <wrl.h>
#include <stdio.h>
#include "../common/Logger.h"

#define WAVE_FORMAT_XMA2 0x166



class CXAudio2SourceVoiceNull : public IXAudio2SourceVoice
{
    HRESULT STDMETHODCALLTYPE Start(UINT32 Flags, UINT32 OperationSet) override
    {
        return E_NOTIMPL;
    }

    HRESULT STDMETHODCALLTYPE Stop(UINT32 Flags, UINT32 OperationSet) override
    {
        return E_NOTIMPL;
    }

    HRESULT STDMETHODCALLTYPE SubmitSourceBuffer(const XAUDIO2_BUFFER* pBuffer, const XAUDIO2_BUFFER_WMA* pBufferWMA) override
    {
        return E_NOTIMPL;
    }

    HRESULT STDMETHODCALLTYPE FlushSourceBuffers(void) override
    {
        return E_NOTIMPL;
    }

    HRESULT STDMETHODCALLTYPE Discontinuity(void) override
    {
        return E_NOTIMPL;
    }

    HRESULT STDMETHODCALLTYPE ExitLoop(UINT32 OperationSet) override
    {
        return E_NOTIMPL;
    }

    void STDMETHODCALLTYPE GetState(XAUDIO2_VOICE_STATE* pVoiceState, UINT32 Flags) override
    {
    }

    HRESULT STDMETHODCALLTYPE SetFrequencyRatio(float Ratio, UINT32 OperationSet) override
    {
        return E_NOTIMPL;
    }

    void STDMETHODCALLTYPE GetFrequencyRatio(float* pRatio) override
    {
    }

    HRESULT STDMETHODCALLTYPE SetSourceSampleRate(UINT32 NewSourceSampleRate) override
    {
        return E_NOTIMPL;
    }

    void GetVoiceDetails(XAUDIO2_VOICE_DETAILS* pVoiceDetails) noexcept override
    {
    }

    HRESULT SetOutputVoices(const XAUDIO2_VOICE_SENDS* pSendList) noexcept override
    {
        return E_NOTIMPL;
    }

    HRESULT SetEffectChain(const XAUDIO2_EFFECT_CHAIN* pEffectChain) noexcept override
    {
        return E_NOTIMPL;
    }

    HRESULT EnableEffect(UINT32 EffectIndex, UINT32 OperationSet = 0U) noexcept override
    {
        return E_NOTIMPL;
    }

    HRESULT DisableEffect(UINT32 EffectIndex, UINT32 OperationSet = 0U) noexcept override
    {
        return E_NOTIMPL;
    }

    void GetEffectState(UINT32 EffectIndex, BOOL* pEnabled) noexcept override
    {
    }

    HRESULT SetEffectParameters(UINT32 EffectIndex, const void* pParameters, UINT32 ParametersByteSize, UINT32 OperationSet = 0U) noexcept override
    {
        return E_NOTIMPL;
    }

    HRESULT GetEffectParameters(UINT32 EffectIndex, void* pParameters, UINT32 ParametersByteSize) noexcept override
    {
        return E_NOTIMPL;
    }

    HRESULT SetFilterParameters(const XAUDIO2_FILTER_PARAMETERS* pParameters, UINT32 OperationSet = 0U) noexcept override
    {
        return E_NOTIMPL;
    }

    void GetFilterParameters(XAUDIO2_FILTER_PARAMETERS* pParameters) noexcept override
    {
    }

    HRESULT SetOutputFilterParameters(IXAudio2Voice* pDestinationVoice, const XAUDIO2_FILTER_PARAMETERS* pParameters, UINT32 OperationSet = 0U) noexcept override
    {
        return E_NOTIMPL;
    }

    void GetOutputFilterParameters(IXAudio2Voice* pDestinationVoice, XAUDIO2_FILTER_PARAMETERS* pParameters) noexcept override
    {
    }

    HRESULT SetVolume(float Volume, UINT32 OperationSet = 0U) noexcept override
    {
        return E_NOTIMPL;
    }

    void GetVolume(float* pVolume) noexcept override
    {
    }

    HRESULT SetChannelVolumes(UINT32 Channels, const float* pVolumes, UINT32 OperationSet = 0U) noexcept override
    {
        return E_NOTIMPL;
    }

    void GetChannelVolumes(UINT32 Channels, float* pVolumes) noexcept override
    {
    }

    HRESULT SetOutputMatrix(IXAudio2Voice* pDestinationVoice, UINT32 SourceChannels, UINT32 DestinationChannels, const float* pLevelMatrix, UINT32 OperationSet = 0U) noexcept override
    {
        return E_NOTIMPL;
    }

    void GetOutputMatrix(IXAudio2Voice* pDestinationVoice, UINT32 SourceChannels, UINT32 DestinationChannels, float* pLevelMatrix) noexcept override
    {
    }

    void DestroyVoice() noexcept override
    {
    }
};

class CXAudio2 : public IXAudio2
{
    LONG m_RefCount;
    IXAudio2* m_pXAudio2;
public:
    CXAudio2(IXAudio2* pXAudio2) :
        m_RefCount(1),
        m_pXAudio2(pXAudio2)
    {
        pXAudio2->AddRef();
    }

    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvInterface) override
    {
        // XWineUnwrapInterfaceHandler(m_pXAudio2, riid, ppvInterface);
        return E_NOTIMPL;
    }

    ULONG STDMETHODCALLTYPE AddRef(void) override
    {
        return InterlockedIncrement(&m_RefCount);
    }

    ULONG STDMETHODCALLTYPE Release(void) override
    {
        ULONG uCount = InterlockedDecrement(&m_RefCount);

        if (uCount == 0)
        {
            m_pXAudio2->Release();
            delete this;
        }

        return uCount;
    }

    HRESULT STDMETHODCALLTYPE RegisterForCallbacks(IXAudio2EngineCallback* pCallback) override
    {
        return m_pXAudio2->RegisterForCallbacks(pCallback);
    }

    void STDMETHODCALLTYPE UnregisterForCallbacks(IXAudio2EngineCallback* pCallback) override
    {
        m_pXAudio2->UnregisterForCallbacks(pCallback);
    }

    HRESULT STDMETHODCALLTYPE CreateSourceVoice(IXAudio2SourceVoice** ppSourceVoice, const WAVEFORMATEX* pSourceFormat, UINT32 Flags, float MaxFrequencyRatio, IXAudio2VoiceCallback* pCallback, const XAUDIO2_VOICE_SENDS* pSendList, const XAUDIO2_EFFECT_CHAIN* pEffectChain) override
    {
        static IXAudio2SourceVoice* s_NullVoice = new CXAudio2SourceVoiceNull();

        if (pSourceFormat->wFormatTag == WAVE_FORMAT_XMA2)
        {
            *ppSourceVoice = s_NullVoice;
            return S_OK;
        }

        return m_pXAudio2->CreateSourceVoice(ppSourceVoice, pSourceFormat, Flags, MaxFrequencyRatio, pCallback, pSendList, pEffectChain);
    }

    HRESULT STDMETHODCALLTYPE CreateSubmixVoice(IXAudio2SubmixVoice** ppSubmixVoice, UINT32 InputChannels, UINT32 InputSampleRate, UINT32 Flags, UINT32 ProcessingStage, const XAUDIO2_VOICE_SENDS* pSendList, const XAUDIO2_EFFECT_CHAIN* pEffectChain) override
    {
        return m_pXAudio2->CreateSubmixVoice(ppSubmixVoice, InputChannels, InputSampleRate, Flags, ProcessingStage, pSendList, pEffectChain);
    }

    HRESULT STDMETHODCALLTYPE CreateMasteringVoice(IXAudio2MasteringVoice** ppMasteringVoice, UINT32 InputChannels, UINT32 InputSampleRate, UINT32 Flags, LPCWSTR szDeviceId, const XAUDIO2_EFFECT_CHAIN* pEffectChain, AUDIO_STREAM_CATEGORY StreamCategory) override
    {
        return m_pXAudio2->CreateMasteringVoice(ppMasteringVoice, InputChannels, InputSampleRate, Flags, szDeviceId, pEffectChain, StreamCategory);
    }

    HRESULT STDMETHODCALLTYPE StartEngine(void) override
    {
        return m_pXAudio2->StartEngine();
    }

    void STDMETHODCALLTYPE StopEngine(void) override
    {
        m_pXAudio2->StopEngine();
    }

    HRESULT STDMETHODCALLTYPE CommitChanges(UINT32 OperationSet) override
    {
        return m_pXAudio2->CommitChanges(OperationSet);
    }

    void STDMETHODCALLTYPE GetPerformanceData(XAUDIO2_PERFORMANCE_DATA* pPerfData) override
    {
        m_pXAudio2->GetPerformanceData(pPerfData);
    }

    void STDMETHODCALLTYPE SetDebugConfiguration(const XAUDIO2_DEBUG_CONFIGURATION* pDebugConfiguration, void* pReserved) override
    {
        m_pXAudio2->SetDebugConfiguration(pDebugConfiguration, pReserved);
    }
};

HRESULT STDAPICALLTYPE CreateXAudio2Object(
    IXAudio2** ppXAudio2,
    UINT32 Flags,
    XAUDIO2_PROCESSOR XAudio2Processor,
    void* pSharedShapeContexts)
{
    HRESULT hr;
    Microsoft::WRL::ComPtr<IXAudio2> pXAudio2;
    hr = XAudio2Create(&pXAudio2, Flags, XAudio2Processor);
    if (FAILED(hr))
        return hr;
    *ppXAudio2 = new CXAudio2(pXAudio2.Get());
    return hr;
}


HRESULT STDAPICALLTYPE CreateAudioReverb_X()
{
    LOG_WARNING("[XAudio]: CreateAudioReverb_X IS STUBBED\n");
    return S_OK;
}
HRESULT STDAPICALLTYPE CreateAudioVolumeMeter_X()
{
    LOG_WARNING("[XAudio]: CreateAudioVolumeMeter_X IS STUBBED\n");
    return S_OK;
}
HRESULT STDAPICALLTYPE CreateFX_X()
{
    LOG_WARNING("[XAudio]: CreateFX_X IS STUBBED\n");
    return S_OK;
}
HRESULT STDAPICALLTYPE X3DAudioCalculate_X()
{
    LOG_WARNING("[XAudio]: X3DAudioCalculate_X IS STUBBED\n");
    return S_OK;
}
HRESULT STDAPICALLTYPE X3DAudioInitialize_X()
{
    LOG_WARNING("[XAudio]: X3DAudioInitialize_X IS STUBBED\n");
    return S_OK;
}