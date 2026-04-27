#include <iostream>
#include <vector>
using namespace std;

bool isPal(string s) {
    int l=0,r=s.size()-1;
    while(l<r) if(s[l++]!=s[r--]) return false;
    return true;
}

void solve(string s, vector<string>& curr) {
    if(s.empty()) {
        for(auto x:curr) cout<<x<<" ";
        cout<<endl;
        return;
    }

    for(int i=1;i<=s.size();i++) {
        string left=s.substr(0,i);
        if(isPal(left)) {
            curr.push_back(left);
            solve(s.substr(i),curr);
            curr.pop_back();
        }
    }
}

int main() {
    vector<string> curr;
    solve("aab",curr);
}
