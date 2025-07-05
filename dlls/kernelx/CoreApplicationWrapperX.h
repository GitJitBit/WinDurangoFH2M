/*
================================================================================
DISCLAIMER AND LICENSE REQUIREMENT

This code is provided with the condition that if you use, modify, or distribute
this code in your project, you are required to make your project open source
under a license compatible with the GNU General Public License (GPL) or a
similarly strong copyleft license.

By using this code, you agree to:
1. Disclose your complete source code of any project incorporating this code.
2. Include this disclaimer in any copies or substantial portions of this file.
3. Provide clear attribution to the original author.

If you do not agree to these terms, you do not have permission to use this code.

================================================================================
*/
#pragma once
#include "ICoreApplicationX.h"

class CoreApplicationWrapperX : public RuntimeClass<IActivationFactory, ICoreApplicationResourceAvailabilityX, ICoreApplicationGpuPolicy, ICoreApplicationX>
{
public:

	CoreApplicationWrapperX(ComPtr<IActivationFactory> realFactory)
		: m_realFactory(realFactory)
	{
		HRESULT hr = m_realFactory.As(&m_realCoreApplication); // this get ICoreApplication from the IActivationFactory
		if (FAILED(hr)) {
			return;
		}
	}

	// for IActivationFactory
	HRESULT STDMETHODCALLTYPE ActivateInstance(__RPC__deref_out_opt IInspectable** instance) override
	{
		return m_realFactory->ActivateInstance(instance);
	}

	// ICoreApplicationX
	INT32 _abi_get_Id(HSTRING* value) override;
	INT32 _abi_add_Suspending(__FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs* handler, EventRegistrationToken* token) override;
	INT32 _abi_remove_Suspending(EventRegistrationToken token) override;
	INT32 _abi_add_Resuming(__FIEventHandler_1_IInspectable* handler, EventRegistrationToken* token) override;
	INT32 _abi_remove_Resuming(EventRegistrationToken token) override;
	INT32 _abi_get_Properties(ABI::Windows::Foundation::Collections::IPropertySet** value) override;
	INT32 _abi_GetCurrentView(ABI::Windows::ApplicationModel::Core::ICoreApplicationView** value) override;
	INT32 _abi_Run(ABI::Windows::ApplicationModel::Core::IFrameworkViewSource* viewSource) override;

	// ICoreApplicationResourceAvailabilityX
	HRESULT _abi_get_ResourceAvailability(ResourceAvailability* resourceAvailability) override;
	HRESULT _abi_add_ResourceAvailabilityChanged(winrt::Windows::Foundation::EventHandler<IInspectable>* handler, EventRegistrationToken* token) override;
	HRESULT _abi_remove_ResourceAvailabilityChanged(EventRegistrationToken token) override;

	// ICoreApplicationGpuPolicy
	HRESULT get_DisableKinectGpuReservation(bool*) override;
	HRESULT set_DisableKinectGpuReservation(bool) override;

	// IActivationFactory (IInspectable + IUnknown)
	HRESULT QueryInterface(const IID& riid, void** ppvObject) override;
	ULONG AddRef() override;
	ULONG Release() override;

	HRESULT GetIids(ULONG* iidCount, IID** iids) override;
	HRESULT GetRuntimeClassName(HSTRING* className) override;
	HRESULT GetTrustLevel(TrustLevel* trustLevel) override;

private:
	long m_RefCount = 1;
	ComPtr<IActivationFactory> m_realFactory;
	ComPtr<ICoreApplication> m_realCoreApplication; // ICoreApplication to forward the calls
	bool m_KinectGpuReservation = false;
};