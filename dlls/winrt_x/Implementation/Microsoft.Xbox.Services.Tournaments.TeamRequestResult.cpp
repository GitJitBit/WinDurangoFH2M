#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequestResult.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequestResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::TeamInfo> TeamRequestResult::Teams()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool TeamRequestResult::HasNext()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::TeamRequestResult> TeamRequestResult::GetNextAsync()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
