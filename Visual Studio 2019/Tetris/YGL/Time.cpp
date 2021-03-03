#include "Time.hpp"


// 理論上のFPS値を取得する
double Time::GetTheoreticalFPS() {

	return (double)RefreshRate;

}

// 実際のFPS値を取得する
double Time::GetActualFPS() {

	return FPS;

}