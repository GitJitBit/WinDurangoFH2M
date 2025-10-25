#pragma once
#include "Windows.Xbox.System.Console2.g.h"

namespace winrt::Windows::Xbox::System::implementation
{
    struct Console2
    {
        Console2() = default;

        static hstring ApplicationSpecificDeviceId();
    };
}
namespace winrt::Windows::Xbox::System::factory_implementation
{
    struct Console2 : Console2T<Console2, implementation::Console2>
    {
    };
}
