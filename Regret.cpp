#include <iostream>
using namespace std;

int main() {
    string s = "h e l l o";

    for(char c : s) {
        if(c != ' ') cout<<c;
    }
}
