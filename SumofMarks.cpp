#include <iostream>
using namespace std;

struct Student {
    int marks;
};

int main() {
    Student s[3];
    int sum = 0;

    for(int i=0;i<3;i++) {
        cin >> s[i].marks;
        sum += s[i].marks;
    }

    cout << sum;
    return 0;
}
