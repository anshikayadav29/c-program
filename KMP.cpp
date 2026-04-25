#include <iostream>
using namespace std;

void computeLPS(string pat, int lps[]) {
    int len = 0, i = 1;
    lps[0] = 0;

    while(i < pat.size()) {
        if(pat[i] == pat[len])
            lps[i++] = ++len;
        else {
            if(len != 0) len = lps[len-1];
            else lps[i++] = 0;
        }
    }
}

int main() {
    string txt = "ababcabcabababd";
    string pat = "ababd";

    int lps[100];
    computeLPS(pat, lps);

    int i = 0, j = 0;

    while(i < txt.size()) {
        if(txt[i] == pat[j]) i++, j++;

        if(j == pat.size()) {
            cout << "Found at " << i-j;
            j = lps[j-1];
        }
        else if(i < txt.size() && txt[i] != pat[j]) {
            if(j != 0) j = lps[j-1];
            else i++;
        }
    }
}
