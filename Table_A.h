#pragma once

#include "TableCore.h"

namespace table
{

	class CTable_A1 :
		public DensityTable
	{
	public:
		static CTable_A1 * instance()
		{
			static CTable_A1 * inst(new CTable_A1());
			return inst;
		}
	private:
		CTable_A1();
		~CTable_A1() = default;
		CTable_A1(const CTable_A1&) = delete;            // Prevent copy-construction
		CTable_A1& operator=(CTable_A1&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};

	class CTable_A2 :
		public DensityTable
	{
	public:
		static CTable_A2 * instance()
		{
			static CTable_A2 * inst(new CTable_A2());
			return inst;
		}
	private:
		CTable_A2();
		~CTable_A2() = default;
		CTable_A2(const CTable_A2&) = delete;            // Prevent copy-construction
		CTable_A2& operator=(CTable_A2&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};

	class CTable_A3 :
		public DensityTable
	{
	public:
		static CTable_A3 * instance()
		{
			static CTable_A3 * inst(new CTable_A3());
			return inst;
		}
	private:
		CTable_A3();
		~CTable_A3() = default;
		CTable_A3(const CTable_A3&) = delete;            // Prevent copy-construction
		CTable_A3& operator=(CTable_A3&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};
}

