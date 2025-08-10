#include <iostream>
using namespace std;
struct Distance {
    int feet;
    float inch;
};
int main() {
    Distance d1, d2, sum;
    cout << "Enter first distance (feet inch): ";
    cin >> d1.feet >> d1.inch;
    cout << "Enter second distance (feet inch): ";
    cin >> d2.feet >> d2.inch;
    sum.inch = d1.inch + d2.inch;
    sum.feet = d1.feet + d2.feet;
    if (sum.inch >= 12.0) {
        sum.feet += int(sum.inch) / 12;
        sum.inch = int(sum.inch) % 12 + (sum.inch - int(sum.inch));
    }
    cout << "Sum = " << sum.feet << " feet " << sum.inch << " inches" << endl;
    return 0;
}