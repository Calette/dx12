#pragma once

// Link necessary d3d12 libraries.
#pragma comment(lib,"d3dcompiler.lib")
#pragma comment(lib, "D3D12.lib")
#pragma comment(lib, "dxgi.lib")

#include "d3dUtil.h"

class D3DApp 
{
private:
	D3DApp();
	~D3DApp();

public:
	bool Initialize();

private:
	bool InitMainWindow();
	bool InitDirect3D();

private:
	Microsoft::WRL::ComPtr<IDXGIFactory4> mdxgiFactory;
	Microsoft::WRL::ComPtr<IDXGISwapChain> mSwapChain;
	Microsoft::WRL::ComPtr<ID3D12Device> md3dDevice;
};