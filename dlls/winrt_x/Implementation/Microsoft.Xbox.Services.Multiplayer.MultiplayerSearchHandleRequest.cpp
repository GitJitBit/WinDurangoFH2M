#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleRequest.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleRequest.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerSearchHandleRequest::MultiplayerSearchHandleRequest(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& sessionReference)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSearchHandleRequest::SessionReference()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSearchHandleRequest::Tags()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSearchHandleRequest::Tags(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& tags)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, double> MultiplayerSearchHandleRequest::NumbersMetadata()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSearchHandleRequest::NumbersMetadata(winrt::Windows::Foundation::Collections::IMapView<hstring, double> const& metadata)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> MultiplayerSearchHandleRequest::StringsMetadata()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSearchHandleRequest::StringsMetadata(winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> const& metadata)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
