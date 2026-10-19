#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_2_1/Triangle.h"
#include "../lab_2_1/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle t(3.0, 4.0);
			double expected = 5.0;
			double actual = t.hypotenuse();
			Assert::AreEqual(expected, actual, 0.0001);
		}
	};
}
