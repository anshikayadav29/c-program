#include <iostream>
using namespace std;

void marks(int total, int subjects = 5) {
    cout << total / subjects;
}

int main() {
    marks(500);
}
