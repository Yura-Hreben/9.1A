#include "pch.h"
#include "CppUnitTest.h"
#include "../laba9.1/laba9.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student* s = new Student[1];
				s->prizv = "Гребень";
			    s->kurs = 1;
				s->spec = KN;
				s->markPh = 5;
				s->markMath = 5;
				s->markInfo = 5;
				s->markCHMET = 5;
				s->markPEDAG = 5;
				double testNum = LineSearch(s, 1);

				Assert::AreEqual(testNum, 100.);
		}
	};
}
