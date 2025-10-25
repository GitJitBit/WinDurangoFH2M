#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizer.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognizer : SpeechRecognizerT<SpeechRecognizer>
    {
        SpeechRecognizer() = default;

        void Close();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult> RecognizeAsync();
        winrt::Windows::Foundation::IAsyncAction PreloadGrammarsAsync();
        winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerSettings Settings();
        winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarSet Grammars();
        void StartContinuousRecognition();
        void StopContinuousRecognition();
        void ResumeContinuousRecognition();
        bool PauseOnContinuousRecognitionResultAvailable();
        void PauseOnContinuousRecognitionResultAvailable(bool value);
        winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation GetRecognizer();
        void SetRecognizer(winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation const& recognizerInformation);
        winrt::event_token AudioProblemOccurred(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechAudioProblemOccurredEventArgs> const& audioProblemOccuredHandler);
        void AudioProblemOccurred(winrt::event_token const& cookie) noexcept;
        winrt::event_token AudioCaptureStateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerAudioCaptureStateChangedEventArgs> const& audioCaptureStateChangedHandler);
        void AudioCaptureStateChanged(winrt::event_token const& cookie) noexcept;
        winrt::event_token ContinuousRecognitionResultAvailable(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::ContinuousSpeechRecognitionResultEventArgs> const& continuousRecognitionResultAvailableHandler);
        void ContinuousRecognitionResultAvailable(winrt::event_token const& cookie) noexcept;
        winrt::event_token ContinuousRecognitionStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::ContinuousSpeechRecognitionStatusEventArgs> const& continuousRecognitionStatusChangedHandler);
        void ContinuousRecognitionStatusChanged(winrt::event_token const& cookie) noexcept;
        winrt::event_token HypothesisAvailable(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechHypothesisResultEventArgs> const& hypothesisAvailableHandler);
        void HypothesisAvailable(winrt::event_token const& cookie) noexcept;
        winrt::event_token SoundStarted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerSoundStartedEventArgs> const& soundStartedHandler);
        void SoundStarted(winrt::event_token const& cookie) noexcept;
        winrt::event_token SoundEnded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerSoundEndedEventArgs> const& soundEndedHandler);
        void SoundEnded(winrt::event_token const& cookie) noexcept;
        winrt::event_token PhraseStarted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerPhraseStartedEventArgs> const& phraseStartedHandler);
        void PhraseStarted(winrt::event_token const& cookie) noexcept;
    };
}
namespace winrt::Windows::Xbox::Speech::Recognition::factory_implementation
{
    struct SpeechRecognizer : SpeechRecognizerT<SpeechRecognizer, implementation::SpeechRecognizer>
    {
    };
}
