#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResultDetail.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognitionResultDetail : SpeechRecognitionResultDetailT<SpeechRecognitionResultDetail>
    {
        SpeechRecognitionResultDetail() = default;

        winrt::Windows::Foundation::Collections::IVectorView<hstring> RuleStack();
        float ConfidenceScore();
        hstring Pronunciation();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultToken> Tokens();
        uint64_t AudioPosition();
        uint32_t AudioSize();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultBodyCorrelation> BodyCorrelation();
    };
}
