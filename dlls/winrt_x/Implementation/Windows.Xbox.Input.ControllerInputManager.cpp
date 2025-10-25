#include "pch.h"
#include "Windows.Xbox.Input.ControllerInputManager.h"
#include "Windows.Xbox.Input.ControllerInputManager.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    winrt::Windows::Xbox::Input::IController ControllerInputManager::GetControllerFromIndex(uint32_t index)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
