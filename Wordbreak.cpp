#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s = "leetcode";
    unordered_set<string> dict = {"leet","code"};
    int n = s.size();
    bool dp[100] = {0};
    dp[0] = true;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            if(dp[j] && dict.count(s.substr(j, i-j))) {
                dp[i] = true;
                break;
            }
        }
    }
    cout << dp[n];
}
