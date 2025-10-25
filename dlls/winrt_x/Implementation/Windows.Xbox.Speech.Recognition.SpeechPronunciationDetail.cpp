#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechPronunciationDetail.h"
#include "Windows.Xbox.Speech.Recognition.SpeechPronunciationDetail.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    hstring SpeechPronunciationDetail::Pronunciation()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechPronunciationSource SpeechPronunciationDetail::Source()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechPronunciationFormat SpeechPronunciationDetail::Format()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
