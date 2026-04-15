#include <iostream>
using namespace std;

int main() {
    string s = "hello world";

    for(int i=s.length()-1;i>=0;i--) {
        cout<<s[i];
    }
}
