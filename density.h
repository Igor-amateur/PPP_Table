#pragma once

#include<iostream>

namespace density
{

	struct KgMC
	{
		int16_t value_;

		KgMC();
		explicit KgMC(const int16_t& new_value);
	};

	// operators for DgCs
	bool operator<(const KgMC& lhs, const KgMC& rhs);
	bool operator==(const KgMC& lhs, const KgMC& rhs);
	bool operator!=(const KgMC& lhs, const KgMC& rhs);
	bool operator>(const KgMC& lhs, const KgMC& rhs);
	std::ostream& operator<<(std::ostream& stream, const KgMC& temperature);
	std::istream& operator >> (std::istream& stream, KgMC& temperature);
	KgMC operator+(const KgMC& lhs, const KgMC& rhs);
	KgMC operator-(const KgMC& lhs, const KgMC& rhs);
	//DgCs operator*(const DgCs& lhs, const float& rhs);
	//DgCs operator*(const float& lhs, const DgCs& rhs);
	KgMC operator/(const KgMC& lhs, const float& rhs);
}
