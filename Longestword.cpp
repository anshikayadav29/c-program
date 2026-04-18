#include <iostream>
using namespace std;

int main() {
    string s = "I love programming";
    string word="", longest="";

    for(char c : s) {
        if(c != ' ') word += c;
        else {
            if(word.length() > longest.length())
                longest = word;
            word = "";
        }
    }

    if(word.length() > longest.length())
        longest = word;

    cout << longest;
}
