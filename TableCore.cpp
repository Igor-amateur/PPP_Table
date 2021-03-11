#include "stdafx.h"
#include "TableCore.h"
#include<sstream>
#include<iomanip>
#include<cmath>

namespace table
{
	////////////////////////////////////////////////////////////////////////////////////////////////////
	///Declaration abstract class CTableCore

	CTableCore::CTableCore() = default;
	CTableCore::CTableCore(const ThisTable& table) : table_(std::make_shared<ThisTable>(table))
	{

	}

	CTableCore::~CTableCore()
	{
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////
	///Declaration class CompresTable
	CompresTable::CompresTable() = default;

	CompresTable::CompresTable(const ThisTable& table) : CTableCore(table)
	{

	}


	CompresTable::~CompresTable()
	{
	}
	///Необходимо доработать функцию с использованием быстрого поиска lower_bound и ouper_bound.
	float CompresTable::calculateReduceCompres_ty(const density::KgMC& density, const int& index)
	{

		auto pair_table(table_->equal_range(density));

		if (pair_table.second == table_->begin() || pair_table.first == table_->end())
		{
			std::stringstream ss;
			ss << "Invalid argument " << density << '!';
			throw std::invalid_argument(ss.str());
		}
		else
		{
			const density::KgMC index_density_max(pair_table.second->first.value_);
			const density::KgMC index_density_min(index_density_max.value_ - 100);
			const float reDensity_min(0.001f * static_cast<float> (table_->at(index_density_min).at(index)));
			const float reDensity_max(0.001f * static_cast<float> (table_->at(index_density_max).at(index)));

			const float current_density(static_cast<float> (density.value_) / 10.0f);
			const float density_max(static_cast<float> (index_density_max.value_) / 10.0f);
			const float density_min(static_cast<float> (index_density_min.value_) / 10.0f);

			const float result = reDensity_min + ((current_density - density_min)*(reDensity_max - reDensity_min)) / 10.0f;

			return (std::round(result * 1000.0f) / 1000.0f);
		}

		return{};
	}

	float CompresTable::GetItem(const density::KgMC& density, const temperature::DgCs& temperature)
	{
		if (temperature.value_ < -250 || temperature.value_ > 400)
		{
			std::stringstream ss;
			ss << "Invalid argument " << temperature << '!';
			throw std::invalid_argument(ss.str());
		}

		const float temperature_temp(std::round(static_cast<float>(temperature.value_) / 10.0f));
		const temperature::DgCs temperature_round(temperature_temp * 10);
		int index((temperature_round.value_ + 250) / 10);

		try
		{
			return 0.001f * (static_cast<float> (table_->at(density).at(index)));
		}
		catch (std::exception&)
		{
			try
			{
				return calculateReduceCompres_ty(density, index);
			}
			catch (std::invalid_argument& ex)
			{
				throw(std::invalid_argument(ex.what()));
			}
		}
		return{};
	}

	bool CompresTable::isDensity() const
	{
		return false;
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////
	///Declaration class DensityTable
	DensityTable::DensityTable() = default;

	DensityTable::DensityTable(const ThisTable& table) : CTableCore(table)
	{

	}


	DensityTable::~DensityTable()
	{
	}
	///Необходимо доработать функцию с использованием быстрого поиска lower_bound и ouper_bound.
	float DensityTable::calculateReduceDensity(const density::KgMC& density, const int& index)
	{
		try
		{
			return 0.1f * static_cast<float> (table_->at(density).at(index));
		}
		catch (std::exception&)
		{
			auto pair_table(table_->equal_range(density));
			if (pair_table.second == table_->begin() || pair_table.first == table_->end())
			{
				std::stringstream ss;
				ss << "Invalid argument " << density << '!';
				throw std::invalid_argument(ss.str());
			}
			else
			{
				const density::KgMC index_density_max(pair_table.second->first.value_);
				const density::KgMC index_density_min(index_density_max.value_ - 100);
				const float reDensity_min(0.1f * static_cast<float> (table_->at(index_density_min).at(index)));
				const float reDensity_max(0.1f * static_cast<float> (table_->at(index_density_max).at(index)));

				const float current_density(static_cast<float> (density.value_) / 10.0f);
				const float density_max(static_cast<float> (index_density_max.value_) / 10.0f);
				const float density_min(static_cast<float> (index_density_min.value_) / 10.0f);

				const float result = reDensity_min + ((current_density - density_min)*(reDensity_max - reDensity_min)) / 10.0f;
				
				return (std::round(result * 100.0f) / 100.0f);
			}
		}

		return{};
	}

	float DensityTable::calculateReduceDensity(const density::KgMC& density, const int& index_min, const int& index_max)
	{
		float min_rDensity(calculateReduceDensity(density, index_min));
		float max_rDensity(calculateReduceDensity(density, index_max));

		const float result((min_rDensity + max_rDensity) / 2.0f);
		return (std::round(result * 100.0f) / 100.0f);
	}

	float DensityTable::GetItem(const density::KgMC& density, const temperature::DgCs& temperature)
	{
		if (temperature.value_ < -250 || temperature.value_ > 400)
		{
			std::stringstream ss;
			ss << "Invalid argument " << temperature << '!';
			throw std::invalid_argument(ss.str());
		}

		const float pre_index(static_cast<float>(temperature.value_ + 250) / 2.0f);
		const int index(static_cast<int>(pre_index));
		if ((pre_index - index) > 0.0f)
		{
			const int index_max(index + 1);
			try
			{
				return (std::round(calculateReduceDensity(density, index, index_max) * 10.0f) / 10.0f );
			}
			catch (std::invalid_argument& ex)
			{
				throw(std::invalid_argument(ex.what()));
			}
		}
		else
		{
			try
			{
				return 0.1f * (static_cast<float> (table_->at(density).at(index)));
			}
			catch (std::exception&)
			{
				try
				{
					return (std::round(calculateReduceDensity(density, index) * 10.0f) / 10.0f);
				}
				catch (std::invalid_argument& ex)
				{
					throw(std::invalid_argument(ex.what()));
				}
			}
		}
		return{};
	}

	bool DensityTable::isDensity() const
	{
		return true;
	}
}
