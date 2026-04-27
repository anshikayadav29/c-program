#include <iostream>
using namespace std;

int expand(string s,int l,int r) {
    while(l>=0 && r<s.size() && s[l]==s[r])
        l--,r++;
    return r-l-1;
}

int main() {
    string s="babad";
    int start=0,len=0;

    for(int i=0;i<s.size();i++) {
        int l1=expand(s,i,i);
        int l2=expand(s,i,i+1);
        int l=max(l1,l2);

        if(l>len) {
            len=l;
            start=i-(l-1)/2;
        }
    }
    cout<<s.substr(start,len);
}
