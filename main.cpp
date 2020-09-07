#include "Sudoku.h"

int main()
{
    Sudoku game;
    game.enterDigits();
    if(game.solve())
        game.print();
}

