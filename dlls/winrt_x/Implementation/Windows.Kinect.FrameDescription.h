#pragma once
#include "Windows.Kinect.FrameDescription.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct FrameDescription : FrameDescriptionT<FrameDescription>
    {
        FrameDescription() = default;

        int32_t Width();
        int32_t Height();
        float HorizontalFieldOfView();
        float VerticalFieldOfView();
        float DiagonalFieldOfView();
        uint32_t LengthInPixels();
        uint32_t BytesPerPixel();
    };
}
