#include "pch.h"
#include "Windows.Xbox.Input.InputManagerInternal.h"
#include "Windows.Xbox.Input.InputManagerInternal.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    void InputManagerInternal::OverrideKinectInteractionMode(winrt::Windows::Xbox::Input::KinectInteractionMode const& mode, uint32_t durationMilliseconds)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManagerInternal::SetManipulationRect(int32_t left, int32_t top, int32_t right, int32_t bottom)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManagerInternal::SetSystemCursorAttractionRect(int32_t left, int32_t top, int32_t right, int32_t bottom)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManagerInternal::ForceGamepadCursorActivation(int32_t x, int32_t y)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManagerInternal::SetCursorPos(int32_t x, int32_t y)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
