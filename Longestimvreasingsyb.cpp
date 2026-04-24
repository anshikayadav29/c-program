#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10,9,2,5,3,7,101,18};
    vector<int> temp;

    for(int x : v) {
        auto it = lower_bound(temp.begin(), temp.end(), x);
        if(it == temp.end()) temp.push_back(x);
        else *it = x;
    }
    cout << temp.size();
}
