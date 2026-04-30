#include <bits/stdc++.h>
using namespace std;

vector<int> lps(string p){
    int n=p.size();
    vector<int> l(n);

    for(int i=1,len=0;i<n;){
        if(p[i]==p[len])
            l[i++]=++len;
        else{
            if(len) len=l[len-1];
            else l[i++]=0;
        }
    }

    return l;
}

int main(){
    string t="ababcab";
    string p="abc";

    vector<int> l=lps(p);

    int i=0,j=0;

    while(i<t.size()){
        if(t[i]==p[j]){
            i++;j++;
        }

        if(j==p.size()){
            cout<<"Found";
            break;
        }
        else if(i<t.size() && t[i]!=p[j]){
            if(j) j=l[j-1];
            else i++;
        }
    }
}
