#include "pch.h"
#include "Windows.Xbox.Input.InputManager.h"
#include "Windows.Xbox.Input.InputManager.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    void InputManager::SetKinectOnePersonSystemEngagement()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManager::SetKinectTwoPersonSystemEngagement()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManager::SetKinectOnePersonManualEngagement(winrt::Windows::Xbox::Input::BodyHandPair const& bodyHandPair)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManager::SetKinectTwoPersonManualEngagement(winrt::Windows::Xbox::Input::BodyHandPair const& bodyHandPair1, winrt::Windows::Xbox::Input::BodyHandPair const& bodyHandPair2)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::BodyHandPair> InputManager::KinectManualEngagedHands()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::KinectEngagementMode InputManager::KinectEngagementMode()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t InputManager::MaximumKinectEngagedPersonCount()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::SystemCursorVisibility InputManager::SystemCursorVisibility()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManager::SystemCursorVisibility(winrt::Windows::Xbox::Input::SystemCursorVisibility const& visibility)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManager::DeferSystemGestures()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManager::OverrideKinectInteractionMode(winrt::Windows::Xbox::Input::KinectInteractionMode const& mode)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool InputManager::DoesGamepadDeferKinectInteractions()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManager::DoesGamepadDeferKinectInteractions(bool doesGamepadDeferKinectInteractions)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool InputManager::IsKinectPersonEngaged()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token InputManager::IsKinectPersonEngagedChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::IsKinectPersonEngagedChangedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManager::IsKinectPersonEngagedChanged(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::InputMode InputManager::SmartglassInputMode()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManager::SmartglassInputMode(winrt::Windows::Xbox::Input::InputMode const& mode)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::ManipulationMode InputManager::SmartglassManipulationModes()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManager::SmartglassManipulationModes(winrt::Windows::Xbox::Input::ManipulationMode const& mode)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::InputMode InputManager::GamepadInputMode()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManager::GamepadInputMode(winrt::Windows::Xbox::Input::InputMode const& mode)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::ManipulationMode InputManager::GamepadManipulationModes()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InputManager::GamepadManipulationModes(winrt::Windows::Xbox::Input::ManipulationMode const& mode)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
