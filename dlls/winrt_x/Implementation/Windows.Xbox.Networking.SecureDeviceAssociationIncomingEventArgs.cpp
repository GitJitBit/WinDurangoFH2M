#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationIncomingEventArgs.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationIncomingEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Xbox::Networking::SecureDeviceAssociation SecureDeviceAssociationIncomingEventArgs::Association()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
