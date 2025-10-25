#include "pch.h"
#include "Windows.Xbox.Multiplayer.MultiplayerSessionReference.h"
#include "Windows.Xbox.Multiplayer.MultiplayerSessionReference.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    MultiplayerSessionReference::MultiplayerSessionReference(hstring const& sessionName, hstring const& serviceConfigurationId, hstring const& sessionTemplateName)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::SessionName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::ServiceConfigurationId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::SessionTemplateName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
