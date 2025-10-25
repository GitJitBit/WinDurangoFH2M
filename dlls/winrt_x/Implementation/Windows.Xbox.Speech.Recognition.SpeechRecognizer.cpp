#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizer.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizer.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    void SpeechRecognizer::Close()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult> SpeechRecognizer::RecognizeAsync()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction SpeechRecognizer::PreloadGrammarsAsync()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerSettings SpeechRecognizer::Settings()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarSet SpeechRecognizer::Grammars()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::StartContinuousRecognition()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::StopContinuousRecognition()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::ResumeContinuousRecognition()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool SpeechRecognizer::PauseOnContinuousRecognitionResultAvailable()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::PauseOnContinuousRecognitionResultAvailable(bool value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation SpeechRecognizer::GetRecognizer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::SetRecognizer(winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation const& recognizerInformation)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::AudioProblemOccurred(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechAudioProblemOccurredEventArgs> const& audioProblemOccuredHandler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::AudioProblemOccurred(winrt::event_token const& cookie) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::AudioCaptureStateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerAudioCaptureStateChangedEventArgs> const& audioCaptureStateChangedHandler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::AudioCaptureStateChanged(winrt::event_token const& cookie) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::ContinuousRecognitionResultAvailable(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::ContinuousSpeechRecognitionResultEventArgs> const& continuousRecognitionResultAvailableHandler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::ContinuousRecognitionResultAvailable(winrt::event_token const& cookie) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::ContinuousRecognitionStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::ContinuousSpeechRecognitionStatusEventArgs> const& continuousRecognitionStatusChangedHandler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::ContinuousRecognitionStatusChanged(winrt::event_token const& cookie) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::HypothesisAvailable(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechHypothesisResultEventArgs> const& hypothesisAvailableHandler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::HypothesisAvailable(winrt::event_token const& cookie) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::SoundStarted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerSoundStartedEventArgs> const& soundStartedHandler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::SoundStarted(winrt::event_token const& cookie) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::SoundEnded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerSoundEndedEventArgs> const& soundEndedHandler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::SoundEnded(winrt::event_token const& cookie) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::PhraseStarted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerPhraseStartedEventArgs> const& phraseStartedHandler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::PhraseStarted(winrt::event_token const& cookie) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
