#include <iostream>
using namespace std;

struct Data {
    string str;
};

int main() {
    Data d;
    cin >> d.str;

    for(char &c : d.str) {
        if(c >= 'a' && c <= 'z')
            c -= 32;
        else if(c >= 'A' && c <= 'Z')
            c += 32;
    }

    cout << d.str;
    return 0;
}
