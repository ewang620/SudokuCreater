#include <iostream>
#include <cstdlib>
#include "/workspaces/SudokuCreater/include/sudoku.h"

int main(int argc, char* argv[]) {
    
    int clues = 40; // default clue num
    if (argc > 1) {
        clues = std::atoi(argv[1]);
    }
    
    SudokuBoard board;
    board.generate(); //complete board
    board.makePuzzle(clues);

    std::cout << "< Sudoku with " << clues << " clues >\n" << std::endl;

    board.print();
    return 0;
}