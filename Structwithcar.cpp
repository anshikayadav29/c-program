#include <iostream>
using namespace std;

struct Data {
    char ch;
};

int main() {
    Data d;
    cin >> d.ch;

    cout << d.ch;
    return 0;
}
