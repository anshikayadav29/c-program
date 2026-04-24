#include <iostream>
using namespace std;

int main() {
    int coins[] = {1,2,5};
    int amount = 11;

    int dp[100];
    for(int i = 0; i <= amount; i++) dp[i] = 1e9;

    dp[0] = 0;

    for(int i = 1; i <= amount; i++) {
        for(int c : coins) {
            if(i - c >= 0)
                dp[i] = min(dp[i], 1 + dp[i-c]);
        }
    }

    cout << dp[amount];
}
