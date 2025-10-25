#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerMetadataResult.g.h"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct GameServerMetadataResult : GameServerMetadataResultT<GameServerMetadataResult>
    {
        GameServerMetadataResult() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameVariant> GameVariants();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerImageSet> GameServerImageSets();
    };
}
