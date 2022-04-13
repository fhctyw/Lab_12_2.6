#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_2.6\Rational.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational r1({ 14, 7 });
			Rational r2({ 7, 14 });

			Rational r = r1 + r2;
			Assert::IsTrue(r.getPair().getA() == 245 && r.getPair().getB() == 98);
		}
	};
}
