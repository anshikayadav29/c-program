#include <iostream>
using namespace std;

int main() {
    int a[] = {1,2,3};
    int b[] = {4,5,6};
    int c[3];

    int *p1 = a, *p2 = b, *p3 = c;

    for(int i = 0; i < 3; i++) {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }

    for(int i = 0; i < 3; i++)
        cout << c[i] << " ";

    return 0;
}
