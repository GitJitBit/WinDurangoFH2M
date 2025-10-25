#include "pch.h"
#include "Windows.Xbox.Input.BodyController.h"
#include "Windows.Xbox.Input.BodyController.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IBodyController> BodyController::BodyControllers()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::BodyControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::BodyControllerAddedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyController::BodyControllerAdded(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::BodyControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::BodyControllerRemovedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyController::BodyControllerRemoved(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t BodyController::Id()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring BodyController::Type()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::User BodyController::User()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t BodyController::BiometricUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::BiometricUserChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IBiometricUserChangedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyController::BiometricUserChanged(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::IBodyControllerReading BodyController::GetCurrentReading()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::ReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IBodyControllerReadingChangedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyController::ReadingChanged(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint64_t> BodyController::AssociatedControllerIds()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::AssociatedControllerAdded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IAssociatedControllerAddedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyController::AssociatedControllerAdded(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::AssociatedControllerRemoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IAssociatedControllerRemovedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyController::AssociatedControllerRemoved(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
