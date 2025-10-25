#pragma once
#include "Windows.Xbox.Input.InputManager.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct InputManager
    {
        InputManager() = default;

        static void SetKinectOnePersonSystemEngagement();
        static void SetKinectTwoPersonSystemEngagement();
        static void SetKinectOnePersonManualEngagement(winrt::Windows::Xbox::Input::BodyHandPair const& bodyHandPair);
        static void SetKinectTwoPersonManualEngagement(winrt::Windows::Xbox::Input::BodyHandPair const& bodyHandPair1, winrt::Windows::Xbox::Input::BodyHandPair const& bodyHandPair2);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::BodyHandPair> KinectManualEngagedHands();
        static winrt::Windows::Xbox::Input::KinectEngagementMode KinectEngagementMode();
        static uint32_t MaximumKinectEngagedPersonCount();
        static winrt::Windows::Xbox::Input::SystemCursorVisibility SystemCursorVisibility();
        static void SystemCursorVisibility(winrt::Windows::Xbox::Input::SystemCursorVisibility const& visibility);
        static void DeferSystemGestures();
        static void OverrideKinectInteractionMode(winrt::Windows::Xbox::Input::KinectInteractionMode const& mode);
        static bool DoesGamepadDeferKinectInteractions();
        static void DoesGamepadDeferKinectInteractions(bool doesGamepadDeferKinectInteractions);
        static bool IsKinectPersonEngaged();
        static winrt::event_token IsKinectPersonEngagedChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::IsKinectPersonEngagedChangedEventArgs> const& handler);
        static void IsKinectPersonEngagedChanged(winrt::event_token const& token) noexcept;
        static winrt::Windows::Xbox::Input::InputMode SmartglassInputMode();
        static void SmartglassInputMode(winrt::Windows::Xbox::Input::InputMode const& mode);
        static winrt::Windows::Xbox::Input::ManipulationMode SmartglassManipulationModes();
        static void SmartglassManipulationModes(winrt::Windows::Xbox::Input::ManipulationMode const& mode);
        static winrt::Windows::Xbox::Input::InputMode GamepadInputMode();
        static void GamepadInputMode(winrt::Windows::Xbox::Input::InputMode const& mode);
        static winrt::Windows::Xbox::Input::ManipulationMode GamepadManipulationModes();
        static void GamepadManipulationModes(winrt::Windows::Xbox::Input::ManipulationMode const& mode);
    };
}
namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct InputManager : InputManagerT<InputManager, implementation::InputManager>
    {
    };
}
