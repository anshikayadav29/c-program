#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int even = 0, odd = 0;

    for(int i = 0; i < 10; i++)
        cin >> arr[i];

    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd;
}
