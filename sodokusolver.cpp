#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 9;

// Check if it's safe to place num at board[row][col]
bool isSafe(vector<vector<char>>& board, int row, int col, char num) {
    for (int x = 0; x < SIZE; x++) {
        if (board[row][x] == num) return false;
        if (board[x][col] == num) return false;
        if (board[3*(row/3) + x/3][3*(col/3) + x%3] == num) return false;
    }
    return true;
}

// Recursive function to solve the Sudoku
bool solveSudoku(vector<vector<char>>& board) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            if (board[row][col] == '.') {
                for (char num = '1'; num <= '9'; num++) {
                    if (isSafe(board, row, col, num)) {
                        board[row][col] = num;
                        if (solveSudoku(board)) return true;
                        board[row][col] = '.';
                    }
                }
                return false; // no valid number found
            }
        }
    }
    return true; // solved
}

// Function to print the Sudoku board
void printBoard(const vector<vector<char>>& board) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    if (solveSudoku(board)) {
        cout << "Sudoku solved successfully:\n";
        printBoard(board);
    } else {
        cout << "No solution exists.\n";
    }

    return 0;
}