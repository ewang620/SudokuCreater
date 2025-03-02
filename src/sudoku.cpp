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

bool SudokuBoard::isValid(int row, int col, int num) const {
    for (int i = 0; i < 9; ++i) {
        if (board[row][i] == num || board[i][col] == num)
            return false;
    }
    //partial 3x3 check
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[startRow + i][startCol + j] == num)
                return false;
        }
    }
    return true;
}