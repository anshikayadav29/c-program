#include <iostream>
using namespace std;

int totalSolutions = 0;


void solve(int n, int row, int columns, int diag1, int diag2) {
    if (row == n) {
        totalSolutions++;
        return;
    }

    
    int available = ((1 << n) - 1) & ~(columns | diag1 | diag2);

    while (available) {
        int position = available & -available; 
        available -= position;

        solve(n, row + 1,
              columns | position,
              (diag1 | position) << 1,
              (diag2 | position) >> 1);
    }
}

int main() {
    int n;
    cout << "Enter number of queens (e.g., 8): ";
    cin >> n;

    if (n <= 0 || n > 32) {
        cout << "Please enter a value between 1 and 32.\n";
        return 1;
    }

    totalSolutions = 0;
    solve(n, 0, 0, 0, 0);
    cout << "Total solutions for " << n << "-Queens: " << totalSolutions << endl;

    return 0;
}