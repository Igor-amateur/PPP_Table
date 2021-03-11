#pragma once

#include "TableCore.h"

namespace table
{

	class CTable_E1 :
		public CompresTable
	{
	public:
		static CTable_E1 * instance()
		{
			static CTable_E1 * inst(new CTable_E1());
			return inst;
		}
	private:
		CTable_E1();
		~CTable_E1() = default;
		CTable_E1(const CTable_E1&) = delete;            // Prevent copy-construction
		CTable_E1& operator=(CTable_E1&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};

	class CTable_E2 :
		public CompresTable
	{
	public:
		static CTable_E2 * instance()
		{
			static CTable_E2 * inst(new CTable_E2());
			return inst;
		}
	private:
		CTable_E2();
		~CTable_E2() = default;
		CTable_E2(const CTable_E2&) = delete;            // Prevent copy-construction
		CTable_E2& operator=(CTable_E2&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};

	class CTable_E3 :
		public CompresTable
	{
	public:
		static CTable_E3 * instance()
		{
			static CTable_E3 * inst(new CTable_E3());
			return inst;
		}
	private:
		CTable_E3();
		~CTable_E3() = default;
		CTable_E3(const CTable_E3&) = delete;            // Prevent copy-construction
		CTable_E3& operator=(CTable_E3&) = delete;      // Prevent assignment

		void * operator new (std::size_t aSize);
		void operator delete(void* obj);
		void * operator new[](std::size_t aSize);
		void operator delete[](void* obj);
	};
}

