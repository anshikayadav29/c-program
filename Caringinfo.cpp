#include <iostream>
using namespace std;

struct Car {
    string brand;
    int year;
};

int main() {
    Car c;
    cin >> c.brand >> c.year;

    cout << c.brand << " " << c.year;
    return 0;
}
