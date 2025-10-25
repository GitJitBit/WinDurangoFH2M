#pragma once
#include "Windows.Kinect.IsPausedChangedEventArgs.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct IsPausedChangedEventArgs : IsPausedChangedEventArgsT<IsPausedChangedEventArgs>
    {
        IsPausedChangedEventArgs() = default;

        bool IsPaused();
    };
}
