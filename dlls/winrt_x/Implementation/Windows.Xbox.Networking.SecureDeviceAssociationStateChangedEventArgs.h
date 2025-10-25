//#pragma once
#include "Windows.Xbox.Networking.SecureDeviceAssociationStateChangedEventArgs.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct SecureDeviceAssociationStateChangedEventArgs : SecureDeviceAssociationStateChangedEventArgsT<SecureDeviceAssociationStateChangedEventArgs>
    {
        SecureDeviceAssociationStateChangedEventArgs() = default;

        winrt::Windows::Xbox::Networking::SecureDeviceAssociationState OldState();
        winrt::Windows::Xbox::Networking::SecureDeviceAssociationState NewState();
    };
}
