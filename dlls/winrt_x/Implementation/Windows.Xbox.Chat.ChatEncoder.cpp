#include "pch.h"
#include "Windows.Xbox.Chat.ChatEncoder.h"
#include "Windows.Xbox.Chat.ChatEncoder.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    ChatEncoder::ChatEncoder(winrt::Windows::Xbox::Chat::IFormat const& sourceFormat, winrt::Windows::Xbox::Chat::EncodingQuality const& quality)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatEncoder::Encode(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Storage::Streams::IBuffer& encodedBuffer)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    int32_t ChatEncoder::IsDataInFlight()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatEncoder::Encode(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Xbox::Chat::ChatBufferSource const& bufferSource, winrt::Windows::Storage::Streams::IBuffer& encodedBuffer, winrt::Windows::Xbox::Chat::ChatBufferSource& pEncodedBufferSource)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
