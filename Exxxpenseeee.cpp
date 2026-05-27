#include <iostream>
using namespace std;

int main() {
    int n;
    float expense[100], total = 0;

    cout << "How many expenses? ";
    cin >> n;

    for(int i=0;i<n;i++) {
        cout << "Expense " << i+1 << ": ";
        cin >> expense[i];

        total += expense[i];
    }

    cout << "\nTotal Expense: " << total;

    return 0;
}
