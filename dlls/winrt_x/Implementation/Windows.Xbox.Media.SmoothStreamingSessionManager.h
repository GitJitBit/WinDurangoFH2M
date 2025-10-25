#pragma once
#include "Windows.Xbox.Media.SmoothStreamingSessionManager.g.h"

namespace winrt::Windows::Xbox::Media::implementation
{
    struct SmoothStreamingSessionManager : SmoothStreamingSessionManagerT<SmoothStreamingSessionManager>
    {
        SmoothStreamingSessionManager() = default;

        winrt::event_token SessionCreated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Media::ISmoothStreamingSessionManager, winrt::Windows::Xbox::Media::ISmoothStreamingSession> const& session);
        void SessionCreated(winrt::event_token const& cookie) noexcept;
    };
}
namespace winrt::Windows::Xbox::Media::factory_implementation
{
    struct SmoothStreamingSessionManager : SmoothStreamingSessionManagerT<SmoothStreamingSessionManager, implementation::SmoothStreamingSessionManager>
    {
    };
}
