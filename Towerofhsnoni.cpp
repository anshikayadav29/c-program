#include <iostream>
using namespace std;

void hanoi(int n, char A, char B, char C) {
    if(n == 0) return;

    hanoi(n-1, A, C, B);
    cout << "Move disk " << n << " from " << A << " to " << C << endl;
    hanoi(n-1, B, A, C);
}

int main() {
    hanoi(3, 'A', 'B', 'C');
    return 0;
}
