#include <iostream>
using namespace std;

struct Student {
    int marks;
};

bool isPrime(int n) {
    if(n<2) return false;
    for(int i=2;i<n;i++)
        if(n%i==0) return false;
    return true;
}

int main() {
    Student s;
    cin >> s.marks;

    if(isPrime(s.marks))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
