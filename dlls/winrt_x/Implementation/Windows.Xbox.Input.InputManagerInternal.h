#pragma once
#include "Windows.Xbox.Input.InputManagerInternal.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct InputManagerInternal
    {
        InputManagerInternal() = default;

        static void OverrideKinectInteractionMode(winrt::Windows::Xbox::Input::KinectInteractionMode const& mode, uint32_t durationMilliseconds);
        static void SetManipulationRect(int32_t left, int32_t top, int32_t right, int32_t bottom);
        static void SetSystemCursorAttractionRect(int32_t left, int32_t top, int32_t right, int32_t bottom);
        static void ForceGamepadCursorActivation(int32_t x, int32_t y);
        static void SetCursorPos(int32_t x, int32_t y);
    };
}
namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct InputManagerInternal : InputManagerInternalT<InputManagerInternal, implementation::InputManagerInternal>
    {
    };
}
