#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationTemplate.h"
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationTemplate.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate SecureDeviceAssociationTemplate::GetTemplateByName(hstring const& name)
    {
        LOG_INFO("SecureDeviceAssociationTemplate::GetTemplateByName\n");
        return winrt::make<SecureDeviceAssociationTemplate>();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate> SecureDeviceAssociationTemplate::Templates()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token SecureDeviceAssociationTemplate::AssociationIncoming(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate, winrt::Windows::Xbox::Networking::SecureDeviceAssociationIncomingEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SecureDeviceAssociationTemplate::AssociationIncoming(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> SecureDeviceAssociationTemplate::CreateAssociationAsync(winrt::Windows::Xbox::Networking::SecureDeviceAddress secureDeviceAddress, winrt::Windows::Xbox::Networking::CreateSecureDeviceAssociationBehavior behavior)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> SecureDeviceAssociationTemplate::CreateAssociationForPortsAsync(winrt::Windows::Xbox::Networking::SecureDeviceAddress secureDeviceAddress, winrt::Windows::Xbox::Networking::CreateSecureDeviceAssociationBehavior behavior, hstring initiatorPort, hstring acceptorPort)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IBuffer> SecureDeviceAssociationTemplate::CreateCertificateRequestAsync(hstring subjectName)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction SecureDeviceAssociationTemplate::InstallCertificateAsync(winrt::Windows::Storage::Streams::IBuffer certificateBuffer)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring SecureDeviceAssociationTemplate::Name()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription SecureDeviceAssociationTemplate::InitiatorSocketDescription()
    {
        LOG_INFO("SecureDeviceAssociationTemplate::InitiatorSocketDescription\n");
        return winrt::make<SecureDeviceSocketDescription>();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription SecureDeviceAssociationTemplate::AcceptorSocketDescription()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationUsage SecureDeviceAssociationTemplate::AllowedUsages()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring SecureDeviceAssociationTemplate::RelyingParty()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::ProtocolParserDescription> SecureDeviceAssociationTemplate::ProtocolParserDescriptions()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMetric> SecureDeviceAssociationTemplate::QualityOfServiceMetricPathPriorities()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::MultiplayerSessionRequirement SecureDeviceAssociationTemplate::MultiplayerSessionRequirement()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> SecureDeviceAssociationTemplate::Associations()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
