#pragma once
#include "Windows.Xbox.Networking.SecureDeviceAssociationIncomingEventArgs.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct SecureDeviceAssociationIncomingEventArgs : SecureDeviceAssociationIncomingEventArgsT<SecureDeviceAssociationIncomingEventArgs>
    {
        SecureDeviceAssociationIncomingEventArgs() = default;

        winrt::Windows::Xbox::Networking::SecureDeviceAssociation Association();
    };
}
