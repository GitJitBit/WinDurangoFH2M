#pragma once
#include "Windows.Xbox.Networking.SecureDeviceAssociationTemplate.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct SecureDeviceAssociationTemplate : SecureDeviceAssociationTemplateT<SecureDeviceAssociationTemplate>
    {
        SecureDeviceAssociationTemplate() = default;

        static winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate GetTemplateByName(hstring const& name);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate> Templates();
        winrt::event_token AssociationIncoming(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate, winrt::Windows::Xbox::Networking::SecureDeviceAssociationIncomingEventArgs> const& handler);
        void AssociationIncoming(winrt::event_token const& token) noexcept;
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> CreateAssociationAsync(winrt::Windows::Xbox::Networking::SecureDeviceAddress secureDeviceAddress, winrt::Windows::Xbox::Networking::CreateSecureDeviceAssociationBehavior behavior);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> CreateAssociationForPortsAsync(winrt::Windows::Xbox::Networking::SecureDeviceAddress secureDeviceAddress, winrt::Windows::Xbox::Networking::CreateSecureDeviceAssociationBehavior behavior, hstring initiatorPort, hstring acceptorPort);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IBuffer> CreateCertificateRequestAsync(hstring subjectName);
        winrt::Windows::Foundation::IAsyncAction InstallCertificateAsync(winrt::Windows::Storage::Streams::IBuffer certificateBuffer);
        hstring Name();
        winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription InitiatorSocketDescription();
        winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription AcceptorSocketDescription();
        winrt::Windows::Xbox::Networking::SecureDeviceAssociationUsage AllowedUsages();
        hstring RelyingParty();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::ProtocolParserDescription> ProtocolParserDescriptions();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMetric> QualityOfServiceMetricPathPriorities();
        winrt::Windows::Xbox::Networking::MultiplayerSessionRequirement MultiplayerSessionRequirement();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::SecureDeviceAssociation> Associations();
    };
}
namespace winrt::Windows::Xbox::Networking::factory_implementation
{
    struct SecureDeviceAssociationTemplate : SecureDeviceAssociationTemplateT<SecureDeviceAssociationTemplate, implementation::SecureDeviceAssociationTemplate>
    {
    };
}
