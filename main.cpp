#include <iostream>
#include "/workspaces/SudokuCreater/include/sudoku.h"

int main() {
    SudokuBoard board;
    board.generate(); //create complete board
    
    int clues = 10;
    board.makePuzzle(clues);

    std::cout << "< Sudoku with " << clues << " clues >\n" << std::endl;

    board.print();
    return 0;
}