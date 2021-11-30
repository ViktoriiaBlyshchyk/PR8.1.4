#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\PR8.1.4\PR8.1.4\PR8.1.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "noass";
			string dest = Change(str);
			Assert::AreEqual(dest, "***ass");
		}
	};
}
