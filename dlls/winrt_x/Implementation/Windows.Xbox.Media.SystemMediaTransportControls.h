#pragma once
#include "Windows.Xbox.Media.SystemMediaTransportControls.g.h"

namespace winrt::Windows::Xbox::Media::implementation
{
    struct SystemMediaTransportControls : SystemMediaTransportControlsT<SystemMediaTransportControls>
    {
        SystemMediaTransportControls() = default;

        static winrt::Windows::Xbox::Media::SystemMediaTransportControls GetForCurrentView();
        winrt::Windows::Xbox::Media::MediaPlaybackStatus PlaybackStatus();
        void PlaybackStatus(winrt::Windows::Xbox::Media::MediaPlaybackStatus const& value);
        winrt::Windows::Xbox::Media::SystemMediaTransportControlsDisplayUpdater DisplayUpdater();
        winrt::Windows::Media::SoundLevel SoundLevel();
        bool IsEnabled();
        void IsEnabled(bool value);
        bool IsPlayEnabled();
        void IsPlayEnabled(bool value);
        bool IsStopEnabled();
        void IsStopEnabled(bool value);
        bool IsPauseEnabled();
        void IsPauseEnabled(bool value);
        bool IsRecordEnabled();
        void IsRecordEnabled(bool value);
        bool IsFastForwardEnabled();
        void IsFastForwardEnabled(bool value);
        bool IsRewindEnabled();
        void IsRewindEnabled(bool value);
        bool IsPreviousEnabled();
        void IsPreviousEnabled(bool value);
        bool IsNextEnabled();
        void IsNextEnabled(bool value);
        bool IsChannelUpEnabled();
        void IsChannelUpEnabled(bool value);
        bool IsChannelDownEnabled();
        void IsChannelDownEnabled(bool value);
        bool IsBackEnabled();
        void IsBackEnabled(bool value);
        bool IsViewEnabled();
        void IsViewEnabled(bool value);
        bool IsMenuEnabled();
        void IsMenuEnabled(bool value);
        winrt::event_token ButtonPressed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Media::SystemMediaTransportControls, winrt::Windows::Xbox::Media::SystemMediaTransportControlsButtonPressedEventArgs> const& handler);
        void ButtonPressed(winrt::event_token const& token) noexcept;
        winrt::event_token PropertyChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Media::SystemMediaTransportControls, winrt::Windows::Xbox::Media::SystemMediaTransportControlsPropertyChangedEventArgs> const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;
    };
}
namespace winrt::Windows::Xbox::Media::factory_implementation
{
    struct SystemMediaTransportControls : SystemMediaTransportControlsT<SystemMediaTransportControls, implementation::SystemMediaTransportControls>
    {
    };
}
