#include <iostream>
using namespace std;

struct Student {
    int marks;
};

void check(Student s) {
    if(s.marks >= 50)
        cout << "Pass";
    else
        cout << "Fail";
}

int main() {
    Student s;
    cin >> s.marks;

    check(s);
    return 0;
}
