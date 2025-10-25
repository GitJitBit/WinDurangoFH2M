#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerInputSetting.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognizerInputSetting : SpeechRecognizerInputSettingT<SpeechRecognizerInputSetting>
    {
        SpeechRecognizerInputSetting() = default;

        void SetInputToAudioStream(winrt::Windows::Storage::Streams::IRandomAccessStream const& inputStream);
        void SetInputToText(hstring const& text);
        void SetInputToPronunciation(hstring const& pronunciation);
        void SetInputToMicrophone();
        void SetInputToMicrophoneFeatureVector();
    };
}
