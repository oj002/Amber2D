#include "vec3.hpp"

namespace Amber2D
{

	vec3::vec3(float x, float y, float z)
		: x(x)
		, y(y)
		, z(z)
	{
	}

	vec3 & vec3::add(const vec3 & other)
	{
		x += other.x;
		y += other.y;
		z += other.z;

		return *this;
	}

	vec3 & vec3::subtract(const vec3 & other)
	{
		x -= other.x;
		y -= other.y;
		z -= other.z;

		return *this;
	}

	vec3 & vec3::multiply(const vec3 & other)
	{
		x *= other.x;
		y *= other.y;
		z *= other.z;

		return *this;
	}

	vec3 & vec3::divide(const vec3 & other)
	{
		x /= other.x;
		y /= other.y;
		z /= other.z;

		return *this;
	}

	bool vec3::operator==(const vec3 & other)
	{
		return x == other.x && y == other.y && z == other.z;
	}

	bool vec3::operator!=(const vec3 & other)
	{
		return !(*this == other);
	}

	vec3 & vec3::operator+=(const vec3 & other)
	{
		return add(other);
	}

	vec3 & vec3::operator-=(const vec3 & other)
	{
		return subtract(other);
	}

	vec3 & vec3::operator*=(const vec3 & other)
	{
		return multiply(other);
	}

	vec3 & vec3::operator/=(const vec3 & other)
	{
		return divide(other);
	}

	vec3 operator+(vec3 left, const vec3 & right)
	{
		return left.add(right);
	}

	vec3 operator-(vec3 left, const vec3 & right)
	{
		return left.subtract(right);
	}

	vec3 operator*(vec3 left, const vec3 & right)
	{
		return left.multiply(right);
	}

	vec3 operator/(vec3 left, const vec3 & right)
	{
		return left.divide(right);
	}

	std::ostream & operator<<(std::ostream & stream, const vec3 & vec)
	{
		stream << "vec3(" << vec.x << ", " << vec.y << ", " << vec.z << ')';
		return stream;
	}
}