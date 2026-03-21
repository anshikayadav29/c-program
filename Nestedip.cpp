#include <iostream>
using namespace std;

struct Address {
    string city;
};

struct Student {
    string name;
    Address addr;
};

int main() {
    Student s;
    cin >> s.name >> s.addr.city;

    cout << s.name << " " << s.addr.city;
    return 0;
}
