#include <iostream>
using namespace std;

struct Student {
    int marks;
};

void addBonus(Student &s) {
    s.marks += 5;
}

int main() {
    Student s;
    cin >> s.marks;

    addBonus(s);
    cout << s.marks;
    return 0;
}
