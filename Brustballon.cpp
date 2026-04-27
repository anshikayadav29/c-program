#include <iostream>
using namespace std;

int main() {
    int nums[]={3,1,5,8};
    int n=4;
    int dp[10][10]={0};

    for(int len=1;len<=n;len++) {
        for(int i=0;i+len-1<n;i++) {
            int j=i+len-1;
            for(int k=i;k<=j;k++) {
                int left = (k==i)?0:dp[i][k-1];
                int right= (k==j)?0:dp[k+1][j];

                int val = nums[k];
                if(i>0) val*=nums[i-1];
                if(j<n-1) val*=nums[j+1];

                dp[i][j]=max(dp[i][j], left+right+val);
            }
        }
    }
    cout<<dp[0][n-1];
}
