#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResultDetail.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResultDetail.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> SpeechRecognitionResultDetail::RuleStack()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    float SpeechRecognitionResultDetail::ConfidenceScore()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring SpeechRecognitionResultDetail::Pronunciation()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultToken> SpeechRecognitionResultDetail::Tokens()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t SpeechRecognitionResultDetail::AudioPosition()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t SpeechRecognitionResultDetail::AudioSize()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultBodyCorrelation> SpeechRecognitionResultDetail::BodyCorrelation()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
