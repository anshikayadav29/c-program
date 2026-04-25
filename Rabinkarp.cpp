#include <iostream>
using namespace std;

int main() {
    string txt = "abcabcabc";
    string pat = "abc";

    int n = txt.size(), m = pat.size();
    int h1 = 0, h2 = 0, p = 31, mod = 1e9+7;

    for(int i=0;i<m;i++) {
        h1 = (h1*p + txt[i]) % mod;
        h2 = (h2*p + pat[i]) % mod;
    }

    for(int i=0;i<=n-m;i++) {
        if(h1 == h2)
            cout << i << " ";

        if(i < n-m)
            h1 = ((h1 - txt[i]*pow(p,m-1)) * p + txt[i+m]) % mod;
    }
}
