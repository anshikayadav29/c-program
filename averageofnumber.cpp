#include <iostream>
using namespace std;

int main() {
    int n;
    float a[100], sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << "Average = " << sum / n;
    return 0;
}