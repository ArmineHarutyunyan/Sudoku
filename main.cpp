#include <exception>
#include "Sudoku.h"

int main()
{
    try
    {
        Sudoku game;
        game.enterDigits();
        if(game.solve())
            game.print();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what();
    }       
}

