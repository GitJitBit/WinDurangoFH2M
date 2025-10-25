#pragma once
#include "Windows.Xbox.Input.Controller.g.h"
#include <Xinput.h>

namespace winrt::Windows::Xbox::Input::implementation
{
    struct Controller : ControllerT<Controller>
    {
        Controller() = default;

        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IController> Controllers();
        static winrt::event_token ControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerAddedEventArgs> const& handler);
        static void ControllerAdded(winrt::event_token const& token) noexcept;
        static winrt::event_token ControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerRemovedEventArgs> const& handler);
        static void ControllerRemoved(winrt::event_token const& token) noexcept;
        static winrt::event_token ControllerPairingChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerPairingChangedEventArgs> const& handler);
        static void ControllerPairingChanged(winrt::event_token const& token) noexcept;
        static winrt::event_token ControllerOrderChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerOrderChangedEventArgs> const& handler);
        static void ControllerOrderChanged(winrt::event_token const& token) noexcept;
        static winrt::Windows::Xbox::Input::IController GetControllerById(uint64_t controllerId);
        static void GetControllerMetadata(uint64_t controllerId, winrt::Windows::Xbox::Input::MetadataVersion const& metadataVersion, com_array<uint8_t>& ppMetadata);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IController> GetControllersOrderedLeftToRight(winrt::Windows::Xbox::Input::ControllerOrderFilter const& orderFilter);
        uint64_t Id();
        hstring Type();
        winrt::Windows::Xbox::System::User User();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::IAudioDeviceInfo> AudioDevices();
        winrt::Windows::Xbox::Input::GameControllerVersionInfo FirmwareVersionInfo();
        winrt::Windows::Xbox::Input::GameControllerVersionInfo HardwareVersionInfo();
        uint16_t HardwareProductId();
        uint16_t HardwareVendorId();

        inline static winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Xbox::Input::IController> staticControllers = { nullptr };
    };
}
namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct Controller : ControllerT<Controller, implementation::Controller>
    {
    };
}
