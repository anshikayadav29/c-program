#include <iostream>
using namespace std;

int main() {
    int p[] = {1,2,3,4};
    int n = 4;
    int dp[10][10] = {0};

    for(int len = 2; len < n; len++) {
        for(int i = 1; i < n-len+1; i++) {
            int j = i + len - 1;
            dp[i][j] = 1e9;
            for(int k = i; k < j; k++) {
                dp[i][j] = min(dp[i][j],
                    dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j]);
            }
        }
    }
    cout << dp[1][n-1];
}
