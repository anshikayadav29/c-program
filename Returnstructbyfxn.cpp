#include <iostream>
using namespace std;

struct Student {
    int id;
};

Student getData() {
    Student s;
    s.id = 10;
    return s;
}

int main() {
    Student s = getData();
    cout << s.id;
    return 0;
}
