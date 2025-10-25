#pragma once
#include "Windows.Xbox.Speech.Recognition.ContinuousSpeechRecognitionStatusEventArgs.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct ContinuousSpeechRecognitionStatusEventArgs : ContinuousSpeechRecognitionStatusEventArgsT<ContinuousSpeechRecognitionStatusEventArgs>
    {
        ContinuousSpeechRecognitionStatusEventArgs() = default;

        winrt::Windows::Xbox::Speech::Recognition::ContinuousSpeechRecognitionStatus Status();
        winrt::hresult ErrorCode();
    };
}
