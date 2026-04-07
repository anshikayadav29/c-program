#include <iostream>
using namespace std;

float convert(float c) {
    return (c * 9/5) + 32;
}

int main() {
    cout << convert(25);
}
