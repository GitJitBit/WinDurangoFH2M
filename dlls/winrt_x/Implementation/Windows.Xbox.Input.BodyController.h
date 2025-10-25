#pragma once
#include "Windows.Xbox.Input.BodyController.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct BodyController : BodyControllerT<BodyController>
    {
        BodyController() = default;

        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IBodyController> BodyControllers();
        static winrt::event_token BodyControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::BodyControllerAddedEventArgs> const& handler);
        static void BodyControllerAdded(winrt::event_token const& token) noexcept;
        static winrt::event_token BodyControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::BodyControllerRemovedEventArgs> const& handler);
        static void BodyControllerRemoved(winrt::event_token const& token) noexcept;
        uint64_t Id();
        hstring Type();
        winrt::Windows::Xbox::System::User User();
        uint32_t BiometricUserId();
        winrt::event_token BiometricUserChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IBiometricUserChangedEventArgs> const& handler);
        void BiometricUserChanged(winrt::event_token const& token) noexcept;
        winrt::Windows::Xbox::Input::IBodyControllerReading GetCurrentReading();
        winrt::event_token ReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IBodyControllerReadingChangedEventArgs> const& handler);
        void ReadingChanged(winrt::event_token const& token) noexcept;
        winrt::Windows::Foundation::Collections::IVectorView<uint64_t> AssociatedControllerIds();
        winrt::event_token AssociatedControllerAdded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IAssociatedControllerAddedEventArgs> const& handler);
        void AssociatedControllerAdded(winrt::event_token const& token) noexcept;
        winrt::event_token AssociatedControllerRemoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IAssociatedControllerRemovedEventArgs> const& handler);
        void AssociatedControllerRemoved(winrt::event_token const& token) noexcept;
    };
}
namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct BodyController : BodyControllerT<BodyController, implementation::BodyController>
    {
    };
}
