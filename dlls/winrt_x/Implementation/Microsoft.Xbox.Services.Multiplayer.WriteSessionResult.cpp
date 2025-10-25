#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.WriteSessionResult.h"
#include "Microsoft.Xbox.Services.Multiplayer.WriteSessionResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    bool WriteSessionResult::Succeeded()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession WriteSessionResult::Session()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionStatus WriteSessionResult::Status()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
