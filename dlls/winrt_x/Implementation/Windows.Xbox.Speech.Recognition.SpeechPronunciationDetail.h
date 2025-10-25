#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechPronunciationDetail.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechPronunciationDetail : SpeechPronunciationDetailT<SpeechPronunciationDetail>
    {
        SpeechPronunciationDetail() = default;

        hstring Pronunciation();
        winrt::Windows::Xbox::Speech::Recognition::SpeechPronunciationSource Source();
        winrt::Windows::Xbox::Speech::Recognition::SpeechPronunciationFormat Format();
    };
}
