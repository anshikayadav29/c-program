#include <iostream>
using namespace std;

int main() {
    int h[] = {3,0,2,0,4};
    int n = 5, water = 0;

    for(int i = 1; i < n-1; i++) {
        int lmax = 0, rmax = 0;

        for(int j = 0; j <= i; j++)
            lmax = max(lmax, h[j]);

        for(int j = i; j < n; j++)
            rmax = max(rmax, h[j]);

        water += min(lmax, rmax) - h[i];
    }
    cout << water;
}
