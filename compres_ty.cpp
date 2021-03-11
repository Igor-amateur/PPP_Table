#include "stdafx.h"
#include "compres_ty.h"

#include<iostream>

namespace compres_ty
{
	//Degre Celsius
	CsMP::CsMP() = default;
	CsMP::CsMP(const int16_t& new_value)
	{
		value_ = new_value;
	}

	// operators for CsMP
	bool operator<(const CsMP& lhs, const CsMP& rhs) { return lhs.value_ < rhs.value_; }
	bool operator==(const CsMP& lhs, const CsMP& rhs) { return lhs.value_ == rhs.value_; }
	bool operator!=(const CsMP& lhs, const CsMP& rhs) { return !(lhs == rhs); }
	bool operator>(const CsMP& lhs, const CsMP& rhs) { return lhs.value_ > rhs.value_; }

	std::ostream& operator<<(std::ostream& stream, const CsMP& compress)
	{
		float temp = compress.value_;
		stream << temp / 1000.0f;
		return stream;
	}

	std::istream& operator >> (std::istream& stream, CsMP& compress)
	{
		float tem_f(0.0f);
		stream >> tem_f;
		compress.value_ = static_cast<int16_t>(1000.0f * tem_f);
		return stream;
	}

	CsMP operator+(const CsMP& lhs, const CsMP& rhs)
	{
		return CsMP(lhs.value_ + rhs.value_);
	}

	CsMP operator-(const CsMP& lhs, const CsMP& rhs)
	{
		return CsMP(lhs.value_ - rhs.value_);
	}
	/*
	forbidden cutting operations

	CsMP operator*(const CsMP& lhs, const float& rhs)
	{
	return CsMP(lhs.value_ * rhs);
	}

	CsMP operator*(const float& lhs, const CsMP& rhs)
	{
	return rhs * lhs;
	}
	*/
	CsMP operator/(const CsMP& lhs, const float& rhs)
	{
		float tem_f(lhs.value_);
		tem_f /= rhs;
		int16_t tem_i(static_cast<int16_t>(round(tem_f)));
		return CsMP(tem_i);
	}
}

