#include <iostream>
using namespace std;

int main() {
    int arr[] = {-1, 2, -3, 4, 5};
    int* p = arr;
    int pos = 0, neg = 0;

    for(int i = 0; i < 5; i++) {
        if(*(p + i) >= 0)
            pos++;
        else
            neg++;
    }

    cout << "Positive = " << pos << endl;
    cout << "Negative = " << neg;

    return 0;
}
