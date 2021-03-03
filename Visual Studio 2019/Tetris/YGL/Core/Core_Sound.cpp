#include "Core_Sound.hpp"


// Core_Soundクラスを初期化する
HRESULT Core_Sound::Init() {

	HRESULT hr = S_OK;

	// DirectSoundを生成する
	hr = DirectSoundCreate(NULL, pDirectSound.GetAddressOf(), NULL);
	if (FAILED(hr)) {
		return hr;
	}

	// 協調レベルを設定する
	hr = pDirectSound->SetCooperativeLevel(hWnd, DSSCL_NORMAL);
	if (FAILED(hr)) {
		return hr;
	}

	return S_OK;

}

Microsoft::WRL::ComPtr<IDirectSound> Core_Sound::pDirectSound = nullptr;	// DirectSound