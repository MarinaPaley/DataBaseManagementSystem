#include "pch.h"
#include "CppUnitTest.h"
#include "../Vector/Vectorr.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace Tests
{
	TEST_CLASS(Vector)
	{
	public:
		
		TEST_METHOD(Ctor_ValidData_Success)
		{
			// Arrange
			const auto size = 5;

			// Act
			auto vector = new dbms::Vector(size);

			// Assert
			Assert::IsNotNull(vector);
		}

		TEST_METHOD(CtorListInitializer_ValidData_Success)
		{
			// Arrange
			
			size_t expectedSize = 4;

			// Act
			auto vector = new dbms::Vector({1, 2, 3, 4});


			// Assert
			Assert::IsNotNull(vector);
			Assert::AreEqual(vector->GetSize(), expectedSize);
		}

		TEST_METHOD(ToString_Success)
		{
			// Arrange
			const std::string expected = "{ 1 2 3 4 }";
			auto vector = new dbms::Vector({ 1, 2, 3, 4 });

			//Act
			const auto actual = vector->ToString();

			// Assert
			Assert::AreEqual(expected, actual);
		}
	};
}
