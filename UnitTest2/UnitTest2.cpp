#include "pch.h"
#include "CppUnitTest.h"
#include "../gitpr5.3/gitpr5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestZ)
		{
			double x = 2.0;
			double expected = (cos(x) + 1) / (sin(x) * sin(x) + exp(x));
			double result = z(x);

			Assert::AreEqual(expected, result);
		}
	};
}
