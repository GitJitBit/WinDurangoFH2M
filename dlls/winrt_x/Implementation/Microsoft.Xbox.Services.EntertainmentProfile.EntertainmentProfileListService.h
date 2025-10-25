#pragma once
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListService.g.h"


namespace winrt::Microsoft::Xbox::Services::EntertainmentProfile::implementation
{
    struct EntertainmentProfileListService : EntertainmentProfileListServiceT<EntertainmentProfileListService>
    {
        EntertainmentProfileListService() = default;

        winrt::Microsoft::Xbox::Services::EntertainmentProfile::EntertainmentProfileListXboxOnePins XboxOnePins();
    };
}
