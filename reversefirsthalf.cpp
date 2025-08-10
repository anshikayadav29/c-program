#include<iostream>
#include<string>
using namespace std;
int main() {
    string s = "raghav";
    cout << s << endl;
    int n = s.length();
    int i = 0;
    int j = max(0, n / 2 - 1); 
    while (i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout << s << endl;
}