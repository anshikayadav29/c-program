#include <iostream>
using namespace std;

int main() {
    string s="rabbbit", t="rabbit";
    int dp[10][10]={0};

    for(int i=0;i<=s.size();i++)
        dp[i][0]=1;

    for(int i=1;i<=s.size();i++) {
        for(int j=1;j<=t.size();j++) {
            if(s[i-1]==t[j-1])
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[s.size()][t.size()];
}
