#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerMetadataResult.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerMetadataResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameVariant> GameServerMetadataResult::GameVariants()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerImageSet> GameServerMetadataResult::GameServerImageSets()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
