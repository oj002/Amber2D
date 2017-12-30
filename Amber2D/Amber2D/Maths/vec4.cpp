#include "vec4.hpp"

namespace Amber2D
{

	vec4::vec4(float x, float y, float z, float w)
		: x(x)
		, y(y)
		, z(z)
		, w(w)
	{
	}

	vec4 & vec4::add(const vec4 & other)
	{
		x += other.x;
		y += other.y;
		z += other.z;
		w += other.w;

		return *this;
	}

	vec4 & vec4::subtract(const vec4 & other)
	{
		x -= other.x;
		y -= other.y;
		z -= other.z;
		w -= other.w;

		return *this;
	}

	vec4 & vec4::multiply(const vec4 & other)
	{
		x *= other.x;
		y *= other.y;
		z *= other.z;
		w *= other.w;

		return *this;
	}

	vec4 & vec4::divide(const vec4 & other)
	{
		x /= other.x;
		y /= other.y;
		z /= other.z;
		w /= other.w;

		return *this;
	}

	bool vec4::operator==(const vec4 & other)
	{
		return x == other.x && y == other.y && x == other.z && y == other.w;
	}

	bool vec4::operator!=(const vec4 & other)
	{
		return !(*this == other);
	}

	vec4 & vec4::operator+=(const vec4 & other)
	{
		return add(other);
	}

	vec4 & vec4::operator-=(const vec4 & other)
	{
		return subtract(other);
	}
	
	vec4 & vec4::operator*=(const vec4 & other)
	{
		return multiply(other);
	}

	vec4 & vec4::operator/=(const vec4 & other)
	{
		return divide(other);
	}

	vec4 operator+(vec4 left, const vec4 & right)
	{
		return left.add(right);
	}

	vec4 operator-(vec4 left, const vec4 & right)
	{
		return left.subtract(right);
	}

	vec4 operator*(vec4 left, const vec4 & right)
	{
		return left.multiply(right);
	}

	vec4 operator/(vec4 left, const vec4 & right)
	{
		return left.divide(right);
	}

	std::ostream & operator<<(std::ostream & stream, const vec4 & vec)
	{
		stream << "vec4(" << vec.x << ", " << vec.y << ", " << vec.z << ", " << vec.w << ')';
		return stream;
	}
}