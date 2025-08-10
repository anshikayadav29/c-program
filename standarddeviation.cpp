#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    float data[100], mean = 0, sd = 0;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> data[i];
        mean += data[i];
    }
    mean /= n;
    for(int i = 0; i < n; i++) {
        sd += pow(data[i] - mean, 2);
    }
    sd = sqrt(sd / n);
    cout << "Standard Deviation = " << sd;
    return 0;
}