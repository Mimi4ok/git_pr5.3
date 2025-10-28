#include "pch.h"
#include "CppUnitTest.h"
#include "../gitpr5.3/gitpr5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestZ
{
    TEST_CLASS(UnitTestZ)
    {
    public:

        TEST_METHOD(TestZ)
        {
            double x = 0.5;

            double a = 1, S = a;
            for (int j = 1; j <= 7; j++) {
                double R = (-x) / j;
                a *= R;
                S += a;
            }
            double expected = S / exp(x);
            double result = z(x);

            Assert::AreEqual(expected, result);
        }
    };
}
