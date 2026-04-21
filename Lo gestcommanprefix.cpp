#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v = {"flower","flow","flight"};
    string ans = "";

    for(int i = 0; i < v[0].size(); i++) {
        char c = v[0][i];
        for(int j = 1; j < v.size(); j++)
            if(i >= v[j].size() || v[j][i] != c)
                goto end;
        ans += c;
    }
end:
    cout << ans;
}
