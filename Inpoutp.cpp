#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    Student s;

    cin >> s.name >> s.marks;

    cout << s.name << " " << s.marks;

    return 0;
}
