// PPP_Table.cpp : Defines the entry point for the console application.
// PROPERTIES OF PETROLEUM PRODUCTS Table
/*
* State system for ensuring the uniformity of measurements.
* Density of light petroleum products.
* The tables for recalculation of density to 15 °C and 20 °C and to conditions 
* of volume’s measurement
*/

#include "stdafx.h"
#include<iostream>
#include<exception>
#include<vector>
#include<map>
#include<memory>
#include<iomanip>

#include"Table_A.h"
#include"Table_B.h"
#include"Table_C.h"
#include"Table_D.h"
#include"Table_E.h"

//#include"../UNIT_TEST/profile.h"

namespace ws // work space
{
	using namespace table;
	using namespace density;
	using namespace temperature;

	using TableAdapter = std::map<std::string, std::vector<CTableCore*>>;

}

int main()
{
	// Для ускорения чтения данных отключается синхронизация
	// cin и cout с stdio,
	// а также выполняется отвязка cin от cout
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::vector<std::string> fuel_type{ "Petrol", "Jet", "Diesel" };
	std::vector<std::string> table_type_1{ "Fuel ", "Density", "Density", "Density", "Density", "Compressity" };
	std::vector<std::string> table_type_2{ " Type", "to 15 C", "to 20 C", "from 15 C", "from 20 C", "factor" };
	ws::KgMC density;
	ws::DgCs temperature;

	ws::TableAdapter tableAdapter;
	{
	//	LOG_DURATION("All instance  initialization");

		tableAdapter["Petrol"].push_back(ws::CTable_A1::instance());

		tableAdapter["Petrol"].push_back(ws::CTable_B1::instance());

		tableAdapter["Petrol"].push_back(ws::CTable_C1::instance());

		tableAdapter["Petrol"].push_back(ws::CTable_D1::instance());

		tableAdapter["Petrol"].push_back(ws::CTable_E1::instance());

		tableAdapter["Jet"].push_back(ws::CTable_A2::instance());

		tableAdapter["Jet"].push_back(ws::CTable_B2::instance());

		tableAdapter["Jet"].push_back(ws::CTable_C2::instance());

		tableAdapter["Jet"].push_back(ws::CTable_D2::instance());

		tableAdapter["Jet"].push_back(ws::CTable_E2::instance());

		tableAdapter["Diesel"].push_back(ws::CTable_A3::instance());

		tableAdapter["Diesel"].push_back(ws::CTable_B3::instance());

		tableAdapter["Diesel"].push_back(ws::CTable_C3::instance());

		tableAdapter["Diesel"].push_back(ws::CTable_D3::instance());

		tableAdapter["Diesel"].push_back(ws::CTable_E3::instance());

	}

	while (true)
	{
		std::cout << '\n';
		std::cout << "Input density: "; std::cin >> density;
		std::cout << "Input temperature: "; std::cin >> temperature;
		std::cout << '\n';
/*
		auto T_b2(ws::CTable_B2::instance());

		std::cout << T_b2->GetItem(density, temperature) << std::endl;
*/
	//	LOG_DURATION("Calculation time with output all table");
		std::cout << "------------------------------------------"
			<< "------------------------------------------" << '\n';
		for (const auto& chap : table_type_1)
		{
			std::cout << std::setw(12) << chap << " |";
		}
		std::cout << '\n';
		for (const auto& chap : table_type_2)
		{
			std::cout << std::setw(12) << chap << " |";
		}
		std::cout << '\n';
		std::cout << "------------------------------------------"
		<< "------------------------------------------" << '\n';
	//	LOG_DURATION("Calculation time without output table head");
		for (const auto& type : fuel_type)
		{
			std::cout << std::setw(12) << type << " |";

			for (const auto& v : tableAdapter.at(type))
			{
				try
				{
					if (v->isDensity())
						std::cout << std::fixed << std::setw(12) << std::setprecision(1) << v->GetItem(density, temperature) << " |";
					else
						std::cout << std::fixed << std::setw(12) << std::setprecision(3) << v->GetItem(density, temperature) << " |";

				}
				catch (std::exception&)
				{
					std::cout << std::setw(12) << "--" << " |";
				}
			}
			std::cout << '\n';
			std::cout << "------------------------------------------"
				<< "------------------------------------------" << '\n';
		}
			std::cout << '\n';
	}

	return 0;
}

