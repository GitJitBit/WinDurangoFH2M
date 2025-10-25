#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchBroadcast.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchBroadcast.g.cpp"


namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    hstring ContextualSearchBroadcast::XboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ContextualSearchBroadcast::Provider()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ContextualSearchBroadcast::BroadcasterIdFromProvider()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t ContextualSearchBroadcast::Viewers()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime ContextualSearchBroadcast::StartedDate()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> ContextualSearchBroadcast::CurrentStats()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
