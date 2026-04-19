#include <iostream>
using namespace std;

int main() {
    string s = "programming";
    char ch = 'm';

    string result = "";

    for(char c : s) {
        if(c != ch) result += c;
    }

    cout << result;
}
