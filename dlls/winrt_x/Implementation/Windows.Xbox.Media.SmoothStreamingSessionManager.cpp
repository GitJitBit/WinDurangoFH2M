#include "pch.h"
#include "Windows.Xbox.Media.SmoothStreamingSessionManager.h"
#include "Windows.Xbox.Media.SmoothStreamingSessionManager.g.cpp"

namespace winrt::Windows::Xbox::Media::implementation
{
    winrt::event_token SmoothStreamingSessionManager::SessionCreated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Media::ISmoothStreamingSessionManager, winrt::Windows::Xbox::Media::ISmoothStreamingSession> const& session)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SmoothStreamingSessionManager::SessionCreated(winrt::event_token const& cookie) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
