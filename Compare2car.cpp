#include <iostream>
using namespace std;

struct Car {
    int year;
};

int main() {
    Car c1, c2;
    cin >> c1.year >> c2.year;

    if(c1.year > c2.year)
        cout << "Car1 newer";
    else
        cout << "Car2 newer";

    return 0;
}
