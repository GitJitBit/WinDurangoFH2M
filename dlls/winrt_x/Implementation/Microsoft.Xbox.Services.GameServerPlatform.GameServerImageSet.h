#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerImageSet.g.h"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct GameServerImageSet : GameServerImageSetT<GameServerImageSet>
    {
        GameServerImageSet() = default;

        uint64_t MinPlayers();
        uint64_t MaxPlayers();
        hstring Id();
        hstring Name();
        uint64_t SelectionOrder();
        hstring SchemaContent();
        hstring SchemaName();
        hstring SchemaId();
        winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> Tags();
    };
}
