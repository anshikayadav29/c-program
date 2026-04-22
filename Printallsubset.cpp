#include <iostream>
using namespace std;

void subsets(string s, string curr, int i) {
    if(i == s.size()) {
        cout << curr << endl;
        return;
    }
    subsets(s, curr + s[i], i + 1);
    subsets(s, curr, i + 1);
}

int main() {
    subsets("abc", "", 0);
}
