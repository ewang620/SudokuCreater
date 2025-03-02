#include "/workspaces/SudokuCreater/include/sudoku.h"

//9x9 board with 0s as blanks. initialized. 
SudokuBoard::SudokuBoard() : board(9, std::vector<int>(9, 0)) {}

//print board
void SudokuBoard::print() const {
    for (const auto &row : board) {
        for (int cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
}