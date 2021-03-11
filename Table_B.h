#pragma once

#include "TableCore.h"

namespace table
{

	class CTable_B1 :
		public DensityTable
	{
	public:
		static CTable_B1 * instance()
		{
			static CTable_B1 * inst(new CTable_B1());
			return inst;
		}
	private:
		CTable_B1();
		~CTable_B1() = default;
		CTable_B1(const CTable_B1&) = delete;            // Prevent copy-construction
		CTable_B1& operator=(CTable_B1&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};

	class CTable_B2 :
		public DensityTable
	{
	public:
		static CTable_B2 * instance()
		{
			static CTable_B2 * inst(new CTable_B2());
			return inst;
		}
	private:
		CTable_B2();
		~CTable_B2() = default;
		CTable_B2(const CTable_B2&) = delete;            // Prevent copy-construction
		CTable_B2& operator=(CTable_B2&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};

	class CTable_B3 :
		public DensityTable
	{
	public:
		static CTable_B3 * instance()
		{
			static CTable_B3 * inst(new CTable_B3());
			return inst;
		}
	private:
		CTable_B3();
		~CTable_B3() = default;
		CTable_B3(const CTable_B3&) = delete;            // Prevent copy-construction
		CTable_B3& operator=(CTable_B3&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};
}

