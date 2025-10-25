#pragma once
#include "Windows.Xbox.Input.NavigationController.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct NavigationController : NavigationControllerT<NavigationController>
    {
        NavigationController() = default;

        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::INavigationController> NavigationControllers();
        static winrt::event_token NavigationControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::NavigationControllerAddedEventArgs> const& handler);
        static void NavigationControllerAdded(winrt::event_token const& token) noexcept;
        static winrt::event_token NavigationControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::NavigationControllerRemovedEventArgs> const& handler);
        static void NavigationControllerRemoved(winrt::event_token const& token) noexcept;
        uint64_t Id();
        hstring Type();
        winrt::Windows::Xbox::System::User User();
        winrt::Windows::Xbox::Input::INavigationReading GetNavigationReading();
        winrt::Windows::Xbox::Input::RawNavigationReading GetRawNavigationReading();
        winrt::event_token NavigationReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::NavigationController, winrt::Windows::Xbox::Input::INavigationReadingChangedEventArgs> const& handler);
        void NavigationReadingChanged(winrt::event_token const& token) noexcept;
    };
}
namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct NavigationController : NavigationControllerT<NavigationController, implementation::NavigationController>
    {
    };
}
