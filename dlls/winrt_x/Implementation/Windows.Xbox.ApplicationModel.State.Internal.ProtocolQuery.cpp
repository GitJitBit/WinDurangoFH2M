#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ProtocolQuery.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ProtocolQuery.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ProtocolQuery::FindAumidsForScheme(hstring const& scheme)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
