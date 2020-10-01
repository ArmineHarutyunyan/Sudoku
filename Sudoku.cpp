#include <iostream>
#include "Sudoku.h"



    void Sudoku::enterDigits()
    {
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                std::cin >> board[i][j];
            }
        }
    }


	bool Sudoku::isValidPlace(const int& row, const int& col, const int& digit) const
    {
        return !isPresentInRow(row, digit) && !isPresentInCol(col, digit) && !isPresentInBox(row - row % 3, col - col % 3, digit);
    }


    bool Sudoku::isPresentInBox(const int& startRow, const int& startCol, const int& digit) const
    {
        for(int row = 0; row < 3; ++row)
        {
            for(int col = 0; col < 3; ++col)
            {
                if(board[row + startRow][col+ startCol] == digit)
                    return true;
            }
        }
        return false;
    }

    bool Sudoku::isPresentInCol(const int& col, const int& digit) const
    {
        for(int row = 0; row < n; ++row)
        {
            if(board[row][col] == digit)
                return true;
        }
        return false;
    }

    bool Sudoku::isPresentInRow(const int& row, const int& digit) const
    {
        for(int col = 0; col < n; ++col)
        {
            if(board[row][col] == digit)
                return true;
        }
        return false;
    }

    bool Sudoku::checkEmptyPlace(int &row, int &col)
    {
        for (row = 0; row < n; row++)
        {
            for (col = 0; col < n; col++)
            {
                if (board[row][col] == 0)
                    return true;
            }
        }
        return false;
    }

    bool Sudoku::solve()
    {
        int row, col;
        if (!checkEmptyPlace(row, col))
            return true;
        for(int num = 1; num <= 9; ++num)
        {
            if(isValidPlace(row, col, num))
            {
                board[row][col] = num;
                if(solve())
                    return true;
                 board[row][col] = 0;
            }
        }
        return false;
    }
	
    void Sudoku::print() const
    {
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                std::cout << Sudoku::board[i][j] << " ";
            }
            std::cout << "\n";
        }
    }


     

