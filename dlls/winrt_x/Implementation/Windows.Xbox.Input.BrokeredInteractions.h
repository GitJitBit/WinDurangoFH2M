#pragma once
#include "Windows.Xbox.Input.BrokeredInteractions.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct BrokeredInteractions
    {
        BrokeredInteractions() = default;

        static winrt::Windows::Xbox::Input::InputMode SmartglassInputMode();
        static void SmartglassInputMode(winrt::Windows::Xbox::Input::InputMode const& mode);
        static winrt::Windows::Xbox::Input::ManipulationMode SmartglassManipulationModes();
        static void SmartglassManipulationModes(winrt::Windows::Xbox::Input::ManipulationMode const& mode);
        static winrt::Windows::Xbox::Input::InputMode GamepadInputMode();
        static void GamepadInputMode(winrt::Windows::Xbox::Input::InputMode const& mode);
        static winrt::Windows::Xbox::Input::ManipulationMode GamepadManipulationModes();
        static void GamepadManipulationModes(winrt::Windows::Xbox::Input::ManipulationMode const& mode);
        static void SetManipulationRect(int32_t left, int32_t top, int32_t right, int32_t bottom);
        static void SetSystemCursorAttractionRect(int32_t left, int32_t top, int32_t right, int32_t bottom);
        static void ForceGamepadCursorActivation(int32_t x, int32_t y);
        static void SetCursorPos(int32_t x, int32_t y);
    };
}
namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct BrokeredInteractions : BrokeredInteractionsT<BrokeredInteractions, implementation::BrokeredInteractions>
    {
    };
}
