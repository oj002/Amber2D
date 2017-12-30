#pragma once
#include <iostream>

namespace Amber2D
{
	struct vec4
	{
		float x = 0.0f, y = 0.0f, z = 0.0f, w = 0.0f;

		vec4() = default;
		vec4(float x, float y, float z, float w);

		vec4& add(const vec4& other);
		vec4& subtract(const vec4& other);
		vec4& multiply(const vec4& other);
		vec4& divide(const vec4& other);

		friend vec4 operator+(vec4 left, const vec4& right);
		friend vec4 operator-(vec4 left, const vec4& right);
		friend vec4 operator*(vec4 left, const vec4& right);
		friend vec4 operator/(vec4 left, const vec4& right);

		bool operator==(const vec4& other);
		bool operator!=(const vec4& other);

		vec4& operator+=(const vec4& other);
		vec4& operator-=(const vec4& other);
		vec4& operator*=(const vec4& other);
		vec4& operator/=(const vec4& other);

		friend std::ostream& operator<<(std::ostream& stream, const vec4& vec);
		
	};
}