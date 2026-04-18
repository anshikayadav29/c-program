#include <iostream>
using namespace std;

int main() {
    string s = "()()";
    int count = 0;
    bool valid = true;

    for(char c : s) {
        if(c=='(') count++;
        else count--;

        if(count < 0) valid = false;
    }

    if(count==0 && valid) cout<<"Balanced";
    else cout<<"Not";
}
