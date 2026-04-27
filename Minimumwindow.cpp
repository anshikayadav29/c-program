#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s="ADOBECODEBANC", t="ABC";
    unordered_map<char,int> mp;

    for(char c:t) mp[c]++;

    int l=0,count=t.size(),minLen=1e9,start=0;

    for(int r=0;r<s.size();r++) {
        if(mp[s[r]]-- > 0) count--;

        while(count==0) {
            if(r-l+1 < minLen) {
                minLen=r-l+1;
                start=l;
            }
            if(++mp[s[l++]] > 0) count++;
        }
    }

    cout<<s.substr(start,minLen);
}
