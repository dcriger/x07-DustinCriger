/*
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(TicTacToeBoardTest, blankBoard)
{
	Piece board[3][3];
	int count = 0;
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(board[i][j] == Blank)
			{
				count++;
			}
		}
	}
	
	ASSERT_EQ(count, 9);		
}

TEST(TicTacToeBoardTest, placePiece)
{/*
	Piece turn;
	Piece board[3][3];
	turn = board.placePiece(1,1);
	
	ASSERT_EQ(turn, X);*/
}

//having a really hard time remembering how to use class functions and member variables
//I know how to test but can't do it properly due to long amounts of time not using c++
