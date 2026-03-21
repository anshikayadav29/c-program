#include <iostream>
using namespace std;

struct Student {
    string name;
};

int main() {
    Student s;
    s.name = "Old";

    s.name = "New";

    cout << s.name;
    return 0;
}
