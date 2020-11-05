#include "gtest/gtest.h"
#include "Sudoku.h"


namespace {

Sudoku game;


void boardInit()
{
	int b[81] = {5, 3, 0, 0, 7, 0, 0, 0, 0, 
				 6, 0, 0, 1, 9, 5, 0, 0, 0,
				 0, 9, 8, 0, 0, 0, 0, 6, 0,
				 8, 0, 0, 0, 6, 0, 0, 0, 3,
				 4, 0, 0, 8, 0, 3, 0, 0, 1,
				 7, 0, 0, 0, 2, 0, 0, 0, 6,
				 0, 6, 0, 0, 0, 0, 2, 8, 0,
				 0, 0, 0, 4, 1, 9, 0, 0, 5,
				 0, 0, 0, 0, 8, 0, 0, 7, 9,
				};
	
	for(int i = 0; i < 9; ++i)
	{
		for(int j = 0; j < 9; ++j)
		{
			game.board[i][j] = b[i * 9 + j];
		}
	}
}

TEST(SudokuTest, isInCol)
{
	boardInit();
	EXPECT_FALSE(game.isPresentInCol(0, 1));
	EXPECT_TRUE(game.isPresentInCol(8, 1));
}


TEST(SudokuTest, isInRow)
{
	boardInit();
	EXPECT_TRUE(game.isPresentInRow(8, 9));
	EXPECT_FALSE(game.isPresentInRow(0, 9));
}
}



int main(int argc, char**argv)
{
	::testing::InitGoogleTest(&argc, argv);
	  return RUN_ALL_TESTS();
}
