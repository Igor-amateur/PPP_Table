#pragma once

#include "TableCore.h"

namespace table
{

	class CTable_D1 :
		public DensityTable
	{
	public:
		static CTable_D1 * instance()
		{
			static CTable_D1 * inst(new CTable_D1());
			return inst;
		}
	private:
		CTable_D1();
		~CTable_D1() = default;
		CTable_D1(const CTable_D1&) = delete;            // Prevent copy-construction
		CTable_D1& operator=(CTable_D1&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};

	class CTable_D2 :
		public DensityTable
	{
	public:
		static CTable_D2 * instance()
		{
			static CTable_D2 * inst(new CTable_D2());
			return inst;
		}
	private:
		CTable_D2();
		~CTable_D2() = default;
		CTable_D2(const CTable_D2&) = delete;            // Prevent copy-construction
		CTable_D2& operator=(CTable_D2&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};

	class CTable_D3 :
		public DensityTable
	{
	public:
		static CTable_D3 * instance()
		{
			static CTable_D3 * inst(new CTable_D3());
			return inst;
		}
	private:
		CTable_D3();
		~CTable_D3() = default;
		CTable_D3(const CTable_D3&) = delete;            // Prevent copy-construction
		CTable_D3& operator=(CTable_D3&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};
}

