#include <iostream>
using namespace std;

struct Student {
    bool pass;
};

int main() {
    Student s;
    s.pass = true;

    cout << s.pass;
    return 0;
}
