#include "pch.h"
#include "Windows.h"
#include "Windows.Xbox.Input.GamepadReading.h"
#include "Windows.Xbox.Input.Gamepad.h"
#include "Windows.Xbox.Input.Gamepad.g.cpp"
#include <winrt/Windows.Foundation.Collections.h>
#include <Xinput.h>
#include "Windows.Xbox.System.User.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IGamepad> Gamepad::Gamepads()
    {
        wprintf(L"Gamepad || Gamepads Queried!\n");

        if (staticGamepads == Foundation::Collections::IVector<winrt::Windows::Xbox::Input::IGamepad>(nullptr) || staticGamepads.Size() == 0) {
            staticGamepads = winrt::single_threaded_vector<Input::IGamepad>();
            
            for (DWORD gamepad = 0; gamepad < XUSER_MAX_COUNT; gamepad++)
            {
                XINPUT_CAPABILITIES capabilities;
                if (XInputGetCapabilities(gamepad, XINPUT_FLAG_GAMEPAD, &capabilities) == ERROR_SUCCESS)
                {
                    wprintf(L"Gamepad || Gamepad %d Created!\n", gamepad);
                    IGamepad newGamepad = winrt::make<Gamepad>(gamepad);
                    staticGamepads.Append(newGamepad);
                    continue;
                }
            }
        }

        if (staticGamepads.Size() == 0) {
            wprintf(L"Gamepad || No Gamepads Found!\n");
            IGamepad dummyGamepad = winrt::make<Gamepad>(0);
            staticGamepads.Append(dummyGamepad);
        }

        return staticGamepads.GetView();
    }
    winrt::event_token Gamepad::GamepadAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadAddedEventArgs> const& handler)
    {
		wprintf(L"Gamepad || Gamepad Added!\n");
        return {};
    }
    void Gamepad::GamepadAdded(winrt::event_token const& token) noexcept
    {
        wprintf(L"Gamepad || Gamepad Added!\n");
        throw hresult_not_implemented();
    }
    winrt::event_token Gamepad::GamepadRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadRemovedEventArgs> const& handler)
    {
		wprintf(L"Gamepad || Gamepad Removed!\n");
        return {};
    }
    void Gamepad::GamepadRemoved(winrt::event_token const& token) noexcept
    {
        wprintf(L"Gamepad || Gamepad Removed!\n");
        throw hresult_not_implemented();
    }
    uint64_t Gamepad::Id()
    {
		wprintf(L"Gamepad || Gamepad ID ( %d ) Queried!\n", m_id);
        return m_id;
    }
    hstring Gamepad::Type()
    {
        return L"Windows.Xbox.Input.Gamepad";
    }
    winrt::Windows::Xbox::System::User Gamepad::User()
    {
		wprintf(L"Gamepad || User Queried!\n");
		return System::implementation::User::Users().GetAt(Id());
    }
    winrt::Windows::Xbox::Input::INavigationReading Gamepad::GetNavigationReading()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::RawNavigationReading Gamepad::GetRawNavigationReading()
    {
        RawNavigationReading dummyNavigationReading = RawNavigationReading();
        dummyNavigationReading.Timestamp = GetTickCount64();
		dummyNavigationReading.Buttons |= NavigationButtons::Up;
		return dummyNavigationReading;
    }
    winrt::event_token Gamepad::NavigationReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::NavigationController, winrt::Windows::Xbox::Input::INavigationReadingChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Gamepad::NavigationReadingChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    void Gamepad::SetVibration(winrt::Windows::Xbox::Input::GamepadVibration const& value)
    {
        XINPUT_VIBRATION vibration;
        ZeroMemory(&vibration, sizeof(XINPUT_VIBRATION));
        vibration.wLeftMotorSpeed = value.LeftMotorLevel * 65535;
        vibration.wRightMotorSpeed = value.RightMotorLevel * 65535;
        XInputSetState(m_id, &vibration);
    }
    winrt::Windows::Xbox::Input::IGamepadReading Gamepad::GetCurrentReading()
    {
        return winrt::make<implementation::GamepadReading>(GetRawCurrentReading());
    }
    winrt::Windows::Xbox::Input::RawGamepadReading Gamepad::GetRawCurrentReading()
    {
        XINPUT_STATE xiState;
		ZeroMemory(&xiState, sizeof(XINPUT_STATE));
        RawGamepadReading reading = {};

        if (XInputGetState(m_id, &xiState) == ERROR_SUCCESS)
        {
            for (int i = 0; i < ARRAYSIZE(gamepadButtons); i++)
            {
                if (xiState.Gamepad.wButtons & gamepadButtons[ i ].first)
                {
                    reading.Buttons |= gamepadButtons[ i ].second;
                }
            }

            reading.LeftTrigger = xiState.Gamepad.bLeftTrigger / 255.f;
            reading.RightTrigger = xiState.Gamepad.bRightTrigger / 255.f;
            reading.LeftThumbstickX = xiState.Gamepad.sThumbLX / 32768.f;
            reading.LeftThumbstickY = xiState.Gamepad.sThumbLY / 32768.f;
            reading.RightThumbstickX = xiState.Gamepad.sThumbRX / 32768.f;
            reading.RightThumbstickY = xiState.Gamepad.sThumbRY / 32768.f;
        }

        for (int i = 0; i < ARRAYSIZE(keyboardButtons); i++)
        {
			if (GetAsyncKeyState(keyboardButtons[ i ].first))
			{
				reading.Buttons |= keyboardButtons[ i ].second;
			}
        }

        return reading;
    }
    winrt::event_token Gamepad::ReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::Gamepad, winrt::Windows::Xbox::Input::IGamepadReadingChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Gamepad::ReadingChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    bool Gamepad::IsTrusted()
    {
        return true;
    }
}
