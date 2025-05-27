#include <iostream>
using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2;
    cout << "Enter start time (hh mm ss): ";
    cin >> h1 >> m1 >> s1;
    cout << "Enter end time (hh mm ss): ";
    cin >> h2 >> m2 >> s2;

    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;

    int diff = t2 - t1;

    int h = diff / 3600;
    diff %= 3600;
    int m = diff / 60;
    int s = diff % 60;

    cout << "Time Difference = " << h << " : " << m << " : " << s << endl;

    return 0;
}