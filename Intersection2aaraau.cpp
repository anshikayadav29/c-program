#include <iostream>
#include <set>
using namespace std;

int main() {
    int a[] = {1,2,2,3};
    int b[] = {2,2,4};
    set<int> s;

    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 3; j++)
            if(a[i] == b[j]) s.insert(a[i]);

    for(int x : s) cout << x << " ";
}
