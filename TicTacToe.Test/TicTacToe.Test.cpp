#include "pch.h"
#include "CppUnitTest.h"
#include "../TicTacToe.Logic/Board.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TicTacToeTest
{
	TEST_CLASS(TicTacToeTest)
	{
	public:

		TEST_METHOD(TestTrue)
		{
			Assert::AreEqual(true, true);
		}

		TEST_METHOD(TestSetSquare)
		{
			//Arrange
			Board b;
			
			//Act
			b.SetSquare(0, 0, 'X');

			//Assert
			Assert::AreEqual('X', b.GetSquare(0,0));
		}

		TEST_METHOD(TestSetTwoSquares)
		{
			//Arrange
			Board b;

			//Act
			b.SetSquare(0, 0, 'X');
			b.SetSquare(1, 1, 'O');

			//Assert
			Assert::AreEqual('X', b.GetSquare(0, 0));
			Assert::AreEqual('O', b.GetSquare(1, 1));
		}

		TEST_METHOD(TestGetSquareIFOutOfBounds)
		{
			// Arrange
			Board b;
			b.SetSquare(0, 0, 'X');

			// Act + Assert 
			Assert::AreEqual(' ', b.GetSquare(-1, 0));
			Assert::AreEqual(' ', b.GetSquare(0, -1));
			Assert::AreEqual(' ', b.GetSquare(3, 0));
			Assert::AreEqual(' ', b.GetSquare(0, 3));
		}


		//TEST_METHOD(TestBoardCreate)
		//{
		//	Board b;
		//	char setup[3][3] = { {'X',' ',' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
		//	b.SetBoard(setup);
		//	Assert::AreEqual('X', b.GetSquare(0, 0));
		//}

	};
}
