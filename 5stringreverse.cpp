#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;
int main() {
    string s = "Nincy is a doctor";
    cout << "Original: " << s << endl;
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s << endl;
    return 0;
}