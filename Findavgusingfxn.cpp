#include <iostream>
using namespace std;

struct Student {
    int marks;
};

float avg(Student s[], int n) {
    int sum = 0;
    for(int i=0;i<n;i++)
        sum += s[i].marks;

    return (float)sum/n;
}

int main() {
    Student s[3];

    for(int i=0;i<3;i++)
        cin >> s[i].marks;

    cout << avg(s,3);
    return 0;
}
