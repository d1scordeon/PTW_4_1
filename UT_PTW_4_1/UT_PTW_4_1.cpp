#include "pch.h"
#include "CppUnitTest.h"
#include "../PTW_4_1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTPTW41
{
	TEST_CLASS(UTPTW41)
	{
	public:
		
		TEST_METHOD(AnalyzeFile_FileWithNeededValue_True)
		{
			// Arrange
			bool expected = true;

			// Act
			bool actual = AnalyzeFile("1.txt");

			// Assert
			Assert::AreEqual(expected, actual);
		}
	};
}
