#include <iostream>
using namespace std;

int main() {
    string str;
    char ch;
    int count = 0;

    getline(cin, str);
    cin >> ch;

    for(char c : str) {
        if(c == ch)
            count++;
    }

    cout << count;
}
