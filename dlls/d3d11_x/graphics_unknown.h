#pragma once
#include "d3d11_x.h"

namespace wdi
{
	D3DINTERFACE(IGraphicsUnknown, aceeea63, e0a9, 4a1c, bb, ec, 71, b2, f4, 85, f7, 58)
	{
	public:
#if !defined(DX_VERSION) || DX_VERSION >= MAKEINTVERSION(2, 18)
		ULONG m_DeviceIndex : 3;
		ULONG m_PrivateDataPresent : 1;
		ULONG m_Reserved : 28;
#endif

#if !defined(DX_VERSION) || DX_VERSION >= MAKEINTVERSION(1, 1)
		ULONG m_RefCount;
#endif

		virtual HRESULT QueryInterface(REFIID riid, void** ppvObject) = 0;
		virtual ULONG AddRef() = 0;
		virtual ULONG Release() = 0;
	};

	D3DINTERFACE(IGraphicsUnwrap, bcfaae29, e1a2, 4b9a, aa, fc, 55, b9, ff, 21, fa, 54)
	{

	};
}

namespace wd
{
	class graphics_unknown : public wdi::IGraphicsUnknown
	{
	public:
		graphics_unknown() {
			m_RefCount = 1;
		}

		ULONG AddRef() override
		{
			return InterlockedIncrement(&m_RefCount);
		}

		ULONG Release() override
		{
			ULONG refCount = InterlockedDecrement(&m_RefCount);
			if (refCount == 0) {
				delete this;
			}
			return refCount;
		}

		HRESULT QueryInterface(REFIID riid, void** ppvObject) override
		{
			TRACE_NOT_IMPLEMENTED("graphics_unknown");

			if (ppvObject == nullptr)
			{
				return E_POINTER;
			}

			if (riid == __uuidof(wdi::IGraphicsUnknown))
			{
				*ppvObject = static_cast<wdi::IGraphicsUnknown*>(this);
				AddRef();
				return S_OK;
			}
			*ppvObject = nullptr;
			return E_NOINTERFACE;
		}
	};
}


