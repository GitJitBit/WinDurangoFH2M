#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerSettings.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognizerSettings : SpeechRecognizerSettingsT<SpeechRecognizerSettings>
    {
        SpeechRecognizerSettings() = default;

        winrt::Windows::Foundation::TimeSpan InitialSilenceTimeout();
        void InitialSilenceTimeout(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan EndSilenceTimeout();
        void EndSilenceTimeout(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan BabbleTimeout();
        void BabbleTimeout(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInputSetting SpeechRecognizerInputSetting();
    };
}
