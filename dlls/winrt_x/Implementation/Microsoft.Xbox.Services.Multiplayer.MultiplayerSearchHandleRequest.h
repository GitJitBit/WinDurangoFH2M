#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleRequest.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSearchHandleRequest : MultiplayerSearchHandleRequestT<MultiplayerSearchHandleRequest>
    {
        MultiplayerSearchHandleRequest() = default;

        MultiplayerSearchHandleRequest(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& sessionReference);
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference SessionReference();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> Tags();
        void Tags(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& tags);
        winrt::Windows::Foundation::Collections::IMapView<hstring, double> NumbersMetadata();
        void NumbersMetadata(winrt::Windows::Foundation::Collections::IMapView<hstring, double> const& metadata);
        winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> StringsMetadata();
        void StringsMetadata(winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> const& metadata);
    };
}
namespace winrt::Microsoft::Xbox::Services::Multiplayer::factory_implementation
{
    struct MultiplayerSearchHandleRequest : MultiplayerSearchHandleRequestT<MultiplayerSearchHandleRequest, implementation::MultiplayerSearchHandleRequest>
    {
    };
}
