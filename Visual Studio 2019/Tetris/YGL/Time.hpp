#pragma once

#include "Core/Core.hpp"
#include "Core/Core_Time.hpp"


class Time : private Core, private Core_Time {

public:
	// 理論上のFPS値を取得する
	static double GetTheoreticalFPS();

	// 実際のFPS値を取得する
	static double GetActualFPS();

};