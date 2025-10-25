#pragma once
#include "Windows.Kinect.PropertyChangedEventArgs.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct PropertyChangedEventArgs : PropertyChangedEventArgsT<PropertyChangedEventArgs>
    {
        PropertyChangedEventArgs() = default;

        hstring PropertyName();
    };
}
