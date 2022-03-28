#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_Lab_1.6/FractionC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FractionC d, c;
			int a = 5;
			int b = 6;

			Assert::IsTrue(d.Init(a, b));
		}
	};
}
