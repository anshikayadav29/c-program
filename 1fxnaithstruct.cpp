#include <iostream>
using namespace std;

struct Student {
    int id;
};

void display(Student s) {
    cout << s.id;
}

int main() {
    Student s;
    s.id = 5;

    display(s);
    return 0;
}
