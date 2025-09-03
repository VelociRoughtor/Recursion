#include <bits/stdc++.h>
using namespace std;

const int N = 9;

bool isValid(int row, int col, char c, vector<vector<char>> &board) {
    for (int i = 0; i < N; i++) {
        if (board[i][col] == c) return false;  // check column
        if (board[row][i] == c) return false;  // check row
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) return false; // check 3x3 box
    }
    return true;
}

bool sudoku(vector<vector<char>> &board) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == '.') { // empty cell
                for (char c = '1'; c <= '9'; c++) {
                    if (isValid(i, j, c, board)) {
                        board[i][j] = c;
                        if (sudoku(board)) return true;
                        board[i][j] = '.'; // backtrack
                    }
                }
                return false; // no valid digit
            }
        }
    }
    return true; 
}

int main() {
    vector<vector<char>> board(N, vector<char>(N));

    // input board (use '.' for empty cells)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    if (sudoku(board)) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "No solution exists.\n";
    }

    return 0;
}
