#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1 рек/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool t;
			char k[] = { "+-=***+" };
			t = Count(k,0,0);
			Assert::AreEqual(t, true);
		}
	};
}
