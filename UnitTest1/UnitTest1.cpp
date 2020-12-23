#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1/lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int k = 0;
            int sum = 0;
            const int n = 20;
            int c[n] = { 3,  48,  25, -14,  29,  48,  22,  32,  34,  29,   5,   4,   9,  27,  39,  30,   1,  10,  30,  10 };

            s(c, sum, n);
            q(c, k, n);

            Assert::AreEqual(15, k);
            Assert::AreEqual(349, sum);
        }
    };
}
