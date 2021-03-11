#pragma once

#include<iostream>

namespace temperature
{

	struct DgCs
	{
		int16_t value_;

		DgCs();
		explicit DgCs(const int16_t& new_value);
	};

	// operators for DgCs
	bool operator<(const DgCs& lhs, const DgCs& rhs);
	bool operator==(const DgCs& lhs, const DgCs& rhs);
	bool operator!=(const DgCs& lhs, const DgCs& rhs);
	bool operator>(const DgCs& lhs, const DgCs& rhs);
	std::ostream& operator<<(std::ostream& stream, const DgCs& temperature);
	std::istream& operator >> (std::istream& stream, DgCs& temperature);
	DgCs operator+(const DgCs& lhs, const DgCs& rhs);
	DgCs operator-(const DgCs& lhs, const DgCs& rhs);
	//DgCs operator*(const DgCs& lhs, const float& rhs);
	//DgCs operator*(const float& lhs, const DgCs& rhs);
	DgCs operator/(const DgCs& lhs, const float& rhs);
}
