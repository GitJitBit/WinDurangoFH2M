#include "pch.h"
#include "Windows.Xbox.System.Launcher.h"
#include "Windows.Xbox.System.Launcher.g.cpp"

namespace winrt::Windows::Xbox::System::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<bool> Launcher::NavigateBackAsync()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
