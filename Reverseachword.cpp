#include <iostream>
using namespace std;

int main() {
    string s = "hello world";
    string word = "";

    for(char c : s) {
        if(c != ' ') word = c + word;
        else {
            cout << word << " ";
            word = "";
        }
    }
    cout << word;
}
