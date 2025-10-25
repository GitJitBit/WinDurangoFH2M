#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.PerformQosMeasurementsEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.PerformQosMeasurementsEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> PerformQosMeasurementsEventArgs::AddressToDeviceTokens()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
