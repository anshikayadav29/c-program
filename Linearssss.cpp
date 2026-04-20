#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 1, 9};
    int key = 7;
    for(int i = 0; i < 5; i++)
        if(arr[i] == key) cout << i;
}
