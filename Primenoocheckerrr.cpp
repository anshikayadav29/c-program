#include <iostream>
using namespace std;

int main() {
    int n;
    bool prime = true;

    cout << "Enter Number: ";
    cin >> n;

    for(int i=2;i<n;i++) {
        if(n%i==0) {
            prime = false;
            break;
        }
    }

    if(prime)
        cout << "Prime Number";
    else
        cout << "Not Prime";

    return 0;
}
