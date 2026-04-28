#include <iostream>
using namespace std;

int main() {
    int cuts[]={1,3,4,5};
    int n=4;
    int dp[10][10]={0};

    for(int len=2;len<=n;len++) {
        for(int i=0;i+len<n;i++) {
            int j=i+len;
            dp[i][j]=1e9;

            for(int k=i+1;k<j;k++)
                dp[i][j]=min(dp[i][j],
                    dp[i][k]+dp[k][j]+cuts[j]-cuts[i]);
        }
    }
    cout<<dp[0][n-1];
}
