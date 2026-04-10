#include <iostream>
using namespace std;

int main() {
    int arr[5] = {3,8,1,9,2};
    int min = arr[0];

    for(int i=1;i<5;i++)
        if(arr[i] < min)
            min = arr[i];

    cout << min;
}
