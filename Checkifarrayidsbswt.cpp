#include <iostream>
using namespace std;

int main() {
    int a[] = {1,2,3,4};
    int b[] = {2,3};

    bool subset = true;

    for(int i=0;i<2;i++) {
        bool found = false;
        for(int j=0;j<4;j++) {
            if(b[i]==a[j]) found = true;
        }
        if(!found) subset = false;
    }

    if(subset) cout<<"Yes";
    else cout<<"No";
}
