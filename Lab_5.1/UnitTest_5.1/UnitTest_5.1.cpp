#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1/Lab_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double p;
			p = 2;
			double q;
			q = 3;
			double c = pow(h(abs(p - q), sqrt(abs(p - q))), 2) + h(1, q * q - p * p);
		}
	};
}
