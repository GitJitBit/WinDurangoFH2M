#include "Windows.Xbox.Media.GameTransportControls.h"
#include "Windows.Xbox.Media.GameTransportControls.g.cpp"
#include "../../kernelx/x64/Debug/Generated Files/winrt/base.h"

namespace winrt::Windows::Xbox::Media::implementation
{
    hstring GameTransportControls::Title()
    {
        return L"null";
    }
    hstring GameTransportControls::Subtitle()
    {
        return L"null";
    }
    winrt::Windows::Xbox::Media::GamePlaybackStatus GameTransportControls::PlaybackStatus() const
    {
        return m_gamePlaybackStatus;
    }
    void GameTransportControls::PlaybackStatus(winrt::Windows::Xbox::Media::GamePlaybackStatus const& value)
    {
        m_gamePlaybackStatus = value;
    }
    winrt::Windows::Xbox::Media::SoundLevel GameTransportControls::SoundLevel()
    {
        return SoundLevel::Muted;
    }
    bool GameTransportControls::IsEnabled()
    {
        return m_enabled;
    }
    void GameTransportControls::IsEnabled(bool value)
    {
        m_enabled = value;
    }

    bool GameTransportControls::IsPlayEnabled()
    {
        return m_playEnabled;
    }
    void GameTransportControls::IsPlayEnabled(bool value)
    {
        m_playEnabled = value;
    }

    bool GameTransportControls::IsPauseEnabled()
    {
        return m_pauseEnabled;
    }
    void GameTransportControls::IsPauseEnabled(bool value)
    {
        m_pauseEnabled = value;
    }

    bool GameTransportControls::IsMenuEnabled()
    {
        return m_menuEnabled;
    }
    void GameTransportControls::IsMenuEnabled(bool value)
    {
        m_menuEnabled = value;
    }

    bool GameTransportControls::IsViewEnabled()
    {
        return m_viewEnabled;
    }
    void GameTransportControls::IsViewEnabled(bool value)
    {
        m_viewEnabled = value;
    }

    bool GameTransportControls::IsBackEnabled()
    {
        return m_backEnabled;
    }
    void GameTransportControls::IsBackEnabled(bool value)
    {
        m_backEnabled = value;
    }
    winrt::event_token GameTransportControls::ButtonPressed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Media::GameTransportControls, winrt::Windows::Xbox::Media::GameTransportControlsButtonPressedEventArgs> const& handler)
    {
        return m_gameTransportControlsButtonPressedEventArgs.add(handler);
    }
    void GameTransportControls::ButtonPressed(winrt::event_token const& token) noexcept
    {
        m_gameTransportControlsButtonPressedEventArgs.remove(token);
    }
    winrt::event_token GameTransportControls::PropertyChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Media::GameTransportControls, winrt::Windows::Xbox::Media::GameTransportControlsPropertyChangedEventArgs> const& handler)
    {
        return m_gameTransportControlsPropertyChangedEventArgs.add(handler);
    }
    void GameTransportControls::PropertyChanged(winrt::event_token const& token) noexcept
    {
        m_gameTransportControlsPropertyChangedEventArgs.remove(token);
    }
}
