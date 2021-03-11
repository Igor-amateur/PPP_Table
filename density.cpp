#include"stdafx.h"
#include"density.h"


#include<iostream>
#include<cmath>

namespace density
{
	//Degre Celsius
	KgMC::KgMC() = default;

	KgMC::KgMC(const int16_t& new_value)
	{
		value_ = new_value;
	}

	// operators for KgMC
	bool operator<(const KgMC& lhs, const KgMC& rhs) { return lhs.value_ < rhs.value_; }
	bool operator==(const KgMC& lhs, const KgMC& rhs) { return lhs.value_ == rhs.value_; }
	bool operator!=(const KgMC& lhs, const KgMC& rhs) { return !(lhs == rhs); }
	bool operator>(const KgMC& lhs, const KgMC& rhs) { return lhs.value_ > rhs.value_; }

	std::ostream& operator<<(std::ostream& stream, const KgMC& density)
	{
		float temp = density.value_;
		stream << temp / 10.0f;
		return stream;
	}

	std::istream& operator >> (std::istream& stream, KgMC& density)
	{
		float tem_f(0.0f);
		stream >> tem_f;
		density.value_ = static_cast<int16_t>(10.0f * tem_f);
		return stream;
	}

	KgMC operator+(const KgMC& lhs, const KgMC& rhs)
	{
		return KgMC(lhs.value_ + rhs.value_);
	}

	KgMC operator-(const KgMC& lhs, const KgMC& rhs)
	{
		return KgMC(lhs.value_ - rhs.value_);
	}
	/*
	forbidden cutting operations

	KgMC operator*(const KgMC& lhs, const float& rhs)
	{
	return KgMC(lhs.value_ * rhs);
	}

	KgMC operator*(const float& lhs, const KgMC& rhs)
	{
	return rhs * lhs;
	}
	*/
	KgMC operator/(const KgMC& lhs, const float& rhs)
	{
		float tem_f(lhs.value_);
		tem_f /= rhs;
		int16_t tem_i(static_cast<int16_t>(round(tem_f)));
		return KgMC(tem_i);
	}

}