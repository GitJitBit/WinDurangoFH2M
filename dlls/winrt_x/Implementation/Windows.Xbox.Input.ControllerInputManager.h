#pragma once
#include "Windows.Xbox.Input.ControllerInputManager.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct ControllerInputManager : ControllerInputManagerT<ControllerInputManager>
    {
        ControllerInputManager() = default;

        winrt::Windows::Xbox::Input::IController GetControllerFromIndex(uint32_t index);
    };
}
namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct ControllerInputManager : ControllerInputManagerT<ControllerInputManager, implementation::ControllerInputManager>
    {
    };
}
