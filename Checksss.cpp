#include <iostream>
using namespace std;

int main() {
    string s1 = "abcde";
    string s2 = "cdeab";

    string temp = s1 + s1;

    if(temp.find(s2) != string::npos)
        cout<<"Rotation";
    else
        cout<<"Not";
}
