#include <iostream>
using namespace std;

struct Student {
    int id;
};

void update(Student &s) {
    s.id = 100;
}

int main() {
    Student s;
    s.id = 10;

    update(s);
    cout << s.id;
    return 0;
}
