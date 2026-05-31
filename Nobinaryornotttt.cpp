#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool binary = true;

    while(n > 0) {
        int digit = n % 10;

        if(digit != 0 && digit != 1) {
            binary = false;
            break;
        }

        n /= 10;
    }

    if(binary)
        cout << "Binary Number";
    else
        cout << "Not Binary Number";
}
