#ifndef SUDOKU_H
#define SUDOKU_H

#include <vector>
#include <iostream>

class SudokuBoard {
public:
    SudokuBoard();      
    void print() const;   
    //should add checker, solver, generator, etc later on.

    private:
    std::vector<std::vector<int>> board;  
    //board size should be 9x9
};

#endif