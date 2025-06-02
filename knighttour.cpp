#include <iostream>
#include <iomanip>
using namespace std;

#define N 8

// Possible moves for a knight
int moveX[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int moveY[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

// Check if the move is inside the board and not yet visited
bool isSafe(int x, int y, int sol[N][N]) {
    return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1);
}

// Recursive utility function to solve Knight Tour problem
bool solveKTUtil(int x, int y, int movei, int sol[N][N]) {
    if (movei == N*N)
        return true;

    for (int k = 0; k < 8; k++) {
        int nextX = x + moveX[k];
        int nextY = y + moveY[k];

        if (isSafe(nextX, nextY, sol)) {
            sol[nextX][nextY] = movei;
            if (solveKTUtil(nextX, nextY, movei + 1, sol))
                return true;
            else
                sol[nextX][nextY] = -1; // backtracking
        }
    }

    return false;
}

// Solves the Knight Tour problem
void solveKT() {
    int sol[N][N];

    // Initialize solution matrix
    for (int x = 0; x < N; x++)
        for (int y = 0; y < N; y++)
            sol[x][y] = -1;

    // Starting position
    sol[0][0] = 0;

    if (!solveKTUtil(0, 0, 1, sol)) {
        cout << "Solution does not exist.\n";
    } else {
        for (int x = 0; x < N; x++) {
            for (int y = 0; y < N; y++)
                cout << setw(2) << sol[x][y] << " ";
            cout << endl;
        }
    }
}

int main() {
    solveKT();
    return 0;
}