#include <iostream>
using namespace std;

struct Student {
    int marks;
};

void compare(Student s1, Student s2) {
    if(s1.marks > s2.marks)
        cout << "Student1 Higher";
    else
        cout << "Student2 Higher";
}

int main() {
    Student s1, s2;
    cin >> s1.marks >> s2.marks;

    compare(s1, s2);
    return 0;
}
