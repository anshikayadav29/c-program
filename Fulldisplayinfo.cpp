#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    Student s;
    cin >> s.name >> s.marks;

    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
