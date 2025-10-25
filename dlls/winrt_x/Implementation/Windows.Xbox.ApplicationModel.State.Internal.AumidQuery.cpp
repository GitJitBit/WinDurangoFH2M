#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.AumidQuery.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.AumidQuery.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    void AumidQuery::GetXboxLiveInfo(hstring const& aumid, uint32_t& titleId, winrt::guid& primaryScid, bool& requireXboxLive)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
