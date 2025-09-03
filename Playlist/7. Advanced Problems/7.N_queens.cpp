#include <bits/stdc++.h>
using namespace std;

vector<string> board;
int n;
int cnt = 0;

vector<bool> rows;
vector<bool> upper_diagonals;
vector<bool> lower_diagonals;

// version 1
// bool isSafe(int row, int col) {
//     int i = row, j = col;
//     while (i >= 0 && j >= 0) {
//         if (board[i][j] == 'Q') return false;
//         i--; j--;
//     }
//     i = row; j = col;
//     while (j >= 0) {
//         if (board[i][j] == 'Q') return false;
//         j--;
//     }
//     i = row; j = col;
//     while (i < n && j >= 0) {
//         if (board[i][j] == 'Q') return false;
//         i++; j--;
//     }
//     return true;
// }

// version 2: optimized
bool isSafe(int row, int col) {
    return (!rows[row] && 
        !upper_diagonals[n - 1 + col - row] && 
        !lower_diagonals[row + col]);
}

void nQueens(int col) {
    if (col == n) {
        cnt++;
        return;
    }
    for (int row = 0; row < n; row++) {
        if (isSafe(row, col)) {
            board[row][col] = 'Q';
            rows[row] = true;
            upper_diagonals[n - 1 + col - row] = true;
            lower_diagonals[row + col] = true;

            nQueens(col + 1);

            board[row][col] = '.';
            rows[row] = false;
            upper_diagonals[n - 1 + col - row] = false;
            lower_diagonals[row + col] = false;
        }
    }
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        cin >> n;
        board.assign(n, string(n, '.')); 
        rows.assign(n, 0);
        upper_diagonals.assign(2 * n - 1, 0); 
        lower_diagonals.assign(2 * n - 1, 0); 
        cnt = 0;                        
        nQueens(0);
        cout << cnt << endl;
    }
    return 0;
}
