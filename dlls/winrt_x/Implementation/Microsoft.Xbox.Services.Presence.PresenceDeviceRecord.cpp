#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceDeviceRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceDeviceRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceType PresenceDeviceRecord::DeviceType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceTitleRecord> PresenceDeviceRecord::PresenceTitleRecords()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
