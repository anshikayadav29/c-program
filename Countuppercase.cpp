#include <iostream>
using namespace std;

struct Data {
    string str;
};

int main() {
    Data d;
    cin >> d.str;

    int count=0;
    for(char c : d.str)
        if(c >= 'A' && c <= 'Z')
            count++;

    cout << count;
    return 0;
}
