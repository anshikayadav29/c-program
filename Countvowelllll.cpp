#include <iostream>
using namespace std;

int main() {
    string s = "hello world";
    int count = 0;

    for(char c : s)
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            count++;

    cout << count;
}
