#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    *ptr = "Burger";

    cout << food << endl;
    return 0;
}
