
#include"stdafx.h"
#include"temperature.h"

#include<iostream>
#include<cmath>

namespace temperature
{
	//Degre Celsius
	DgCs::DgCs() = default;
	DgCs::DgCs(const int16_t& new_value)
	{
		value_ =  new_value;
	}

	// operators for DgCs
	bool operator<(const DgCs& lhs, const DgCs& rhs) { return lhs.value_ < rhs.value_; }
	bool operator==(const DgCs& lhs, const DgCs& rhs) { return lhs.value_ == rhs.value_; }
	bool operator!=(const DgCs& lhs, const DgCs& rhs) { return !(lhs == rhs); }
	bool operator>(const DgCs& lhs, const DgCs& rhs) { return lhs.value_ > rhs.value_; }

	std::ostream& operator<<(std::ostream& stream, const DgCs& temperature)
	{
		float temp(temperature.value_);
		stream << temp / 10.0f;
		return stream;
	}

	std::istream& operator >> (std::istream& stream, DgCs& temperature)
	{
		float tem_f(0.0f);
		stream >> tem_f;
		temperature.value_ = static_cast<int16_t>(10.0f * tem_f);
		return stream;
	}
	
	DgCs operator+(const DgCs& lhs, const DgCs& rhs)
	{
		return DgCs(lhs.value_ + rhs.value_);
	}
	
	DgCs operator-(const DgCs& lhs, const DgCs& rhs)
	{
		return DgCs(lhs.value_ - rhs.value_);
	}
	/*
	forbidden cutting operations

	DgCs operator*(const DgCs& lhs, const float& rhs) 
	{
		return DgCs(lhs.value_ * rhs);
	}

	DgCs operator*(const float& lhs, const DgCs& rhs)
	{
		return rhs * lhs;
	}
	*/
	DgCs operator/(const DgCs& lhs, const float& rhs)
	{
		float tem_f(lhs.value_);
		tem_f /= rhs;
		int16_t tem_i(static_cast<int16_t>(round(tem_f)));
		return DgCs(tem_i);
	}

}
