#pragma once

#include "Core/Core.hpp"
#include "Core/Core_Graphic.hpp"


class Picture : private Core, private Core_Graphic {

private:
	Microsoft::WRL::ComPtr<ID2D1Bitmap> pBitmap;

public:
	// コンストラクタ
	Picture();

	// 画像を読み込む
	YGL_ERROR Load(const wchar_t* FileName);

	// 画像を表示する
	void Draw(COORDINATES_INT Coordinates, SIZE_UINT Size);

	// 画像の一部を表示する
	void Draw(COORDINATES_INT Coordinates, SIZE_UINT Size, COORDINATES_INT sCoordinates, SIZE_UINT sSize);

	// 透明度を指定して画像を表示する
	void Draw(COORDINATES_INT Coordinates, SIZE_UINT Size, float Opacity);

	// 透明度を指定して画像の一部を表示する
	void Draw(COORDINATES_INT Coordinates, SIZE_UINT Size, float Opacity, COORDINATES_INT sCoordinates, SIZE_UINT sSize);

	// 中心を基準とした座標に画像を表示する
	void DrawC(COORDINATES_INT Coordinates, SIZE_UINT Size);

	// 中心を基準とした座標に画像の一部を表示する
	void DrawC(COORDINATES_INT Coordinates, SIZE_UINT Size, COORDINATES_INT sCoordinates, SIZE_UINT sSize);

	// 透明度を指定して中心を基準とした座標に画像を表示する
	void DrawC(COORDINATES_INT Coordinates, SIZE_UINT Size, float Opacity);

	// 透明度を指定して中心を基準とした座標に画像の一部を表示する
	void DrawC(COORDINATES_INT Coordinates, SIZE_UINT Size, float Opacity, COORDINATES_INT sCoordinates, SIZE_UINT sSize);

};