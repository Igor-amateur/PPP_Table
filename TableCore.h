#pragma once

#include<iostream>
#include<string>
#include<memory>
#include<map>
#include<vector>

#include"density.h"
#include"temperature.h"

namespace table
{
	using ThisTable = std::map<density::KgMC, std::vector<int16_t>>;

	///Definition abstract class CTableCore
	class CTableCore
	{
	public:
		CTableCore();
		CTableCore(const ThisTable&);
		virtual ~CTableCore();
		virtual float GetItem(const density::KgMC&, const temperature::DgCs&) = 0;
		virtual bool isDensity() const = 0;
	private:
		friend class CompresTable;
		friend class DensityTable;
		std::shared_ptr<ThisTable> table_;
	};


	///Definition abstract class CompresTable
	class CompresTable :
		public CTableCore
	{
	public:
		CompresTable();
		CompresTable(const ThisTable&);
		virtual ~CompresTable();
		float GetItem(const density::KgMC&, const temperature::DgCs&) override;
		bool isDensity() const override;
	private:
		float calculateReduceCompres_ty(const density::KgMC& , const int&);
	};

	///Definition abstract class DensityTable
	class DensityTable :
		public CTableCore
	{
	public:
		DensityTable();
		DensityTable(const ThisTable&);
		virtual ~DensityTable();
		float GetItem(const density::KgMC&, const temperature::DgCs&) override;
		bool isDensity() const override;
	private:
		float calculateReduceDensity(const density::KgMC&, const int&);
		float calculateReduceDensity(const density::KgMC&, const int&, const int&);
	};

}
