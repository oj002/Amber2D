#pragma once
#include <iostream>

namespace Amber2D
{
	struct vec3
	{
		float x = 0.0f, y = 0.0f, z = 0.0f;

		vec3() = default;
		vec3(float x, float y, float z);

		vec3& add(const vec3& other);
		vec3& subtract(const vec3& other);
		vec3& multiply(const vec3& other);
		vec3& divide(const vec3& other);

		friend vec3 operator+(vec3 left, const vec3& right);
		friend vec3 operator-(vec3 left, const vec3& right);
		friend vec3 operator*(vec3 left, const vec3& right);
		friend vec3 operator/(vec3 left, const vec3& right);

		bool operator==(const vec3& other);
		bool operator!=(const vec3& other);

		vec3& operator+=(const vec3& other);
		vec3& operator-=(const vec3& other);
		vec3& operator*=(const vec3& other);
		vec3& operator/=(const vec3& other);

		friend std::ostream& operator<<(std::ostream& stream, const vec3& vec);
		
	};
}