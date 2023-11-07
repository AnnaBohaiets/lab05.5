#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.5/lab05.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest055
{
	TEST_CLASS(UnitTest055)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 5;
			int k = 4;
			int expected_result = 5;
			int recursionDepth = 0;
			int M = binomialCoefficient(5, 4, recursionDepth);
			Assert::AreEqual(expected_result, M);
		}
	};
}
