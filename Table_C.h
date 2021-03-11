#pragma once

#include "TableCore.h"

namespace table
{

	class CTable_C1 :
		public DensityTable
	{
	public:
		static CTable_C1 * instance()
		{
			static CTable_C1 * inst(new CTable_C1());
			return inst;
		}
	private:
		CTable_C1();
		~CTable_C1() = default;
		CTable_C1(const CTable_C1&) = delete;            // Prevent copy-construction
		CTable_C1& operator=(CTable_C1&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};

	class CTable_C2 :
		public DensityTable
	{
	public:
		static CTable_C2 * instance()
		{
			static CTable_C2 * inst(new CTable_C2());
			return inst;
		}
	private:
		CTable_C2();
		~CTable_C2() = default;
		CTable_C2(const CTable_C2&) = delete;            // Prevent copy-construction
		CTable_C2& operator=(CTable_C2&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};

	class CTable_C3 :
		public DensityTable
	{
	public:
		static CTable_C3 * instance()
		{
			static CTable_C3 * inst(new CTable_C3());
			return inst;
		}
	private:
		CTable_C3();
		~CTable_C3() = default;
		CTable_C3(const CTable_C3&) = delete;            // Prevent copy-construction
		CTable_C3& operator=(CTable_C3&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};
}

