#pragma once

#include<iostream>

namespace compres_ty
{

	struct CsMP
	{
		int16_t value_;

		CsMP();
		explicit CsMP(const int16_t& new_value);
	};

	// operators for CsMP
	bool operator<(const CsMP& lhs, const CsMP& rhs);
	bool operator==(const CsMP& lhs, const CsMP& rhs);
	bool operator!=(const CsMP& lhs, const CsMP& rhs);
	bool operator>(const CsMP& lhs, const CsMP& rhs);
	std::ostream& operator<<(std::ostream& stream, const CsMP& temperature);
	std::istream& operator >> (std::istream& stream, CsMP& temperature);
	CsMP operator+(const CsMP& lhs, const CsMP& rhs);
	CsMP operator-(const CsMP& lhs, const CsMP& rhs);
	//CsMP operator*(const CsMP& lhs, const float& rhs);
	//CsMP operator*(const float& lhs, const CsMP& rhs);
	CsMP operator/(const CsMP& lhs, const float& rhs);
}
