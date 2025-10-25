#pragma once
#include "Windows.Kinect.AudioBodyCorrelation.g.h"

namespace winrt::Windows::Kinect::implementation
{
    struct AudioBodyCorrelation : AudioBodyCorrelationT<AudioBodyCorrelation>
    {
        AudioBodyCorrelation() = default;

        uint64_t BodyTrackingId();
    };
}
