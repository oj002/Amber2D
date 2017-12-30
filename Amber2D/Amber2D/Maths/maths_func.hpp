#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

namespace Amber2D
{
	constexpr float toRadians(float degrees)
	{
		return degrees * static_cast<float>(M_PI) / 180.0f;
	}
}